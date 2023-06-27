# 0x05. Python - Exceptions

This project covers various tasks related to exceptions in Python. Each task focuses on different aspects of exception handling and demonstrates their usage in practical scenarios.

## Learning Objectives

Upon completion of this project, you should be able to:

- Explain why Python programming is awesome
- Understand the difference between errors and exceptions
- Use exceptions to handle errors in Python programs
- Identify situations where exception handling is necessary
- Implement proper exception handling techniques
- Understand the purpose of catching exceptions
- Raise built-in exceptions in Python
- Implement clean-up actions after an exception

## Requirements

- Allowed editors: vi, vim, emacs
- All files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
- All files should end with a new line
- The first line of all files should be exactly `#!/usr/bin/python3`
- A `README.md` file, at the root of the project folder, is mandatory
- Your code should use the pycodestyle (version 2.8.\*) coding style
- All files must be executable
- The length of your files will be tested using `wc`

## Tasks

### Task 0: Safe list printing

Write a function that prints `x` elements of a list.

- Prototype: `def safe_print_list(my_list=[], x=0):`
- `my_list` can contain any type of elements (integer, string, etc.)
- All elements must be printed on the same line, followed by a new line.
- `x` represents the number of elements to print.
- `x` can be greater than the length of `my_list`.
- The function should use `try` and `except` to handle exceptions.
- You are not allowed to import any modules.
- You are not allowed to use the `len()` function.

### Task 1: Safe printing of an integers list

Write a function that prints an integer using `"{:d}".format()`.

- Prototype: `def safe_print_integer(value):`
- `value` can be any type of value (integer, string, etc.).
- The integer should be printed followed by a new line.
- The function should return `True` if the value has been correctly printed (i.e., the value is an integer).
- Otherwise, it should return `False`.
- The function should use `try` and `except` to handle exceptions.
- You are not allowed to import any modules.
- You are not allowed to use the `type()` function.

### Task 2: Print and count integers

Write a function that prints the first `x` elements of a list, considering only integers.

- Prototype: `def safe_print_list_integers(my_list=[], x=0):`
- `my_list` can contain any type of elements (integer, string, etc.).
- All integers should be printed on the same line, followed by a new line.
- Other types of values in the list should be skipped without raising an exception.
- `x` represents the number of elements to access in `my_list`.
- `x` can be greater than the length of `my_list`. If that's the case, an exception is expected to occur.
- The function should use `try` and `except` to handle exceptions.
- You are not allowed to import any modules.
- You are not allowed to use the `len()` function.

### Task 3: Integers division with debug

Write a function that divides two integers and prints the result.

- Prototype: `def safe_print_division(a, b):`
- You can assume that `a` and `b` are integers.
- The result of the division should print followed by a new line (`/`), or by the message `Inside result:` followed by the result (`%`).
- The function should return the value of the division, or `None` if `b` is equal to `0`.
- The function should use `try`, `except`, and `finally` to handle exceptions and ensure that proper clean-up is performed.
- The code should not be executed when the file is imported.
- You are not allowed to import any modules.

### Task 4: Divide a list

Write a function that divides element by element two lists and returns a new list with the divisions.

- Prototype: `def list_division(my_list_1, my_list_2, list_length):`
- `my_list_1` and `my_list_2` can contain any type (integer, string, etc.).
- `list_length` can be larger than the lengths of both lists.
- The function should return a new list (length = `list_length`) with all divisions.
- If 2 elements can’t be divided, the division should be replaced by `0`.
- If an element is not an integer or a float:
    - print: `wrong type`
    - And the function should return `None`.
- If the division can’t be done (`/0`):
    - print: `division by 0`
    - And the function should return `None`.
- All divisions should be rounded to 2 decimal places.
- You have to use `try`, `except`, `finally` to implement this function.
- You are not allowed to import any modules.

### Task 5: Raise exception

Write a function that raises a type exception.

- Prototype: `def raise_exception():`
- You are not allowed to import any modules.

### Task 6: Raise a message

Write a function that raises a name exception with a message.

- Prototype: `def raise_exception_msg(message=""):`
- You are not allowed to import any modules.

## How to Use

1. Clone this repository to your local machine using the following command:
'''
git clone https://github.com/chaimaahassoune/alx-higher_level_programming.git
'''
2. Navigate to the project directory: 
cd alx-higher_level_programming
3. Each task is implemented in a separate Python file. You can find the solution to each task in its respective file.

4. Run the Python files individually to test the solutions.

5. You can modify the files and add your own code as needed.
