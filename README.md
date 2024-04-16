# Prefix-To-Assembly-Code-Generator

A simple C program to convert prefix expressions representing high-level logical operations into equivalent x86 assembly instructions. This program serves as a bridge between high-level programming logic and the corresponding low-level machine instructions, aiding in understanding and implementing assembly code generation.

## Features
- **Arithmetic Operations:** Supports basic arithmetic operations such as addition (+), subtraction (-), multiplication (*), and division (/).
- **Error Handling:** Validates the input format and provides error messages for invalid expressions.

## How It Works 
The program reads a prefix expression from the user in the format operator operand1 operand2, where operator is one of the supported arithmetic operations, and operand1 and operand2 are integer operands. It then parses the expression to extract the operator and operands and generates the corresponding x86 assembly code.

## Supported Operations
- Addition: +
- Subtraction: -
- Multiplication: *
- Division: /

## Getting Started  
To get started with the Hospital Management System, follow these steps:

**Prerequisites:**
- GCC (GNU Compiler Collection): To compile the C program.
- Text Editor or IDE: To view and modify the source code.

**Installation:**
- **Clone the Repository:**
  ```bash
    git clone https://github.com/your-username/Prefix-To-Assembly-Code-Generator.git
  ```
- **Navigate to the Project Directory:**  
  ```bash
     cd Prefix-To-Assembly-Code-Generator
  ```
- **Compile the Program:**   
  ```bash
     gcc -o converter Prefix_to_Assembly_Code.c
  ```

**Usage**
- **Run the Program:**
  ```bash
    ./Prefix_to_Assembly_Code
  ```
- **Enter a Prefix Expression:**
  ```bass
    Enter a prefix expression (operator operand1 operand2):
    Example: + 10 20
  ```
- **Example**
  ```bash
    Enter a prefix expression (operator operand1 operand2): + 10 20
    add eax, 10
    add eax, 20
  ```
**Contributing**  
------------------
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

**Contact**
-----------
If you have any questions, suggestions, or feedback regarding this Project, feel free to reach out to the repository owner or open an issue. We appreciate your input!

