# PRINTF PROJECT 🎉

![687474~2](https://github.com/user-attachments/assets/9f4bcaac-1270-43d2-acc1-a1ba2f56f6b9)

This repository contains the custom implementation of the printf function in c language , created as a part of a team project in holberton school named "printf" with various conditions and requirements , this custom function is supposed to recreate and mimic the behaviour of the printf command. enabling formatted output with various specifiers. 


# Overview 📝

The _printf() function takes a format string and arguments to generate structured output. It supports various specifiers like %c, %s, %d, %i, and %%, among others. Its implementation is designed to be flexible and modular, allowing for easy expansion with additional specifiers when needed. 🖥️

# The compilation and betty style ⌨️ 

All your files will be compiled on Ubuntu 20.04 LTS 🖥️ using gcc, with the options:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c 

Your code should use the Betty style ✍️. It will be checked using betty-style.pl and betty-doc.pl.

# All the requirements 

• Allowed editors: vi, vim, emacs 📝

• All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options: 🖥️

• You are not allowed to use global variables 🚫

• Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl 📚

• In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation; do not push your own main.c file. Our main.c files might be different from the one shown in the examples 🔧

• The prototypes of all your functions should be included in your header file called main.h 📑

• No more than 5 functions per file 📂

    
# Examples of utilizations and output 

![image](https://github.com/user-attachments/assets/0b8053af-d46c-4056-a4fd-dd1b98dd2c32)



# Testing 

![Screenshot 2025-03-28 123953](https://github.com/user-attachments/assets/89288894-dd52-4e45-a846-48cfcf2bc089)

# Man page

![image](https://github.com/user-attachments/assets/c78d025c-762d-482d-897c-ee8c841fdfb0)



# Authorized functions and Macros  


    write (man 2 write)
    
    malloc (man 3 malloc)
    
    free (man 3 free)
    
    va_start (man 3 va_start)
    
    va_end (man 3 va_end)
    
    va_copy (man 3 va_copy)
    
    va_arg (man 3 va_arg)

# Function prototypes 


int get_specifier(const char s, va_list args);

int _percent(va_list args);

int _putchar(char c);

int _char(va_list args);

int _string(va_list args);

int _printf(const char *format, ...);

int _integer(va_list args);

# File description 

• _printf - Generates formatted output 🎯.

• _putchar - Outputs the character c to stdout ✍️.

• func_specifier.c - Returns a function linked to a specifier 🔎.


# Flowchart
![image](https://github.com/user-attachments/assets/ca036a22-8553-44a1-8b79-27dffd55305f)



