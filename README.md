
# Hi, Welcome to our project! 👋




![App Screenshot](https://scontent-cdg4-2.xx.fbcdn.net/v/t39.30808-6/429641439_792522079563968_5846022648137048441_n.png?_nc_cat=101&ccb=1-7&_nc_sid=cc71e4&_nc_ohc=qXNlfBeJUM0Q7kNvgF6Eb2G&_nc_oc=AdkI4zOWe6OTfTVWMESaOVKP5Dl8eqBz47gGEc9L1xahLaMcb_YuW51-ZI-k-2HK2Cg&_nc_zt=23&_nc_ht=scontent-cdg4-2.xx&_nc_gid=Z_mYbVAEjbBLnUmeTc2VRA&oh=00_AYGsT9WIMUSLHqyVo2RWCL-haLED7Zk1LBQRPhQ41aBHvw&oe=67EAEEB3)


# Custom printf project 📓

Hi everyone. As group of 3 students in Holberton School we made a mini version of printf from the standard function in C. 

This version of printf convert a specific character to display a string.

📅​ To make this project, we organize our week like this: 

📍Monday: Debrief, documentation and organization for the week + flowchart

📍Tuesday: create github repo + branch, start code

📍Wednesday: More code and test of our program

📍Thursday: More code and test then working on the readme and man page

📍Friday: Rework of the flowchart, oral training


## Installation & compilation 💻

If you want to install our project, create a repo in your Github, and use this command

```bash
  git clone https://github.com/jerome244/holbertonschool-printf.git
```

Compile with this command 
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
## Requierements ⚠️

- Allowed editors: vi, vim, emacs


- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89


- All your files should end with a new line


- A README.md file, at the root of the folder of the project is mandatory


- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl


- You are not allowed to use global variables


- No more than 5 functions per file

- The prototypes of all your functions should be included in your header file called main.h


- Don’t forget to push your header file


- All your header files should be include guarded

- Your code must be easy to read and clear 

- Add useful commentary

- Use simple names for your variables and functions 

## Functions used 👩‍💻

| Functions           | Functions specifiers                                                                |
| ----------------- | ------------------------------------------------------------------ |
|  int_print(const char *format,...) | int print_char(va_list args) |
| int _format(const char specifier, va_list args) | int print_string(va_list args) |
| int _putchar(char c) | int print_percent(va_list args)|
| int _int| int print_int(va_list args) |


## Examples ✍️

_printf("the string is %s\n", "salut") 
[![MIT License](https://img.shields.io/badge/output:-the_string_is_salut-green.svg)](https://choosealicense.com/licenses/mit/)

_printf("the integer is %i\n", '10')
[![GPLv3 License](https://img.shields.io/badge/output:-the_integer_is_10-yellow.svg)](https://opensource.org/licenses/)

_printf("the integer is %d\n '-66')
[![AGPL License](https://img.shields.io/badge/output:-the_integer_is_--66-blue.svg)](http://www.gnu.org/licenses/agpl-3.0)


## How to try your program ? 🚀

Tthe compiler will rename your file as 'a.out', so you have to run this command 

```bash
  ./a.out
```


## Authors 👷

- [@Jerome](https://github.com/jerome244)
- [@Laura](https://github.com/c4lice)
- [@Elhadj](https://github.com/hedjouj)
