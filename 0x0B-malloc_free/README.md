# 0x0B. C - malloc, free

### Automatic Allocation
When declaring variables or usning strings within " ",
the program takes care of memory allocation.   	
```
     int n;
     char c;
     int *ptr;
     char array[3];
```

### Dynamic allocation
Allocating memory to store data without initially knowing the
size of the data it will hold.
_malloc_ , _calloc_ , _realloc_ are used.

> ## Malloc
Allocates specific bytes in memory and returns pointer to allocated memory.
```
void * malloc(size_t size);
```
*void* - Pointer to type of choice
*size* - number of bytes needed to allocate

malloc example:
```
char *str;

	str = malloc(sizeof(char) * 3);
	str[0] = 'O';
	str[1] = 'K';
	str[2] = '\0';

return (0);
```
On error, malloc returns NULL

> ## Valgrind
Keeps track of allocated and deallocated memory.
A programming tool for mem debugging, memory leak detection and profiling.

> ## free
Returns memory back to the operating system when not needed anymore.
```
	free(str);
```

---

> ## Mandatory files
+ putchar.c
+ main.h

> ## Mandatory tasks
* 0-create_array.c
* 1-strdup.c
* 2-str_concat.c
* 3-alloc_grid.c
* 4-free_grid.c

