# libft

## GRADES 125/100

## Introduction
`libft` is a project from the 42 programming school. The goal is to recreate a set of standard C library functions, as well as some additional utility functions, to gain a deeper understanding of their inner workings and to improve our programming skills. This project helps in developing a personal library that can be reused in future projects.

## Purpose
- **Enhance Understanding**: By re-implementing standard C functions, we gain a better understanding of how they work and the underlying principles of memory management, string manipulation, and data structures.
- **Build a Reusable Library**: The functions created in this project form a foundational library (`libft`) that can be utilized in future projects, providing a solid base of common functionality.

## Features
The `libft` project includes the implementation of various functions categorized into different sections:

### Part 1 - Libc Functions
Re-implementation of standard C library functions for string manipulation, memory management, and more.

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memccpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_strlen`
- `ft_strdup`
- `ft_strcpy`
- `ft_strncpy`
- `ft_strcat`
- `ft_strncat`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strstr`
- `ft_strnstr`
- `ft_strcmp`
- `ft_strncmp`
- `ft_atoi`
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

### Part 2 - Additional Functions
Functions that are not part of the standard C library but are useful for various tasks.

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Bonus Part - Linked List Functions
Functions to manipulate linked lists.

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

## Usage
1. clone the repo.
2. execute make inside the repo 
3. use the libft.a library in your programes by including "libft.h"
   and compiling wih the folowing flags gcc -o my_program my_program.c -L./<repo name> -lft


