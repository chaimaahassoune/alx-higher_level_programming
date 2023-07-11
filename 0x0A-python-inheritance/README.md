# 0x0A. Python - Inheritance

## Description
This project contains Python scripts and classes that demonstrate the concept of inheritance in object-oriented programming (OOP). It covers various topics such as superclass, subclass, method overriding, multiple inheritance, and more.

## Learning Objectives
By the end of this project, you should be able to:

- Explain the benefits of Python programming
- Understand the concepts of superclass, subclass, and inheritance
- List attributes and methods of a class or instance
- Implement class inheritance and multiple base classes
- Override methods and attributes from a base class
- Utilize isinstance, issubclass, type, and super built-in functions

## Requirements
- Python 3.8.5
- pycodestyle 2.8.* (for code style checks)

## Files and Directories
- `0-lookup.py`: Python script that returns the list of available attributes and methods of an object.
- `1-my_list.py`: Python script that defines a class `MyList` which is a subclass of the built-in `list` class. It provides a method to print the list in sorted order.
- `2-is_same_class.py`: Python script that defines a function `is_same_class` which checks if an object is exactly an instance of a specified class.
- `3-is_kind_of_class.py`: Python script that defines a function `is_kind_of_class` which checks if an object is an instance of, or if it is an instance of a class that inherited from, a specified class.
- `4-inherits_from.py`: Python script that defines a function `inherits_from` which checks if an object is an instance of a class that inherited (directly or indirectly) from a specified class.
- `5-base_geometry.py`: Python script that defines an empty class `BaseGeometry`.
- `6-base_geometry.py`: Python script that defines a class `BaseGeometry` which contains a method `area()` that raises an Exception with the message "area() is not implemented".
- `7-base_geometry.py`: Python script that defines a class `BaseGeometry` with an additional method `integer_validator(name, value)` to validate the value as an integer.
- `8-rectangle.py`: Python script that defines a class `Rectangle` which inherits from `BaseGeometry`. It provides a constructor to initialize the `width` and `height` attributes.
- `9-rectangle.py`: Python script that defines a class `Rectangle` which inherits from `BaseGeometry`. It provides a constructor to initialize the `width` and `height` attributes and implements the `area()` method.
- `10-square.py`: Python script that defines a class `Square` which inherits from `Rectangle`. It provides a constructor to initialize the `size` attribute.
- `11-square.py`: Python script that defines a class `Square` which inherits from `Rectangle`. It provides a constructor to initialize the `size` attribute and overrides the `__str__` method to print the square description.

## Usage
You can run the Python scripts individually to see the output or import the classes/functions in other scripts for further use.

```bash
$ ./0-main.py
$ ./1-main.py
$ ./2-main.py
...

