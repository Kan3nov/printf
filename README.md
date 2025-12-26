*This activity has been created as part of the 42 curriculum by klafi*

# Description
The goal of this project is re-implementing some of the libc functions, string manipulation functions, and linked list implementation with structs.
# Instructions
To create the library "libft.a", just type `make`. Then, you can use all the functions in the library by compiling your main.c file in a similar format : `cc -Wall -Wextra -Werror 'yourmain.cfile' libft.a -o run`.
# Resources
- 42-Curriculum PDFs
- Peer collaboration
- AI(chat GPT)
# Library Contents
1. Libc functions (you can use the man to know each function's functionality):
   - isalpha
   - isdigit
   - isalnum
   - isascii
   - isprint
   - strlen
   - memset
   - bzero
   - memcpy
   - memmove
   - strlcpy
   - strlcat
   - toupper
   - tolower
   - strchr
   - strrchr
   - strncmp
   - memchr
   - memcmp
   - strnstr
   - atoi
   - calloc
   - strdup
2. Additional functions:
   - ft_substr
   - ft_strjoin
   - ft_strtrim
   - ft_split
   - ft_itoa
   - ft_strmapi
   - ft_striteri
   - ft_putchar_fd
   - ft_putstr_fd
   - ft_putendl_fd
   - ft_putnbr_fd
3. Linked list:
   - ft_lstnew
   - ft_lstadd_front
   - ft_lstsize
   - ft_lstlast
   - ft_lstadd_back
   - ft_lstdelone
   - ft_lstclear
   - ft_lstiter
   - ft_lstmap
