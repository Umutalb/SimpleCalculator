# Simple Calculator

## Description

This project is a simple console-based calculator written in C++. It performs basic arithmetic operations such as addition, subtraction, multiplication, and division. The program prompts the user to enter a mathematical expression and displays the result. It also changes the console color based on the operation's result or error status.

## Features

- Supports basic arithmetic operations: addition (`+`), subtraction (`-`), multiplication (`*`), and division (`/`).
- Provides visual feedback by changing the console color for different operations and error states.
- Allows the user to perform multiple calculations in a single session.

## Usage

1. Run the program.
2. Enter a mathematical expression in the format `a + b`, `a - b`, `a * b`, or `a / b`.
3. The result will be displayed, and the console color will change based on the operation:
   - Green for addition
   - Blue for subtraction
   - Yellow for multiplication
   - Magenta for division
   - Red for errors (such as division by zero or invalid operations)
4. The program will ask if you want to try another calculation. Enter `y` for yes or `n` for no.


## Code Explanation

The program uses template functions to perform the four basic arithmetic operations. It continuously prompts the user for input, processes the input to identify the operation, and then displays the result. The console color changes to provide visual feedback. The user is given the option to perform another calculation or exit the program.

## Requirements

- C++ Compiler.

## How to Run

1. Compile the program using a C++ compiler.
2. Run the compiled program. (SimpleCalculator.cpp)
