# 0x0F. C - Function Pointers
Function pointers store memory address of functions and can be used to \n
create function call to functions pointed by them.

**int (_*cmp_)(int);**
Here the first int signifies the return type,
     cmp - the name of the function pointer,
     int - last int is the parameter type.
```
void fun(int a)
{
	printf("Value of a id %d\n", a);
}
int main(void)
{
	void (*fun_ptr)(int);
	fun_ptr(10) = fun;

	fun_ptr(10);
}
```

Function pointers can be used as parameters to other functions.
```
int int_index(int *array, int (*cpm)(int))
{}
```

---

> ## Mandatory Files
+ putchar.c
+ function_pointers.h

> ## Mandatory Tasks
+ 0-print_name.c
+ 1-array_iterator.c
+ 2-int_index.c
+ 3-main.c
+ 3-op_functions.c
+ 3-get_op_func.c
+ 3-calc.h

