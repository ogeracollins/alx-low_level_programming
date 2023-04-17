# 0x0E. C - Structures, typedef

> ## Structures
A user defined data type that allows combination od data items 
of different kinds.

```
struct User
{
	char *name;
	char *email;
	int age;
};
```
We access elements of a struct using '.' dot notation. 
or elements to a point structure using ->
```
struct User *user;

user = malloc(sizeof(struct User));
user->name = name;
user->email = email;
user->age = age;
```

> ## typedef
Used to give a type a new name;
```
typedef unsigned char byt;
```
Here, byt is used in place of unsigned char;

```
struct User{
	char *name;
	char *email;
} user;
```

> ## Mandatory Tasks
* dog.h
* 1-init_dog.c
* 2-print_dog.c
* 4-new_dog.c
* 5-free_dog.c
