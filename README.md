# 42cursus - Printf

## About
The purpose of this project is to duplicate the behavior of the C function **printf()** , part of the **stdio.h** library.
It must manage the following parameters:
- **char** type variables.
- **string** type variables.
-  **int** type variables.
-  **unsigned int** type variables.
-  **hexadecimal int** type variables.
-  **pointer** type variables.
  <br>
  *For more detailed information, look at the subject of this project.*
   
## Files
### Makefile
- Makefile
### Header
- ft_printf.h
### Source code
- ft_printf.c
- ft_get_type_var.c
- ft_initialise_tab.c
- ft_iterstr.c
- ft_print_char.c
- ft_print_hexa.c
- ft_print_int.c
- ft_print_perc.c
- ft_print_punt.c
- ft_print_str.c
- ft_print_uns.c
- ft_puthexa_fd.c
- ft_puthexa_up_fd.c
- ft_putpunt.c
- ft_putuns_fd.c
- ft_util_functions.c
## Instructions

### 1. Cloning the repositories  
```shell
$ git clone https://github.com/proche-c/printf.git
```
### 2. Compiling  
```shell
$ cd path/to/printf && make
```
### 3. How to use it in your code. 
Include its header in the header of your code:
```shell
#include "ft_printf.h"
```
and, when compiling your code, add the required flags:
```shell
$ -lft -L path/to/libftprintf.a -I path/to/ft_printf.h
```
### 4. Cleaning all binary and executable files
```shell
$ cd path/to/printf && make fclean
```

