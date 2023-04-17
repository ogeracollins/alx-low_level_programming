# 0x0D. C - Preprocessor

> ## Macros
Piece of code defined with the help of #define directive.

```
#define MACRO_NAME(arg1, arg2, ...) {code to expand}

#define SWAP(a, b) { \
		a ^= b; \
		b ^= a; \
		a ^= b; \
	}
```

> ## Include Guard 
Construct used to avoid *double inclusion* wheni dealing with #include directive.

```
#ifndef MACRO_NAME_H
#define MACRO_NAME_H

typedef struct {
	...
} MyStruct;

int myFunction(MyStruct *value);

#endif
```

### Static Linking
-Copies all library modules used in program into final .exe at final compilation step.
-Memory concerns as size grows.
-Needs to be recompiled once libraries are updated.
.lib, .a

### Dynamic Linking
-Loads external libraries into the program and binding them using their addresses.
-No size issues as its only the address provided.
-No need for recompilation.
.dll, .so

> ## Mandatory Tasks
* 0-object_like_macro.h
* 1-pi.h
* 2-main.c
* 3-function_like_macro.h
* 4-sum.h
