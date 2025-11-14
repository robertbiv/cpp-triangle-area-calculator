# Triangle Area Calculator

A C++ program that calculates the area of a triangle given three points in 2D space.

## Description

This program takes three coordinate points (x, y) as input and calculates the area of the triangle formed by these points using Heron's formula. The program first calculates the lengths of all three sides of the triangle, then applies Heron's formula to determine the area.

## Features

- Accepts three 2D coordinate points as input
- Calculates side lengths using the distance formula
- Computes triangle area using Heron's formula
- Displays the result with 2 decimal place precision

## Requirements

- C++ compiler (e.g., g++, MSVC, clang++)
- C++ Standard Library with `<iostream>`, `<cmath>`, and `<iomanip>` support

## Compilation

### Using g++
```bash
g++ Source1.cpp -o triangle_calculator
```

### Using Visual Studio
Open the `homework2.vcxproj` file in Visual Studio and build the project.

## Usage

Run the compiled program and follow the prompts:

```bash
./triangle_calculator
```

The program will ask you to enter three points:
1. First point (x1, y1)
2. Second point (x2, y2)
3. Third point (x3, y3)

### Example

```
Enter three points
Enter the first point x1 and y1 seperated by a space: 0 0
Enter the second point x2 and y2 seperated by a space: 4 0
Enter the thrid point x3 and y3 seperated by a space: 0 3
The area of the triangle is 6.00 units.
```

## How It Works

1. **Input**: The program accepts three points (x₁, y₁), (x₂, y₂), and (x₃, y₃)
2. **Calculate side lengths**:
   - s₁ = √[(x₁-x₂)² + (y₁-y₂)²]
   - s₂ = √[(x₂-x₃)² + (y₂-y₃)²]
   - s₃ = √[(x₃-x₁)² + (y₃-y₁)²]
3. **Apply Heron's formula**:
   - Calculate semi-perimeter: s = (s₁ + s₂ + s₃) / 2
   - Calculate area: A = √[s(s-s₁)(s-s₂)(s-s₃)]
4. **Output**: Display the area with 2 decimal places

## Author

Robert Bennethum (rmb6287@psu.edu)

## Project Information

- **Class**: CMPSC 121
- **Project**: Homework 2
- **Original Due Date**: 9/24/21
