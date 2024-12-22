# C Pointer Reassignment and Unexpected Behavior

This example demonstrates a common pitfall in C programming related to pointer reassignment.  When a pointer is reassigned to a new memory address, the original memory location is not affected unless explicitly modified through the original pointer.

The `bug.c` file contains code demonstrating this behavior.  The `bugSolution.c` file does not offer a solution in the conventional sense, but instead clarifies the behavior of pointers in C and highlights what to expect when reassignment occurs. 