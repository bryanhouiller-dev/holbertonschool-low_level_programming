Measurement Methodology
Three C programs were executed to examine runtime and the effect of
different code structures. Each program was run three times, and the
execution times printed by the programs were recorded. The programs use
the C clock() function: elapsed CPU time is calculated by dividing the
difference between the ending and starting clock values by
CLOCKS_PER_SEC.

For the baseline program, the same loop was executed for 100,000,000
iterations in every run. The measured times were 0.314845 s, 0.322351 s,
and 0.219402 s. Their average was approximately 0.285533 s.

For the algorithm comparison, the array contained 50,000 integers
initialized with their index values. The naive and single-pass functions
were timed separately. The naive times were 0.571526 s, 0.578410 s, and
1.102735 s, giving an average of approximately 0.750890 s. The
single-pass times were 0.000018 s, 0.000028 s, and 0.000023 s, giving an
average of approximately 0.000023 s.

For the instrumented program, the dataset contained 50,000 values. The
program measured dataset construction, processing, checksum reduction,
and total runtime separately. Each experiment was repeated three times.
Averages are used below to make the three observations easier to
compare.
Observed Performance Differences
The baseline results show some variation between runs: the fastest was
0.219402 s and the slowest was 0.322351 s. Nevertheless, all three runs
performed the same 100,000,000-iteration workload.

The largest measured difference appeared in the algorithm comparison.
The naive implementation took between 0.571526 s and 1.102735 s, while
the single-pass implementation took between 0.000018 s and 0.000028 s.
The naive function has nested loops: for each index i, it scans all
elements from index zero through i. This repeats work on earlier array
elements. The single-pass function visits each of the 50,000 elements
only once. This difference in the number of operations explains the much
longer measured runtime of the nested-loop version.

An important correctness detail must also be reported: the outputs were
not equal. The naive function returned 625025000, whereas the
single-pass function returned 25000. The single-pass result is the
number of even values in the array. The naive function adds the even
values found in every prefix, so it counts many elements repeatedly.
Therefore, these timings demonstrate the cost of repeated work, but the
two functions do not currently solve the same counting task and are not
a fully equivalent performance comparison.
Relation Between Runtime and Energy Consumption
Energy consumption was not measured directly in these experiments.
Runtime can only be used as an indirect indicator: a longer execution
generally means the processor remains active for more time, which may
increase energy use. The naive function's average runtime of about
0.750890 s was much longer than the single-pass average of about
0.000023 s. This suggests a potential energy-efficiency advantage for
avoiding repeated operations. However, these measurements do not provide
power in watts or energy in joules, so no exact energy saving can be
claimed.
Limitations of the Experiment
The tests were performed only three times, on one execution environment.
Operating-system scheduling, background processes, processor state,
compiler settings, and hardware can affect timings. The baseline results
varied noticeably, and the naive algorithm's third run (1.102735 s) was
slower than its first two runs. Very short measurements, such as
0.000018 s, are also close to the practical resolution of simple timing
and should be interpreted cautiously. Finally, the algorithm comparison
has the correctness difference described above. In the instrumented
program, total times were 0.000811 s, 0.001177 s, and 0.001068 s; each
was greater than its individual phase times, as expected.
Practical Engineering Takeaway
The measurements show that algorithm structure can have a major impact
on runtime. Visiting each element once is substantially faster than
repeatedly scanning prefixes. Engineers should avoid unnecessary
repeated work, measure multiple runs, and check that compared
implementations produce the same result before drawing a performance
conclusion. Runtime is useful for benchmarking and as an energy-related
proxy, but direct energy measurement would be required to quantify
actual energy consumption.