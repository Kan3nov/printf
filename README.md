*This activity has been created as part of the 42 curriculum by klafi*

# Description
The goal of this project is re-implementing the printf function in the <stdio.h> library. It handles the following conversions: cspdiuxX% only.
# Instructions
To create the library "printflibft.a", just type `make`. Then, you can use the ft_printf function by compiling your main.c file in a similar format : `cc -Wall -Wextra -Werror 'yourmain.cfile' printflibft.a -o run`.
# Resources
- 42-Curriculum PDFs
- Peer collaboration
- AI; it was used mildly for explaining some somewhat ambiguous ideas. **_No code was written by it_**.
- Youtube; [variadic functions](https://youtu.be/3iX9a_l9W9Y?si=4yOJF3TmMxpL9MCQ).
# Algorithms Used
## Using malloc
`malloc` were highly avoided to evade memory leaks. There was a handler (function) for each placeholder which writes characters immediately without saving them in a buffer and returns the number of characters written. The `%x` and `%X` placeholders were the only whose handlers used `malloc` and `free`. The passed unsigned integer was converted to hex in an allocated string, written via `write`, and then the string is `free`'d before exiting the handler.
## Integer writing
Converting from integer to ascci to handle the `%d`, `%i`, and the `%u` rules used a simple alogrithm. Each digit in the integer is the result of dividing the number on 10 power n and then getting the remainder upon dividing it on 10 where 'n' is the decimal position of the digit starting from 0, from left to right. For example, the rightmost digit of the number 2501 would be the result of this expression : 
> (2501 / 10<sup>3</sup>) % 10
## Hexadecimal conversion
Converting from a decimal to a hexadecimal is also simple. The nth rightmost digit is obtained via the following formula (where n starts from 0, right to left):
> dig = (decimal / 16<sup>n</sup>) % 16