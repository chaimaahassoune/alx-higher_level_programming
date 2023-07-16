# 0x0C. Python - Almost a circle

This project is part of the Higher-Level Curriculum at ALX School. It focuses on various aspects of Python programming, including object-oriented programming (OOP), unit testing, file handling, and serialization.

## Project Overview

The goal of this project is to create a class hierarchy that represents different shapes, with a focus on rectangles and squares. The project involves implementing various functionalities such as calculating area, displaying shapes, updating attributes, converting instances to dictionaries, and saving/loading instances to/from files.

The project is divided into multiple tasks, each building upon the previous one. The tasks cover topics such as class inheritance, private attributes, getters/setters, method overriding, serialization/deserialization, unit testing, and more.

## Project Structure

The project directory structure is as follows:

0x0C-python-almost_a_circle/
├── models/
│ ├── init.py
│ ├── base.py
│ ├── rectangle.py
│ └── square.py
├── tests/
│ ├── init.py
│ ├── test_models/
│ │ ├── init.py
│ │ ├── test_base.py
│ │ ├── test_rectangle.py
│ │ └── test_square.py
│ └── test_models.py
├── README.md
└── main.py


The `models` directory contains the implementation of the classes: `Base`, `Rectangle`, and `Square`. The `tests` directory contains the unit tests for the classes. The `README.md` file provides an overview of the project and its tasks.

## Getting Started

To run the project, follow these steps:

1. Clone the repository:

   ```shell
   git clone <repository_url>

2. Navigate to the project directory:

cd 0x0C-python-almost_a_circle


## Running the Tests

To run the unit tests, use the following command:

python3 -m unittest discover tests


This command will discover and execute all the test cases in the `tests` directory.

## Coding Style

The code follows the PEP 8 style guide. To validate the code style, you can use the `pycodestyle` tool. It can be installed using the following command:

pip install pycodestyle

After installation, you can check the code style by running:

pycodestyle .
## Authors
- CHAIMAA HASSOUNE 
