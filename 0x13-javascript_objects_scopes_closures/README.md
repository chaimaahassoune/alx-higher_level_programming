# Project 0x13: JavaScript - Objects, Scopes, and Closures

## Introduction

This project focuses on understanding JavaScript programming concepts related to objects, scopes, and closures. It covers various tasks that involve creating classes, working with inheritance, and implementing functions for different functionalities.

## Project Tasks

### Task 0: Rectangle #0

- Create an empty class `Rectangle` using the class notation.

### Task 1: Rectangle #1

- Define a class `Rectangle` that takes two arguments `w` and `h`.
- Initialize instance attributes `width` and `height` with the values of `w` and `h`.

### Task 2: Rectangle #2

- Modify the `Rectangle` class from Task 1.
- If `w` or `h` is equal to 0 or not a positive integer, create an empty object.

### Task 3: Rectangle #3

- Enhance the `Rectangle` class from Task 2.
- Add an instance method called `print()` that prints the rectangle using the character 'X'.

### Task 4: Rectangle #4

- Further enhance the `Rectangle` class from Task 3.
- Add instance methods:
  - `rotate()` to exchange the width and height of the rectangle.
  - `double()` to double the width and height.

### Task 5: Square #0

- Create a class `Square` that inherits from the `Rectangle` class from Task 4.
- Implement the constructor with one argument `size`.
- Call the constructor of `Rectangle` using `super()`.

### Task 6: Square #1

- Extend the `Square` class from Task 5.
- Add an instance method called `charPrint(c)` that prints the square using the character `c` (default is 'X').

### Task 7: Occurrences

- Write a function `nbOccurences(list, searchElement)` that returns the number of occurrences of `searchElement` in `list`.

### Task 8: Esrever

- Write a function `esrever(list)` that returns the reversed version of a list without using the built-in `reverse` method.

### Task 9: Log me

- Write a function `logMe(item)` that prints the number of arguments already printed and the new argument value in the format: `<number arguments already printed>: <current argument value>`.

### Task 10: Number conversion

- Write a function `converter(base)` that converts a number from base 10 to another base passed as an argument.

## Environment

- All code is interpreted on Ubuntu 20.04 LTS using Node.js (version 14.x).
- Use the provided starter code and follow the given requirements.

## Usage

- Clone the provided GitHub repository.
- Complete each task according to the given requirements.
- Ensure your code is semistandard compliant and follows the specified style guidelines.
- Create a `README.md` file at the root of the project directory to provide an overview of the project, including any additional information or considerations.

