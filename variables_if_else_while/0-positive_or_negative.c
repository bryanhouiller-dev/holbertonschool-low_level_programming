#include <stdio.h>

int main (void)
{
    int n;

    n = 0;

    if (n > 0)
    {   
       printf("%d is positive\n", n);
    }
    else 
    if (n == 0)
    {
       printf("%d is zero\n", n);
    }
    else
    {    
       printf("%d is negative\n", n);
    }
}
