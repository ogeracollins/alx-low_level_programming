# 0x10. C - Variadic Functions
This is a function declared to take a variable number of arguments.
Must have a prototype definition.
Needs to have atleast one fixed variable.
Defined using ellipsis **...** as the last argument
```
int func(int n, const char * a, ...);
```
Uses macros from the library _<stdarg.h>_ in its definition.

### va_list args
Declare a variadic function of type va_list named args.

### va_start(args, n)
Enables access to variadic function named args with n parameters.

### va_args(args, int);
Access the next variadic function argument in args of type int.

### va_end(args)
End traversal of variadic function arguments in args.

```
#include <stdarg.h>
void printNumber(int n, ...)
{
	int i;
	va_list args;
	va_start(args, n);

	for(i = 0; i < n; i++)
	{
		printf("%d\n", va_arg(args, int));
	}
	va_end(args);
}
```

> ## Const
Enables creation of a variable that can't be modified.
```
const int i = 6;
```

---

> ## Mandatory Files
+ putchar.c
+ variadic_functions.h

> ## Mandatory Tasks
* 0-sum_them_all.c
* 1-print_numbers.c
* 2-print_strings.c
* 3-print_all.c
