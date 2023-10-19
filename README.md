
# Monty Interpreter

Monty is an interpreter for a simple stack-based programming language. It can be used to parse and execute Monty bytecode files, which contain a series of instructions for manipulating a stack data structure.

## Table of Contents

- [Getting Started](#getting-started)
- [Usage](#usage)
- [Supported Instructions](#supported-instructions)
- [Contributing](#contributing)
- [License](#license)

## Getting Started

To get started with Monty, follow these steps:

1. Clone the repository to your local machine:

2. Compile the Monty interpreter:


3. Run Monty with a Monty bytecode file:


## Usage

Monty accepts Monty bytecode files as input. These files contain a sequence of instructions for manipulating the stack.

For example, you can create a Monty bytecode file named `example.mnt` with the following content:

push 1
push 2
add
pall


Then, you can run Monty with this file:

./monty example.mnt

Monty will execute the instructions and print the output.

## Supported Instructions

Monty supports various instructions for stack manipulation. Here are some of the supported instructions:

- `push`: Pushes an integer onto the stack.
- `pop`: Removes the top element from the stack.
- `add`: Adds the top two elements of the stack.
- `sub`: Subtracts the top element from the second-top element.
- `mul`: Multiplies the top two elements of the stack.
- `div`: Divides the second-top element by the top element.
- `mod`: Computes the modulus of the second-top element by the top element.
- `pall`: Prints all elements of the stack.
- `pint`: Prints the top element of the stack.
- `swap`: Swaps the top two elements of the stack.
- `nop`: Does nothing.

You can find a complete list of supported instructions in the `monty.h` file.

## Contributing

If you would like to contribute to Monty, please follow these guidelines:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Make your changes and write tests if necessary.
4. Submit a pull request to the main repository.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
