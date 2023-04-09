# 0x09. C - Static libraries

A static library is a collection of object files linked to the program
during the linking phase but not relevant during compilation.

> ar
Creates static libraries, modify object files, list names of object files...

```
ar rc libutil.a util_file.o util_net.o util_math.o
```
r - Replace older object files with newer ones.
c - create the lib if it doesn't exist.

> ranlib
Create or update an archive index.
```
ranlib libutil.a
```

> nm
Displays info about symbols in a specified file.

> ## Mandatory files
* main.h
* putchar.c

> ##Mandatory tasks
+ libmy.a
+ create_static_lib.sh
