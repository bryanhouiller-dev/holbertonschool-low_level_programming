# Memory Behavior Analysis

## 1. Overview
This document analyzes memory management, stack vs. heap separation, pointer lifetimes, and common bugs (aliasing, use-after-free, segmentation faults, and memory leaks) across the provided programs.

---

## 2. Program Analyses

### A. `aliasing_example.c` (Aliasing & Use-After-Free)
- **Stack State:** Pointers `a` and `b` reside here.
- **Heap State:** A single `int` array allocated via `malloc`.
- **Aliasing Tracking:** Both `a` and `b` point to address `0x...` (heap).
- **Lifetime & Bug:** Once `free(a)` executes, the heap block is freed, making `b` a dangling pointer. Subsequent access (`b[3] = 1234;`) leads to undefined behavior.

### B. `crash_example.c` (NULL Pointer Dereference)
- **Stack State:** Pointer `nums` initialized to `NULL` (since `n=0`).
- **Bug:** Attempting `nums[0] = 42` dereferences a `NULL` pointer (`0x0`), triggering an immediate Segmentation Fault.

### C. `heap_example.c` (Nested Allocations & Memory Leaks)
- **Heap State:** Dynamic allocation of structs containing dynamic string buffers (`name`).
- **Bug Analysis:** `bob` is cleaned properly (`free(bob->name)` then `free(bob)`). However, `alice` is freed via `person_free_partial`, which forgets to free `alice->name`, causing a **memory leak**.

### D. `stack_example.c` (Stack Frames & Recursion)
- **Stack Behavior:** Every recursive call to `walk_stack` and `dump_frame` pushes a new stack frame containing local variables (`local_int`, `local_buf`, `marker`). Lifetimes are strictly bound to the scope of each function activation.

---

## 3. Corrected Assumptions & Findings
- **Initial assumption:** We might assume that calling `free(a)` automatically invalidates all pointers pointing to that address (`b`). 
- **Correction:** In C, pointers like `b` do not update automatically and become "dangling pointers". Static analysis or Valgrind is essential to catch these silent use-after-free bugs.