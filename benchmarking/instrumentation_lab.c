#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
    *state = (*state * 1103515245u) + 12345u;
    return *state;
}

static void build_dataset(void)
{
    unsigned int state;
    int i;

    state = SEED_VALUE;

    for (i = 0; i < DATASET_SIZE; i++)
        dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
    int i;
    int v;

    for (i = 0; i < DATASET_SIZE; i++)
    {
        v = dataset[i];
        v = (v * 3) + (v / 7) - (v % 11);
        if (v < 0)
            v = -v;
        dataset[i] = v;
    }
}

static unsigned long reduce_checksum(void)
{
    unsigned long sum;
    int i;

    sum = 0;
    for (i = 0; i < DATASET_SIZE; i++)
        sum = (sum * 131ul) + (unsigned long)dataset[i];

    return sum;
}

int main(void)
{
    unsigned long checksum;
    
    /* Variables pour les chronomètres */
    clock_t start_total, end_total;
    clock_t start_step, end_step;
    
    double total_time;
    double build_time;
    double process_time;
    double reduce_time;

    /* Début du chronomètre total */
    start_total = clock();

    /* 1. Chronométrage de BUILD_DATA */
    start_step = clock();
    build_dataset();
    end_step = clock();
    build_time = (double)(end_step - start_step) / CLOCKS_PER_SEC;

    /* 2. Chronométrage de PROCESS */
    start_step = clock();
    process_dataset();
    end_step = clock();
    process_time = (double)(end_step - start_step) / CLOCKS_PER_SEC;

    /* 3. Chronométrage de REDUCE */
    start_step = clock();
    checksum = reduce_checksum();
    end_step = clock();
    reduce_time = (double)(end_step - start_step) / CLOCKS_PER_SEC;

    /* Indique au compilateur que checksum est utilisée intentionnellement */
    (void)checksum;

    /* Fin du chronomètre total */
    end_total = clock();
    total_time = (double)(end_total - start_total) / CLOCKS_PER_SEC;

    /* Affichage strict selon le contrat de sortie */
    printf("TOTAL seconds: %.6f\n", total_time);
    printf("BUILD_DATA seconds: %.6f\n", build_time);
    printf("PROCESS seconds: %.6f\n", process_time);
    printf("REDUCE seconds: %.6f\n", reduce_time);

    return 0;
}
