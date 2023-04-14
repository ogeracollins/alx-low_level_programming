# 0x0C. C - More malloc, free

## Contents covered:
exit (3), calloc, realloc

## calloc
Allocates specified amount of memory then initializes to 0.
```
void * calloc(size_t num, size_t size);
int *A = (int *)calloc(n, size0f(int);
```

## realloc
Resizes memory block allocated previously.
```
void * realloc(void * ptr, size_t size);
int *B = (int *)realloc(A, n/2 * sizeof(int));
```

> ## Mandatory files
+ main.h
+ putchar.c

> ## Mandatory Tasks
+ 0-malloc_checked.c
+ 1-string_nconcat.c
+ 2-calloc.c
+ 3-array_range.c

> ## Optional Tasks
+ 100-realloc.c
+ 101-mul.c
