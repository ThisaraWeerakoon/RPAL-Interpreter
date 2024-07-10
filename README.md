<h1 align="center">RPAL Interpreter</h1>
<p align="center"><i>Developing an interpreter for RPAL language </i></p>

## Description

The project entailed the development of a software system capable of analyzing and
parsing the RPAL programming language. [RPAL(Right-reference Pedagogic Algorithmic Language) ](https://rpal.sourceforge.net/) is a simple functional programming language.
This involved constructing a lexical analyzer to
break down RPAL code into its fundamental components, followed by the creation of an
Abstract Syntax Tree (AST) to represent the program's structure and logic. Subsequently, a
parsing algorithm was implemented to transform this AST into a Standardize Tree (ST).
Additionally, the system was required to execute RPAL programs using a CSE (Compiled
Stack Environment) machine. The ultimate objective was to ensure that the output of our
system matched that of an established RPAL interpreter, specifically "rpal.exe", when
provided with identical input programs.

- **Motivation:** To get hands on experience in developing of a programming language.
- **Why:** RPAL is a simple functional programming language,so it is easy to start with RPAL
- **Problem Solved:** Implemented a fully funcational interpreter including a lexical analyzer and a parser.Any program written in RPAL language can be executed in our programme.
- **What We Learned:** How to design a lexical analyzer,then how to parse the grammar and create abstract syntax tree and how to simplify it into syntax tree.Finally executing it on a CSE machine. Learned the underlying principles of programming languages.
  
## Table of Contents 

- [Installation](#installation)
- [Usage](#usage)
- [Credits](#credits)
- [License](#license)
- [Badges](#badges)
- [Features](#features)
- [How to Contribute](#how-to-contribute)

## Installation

Follow these steps to setup the code:

1. Clone the repository:
    ```sh
    git clone https://github.com/ThisaraWeerakoon/RPAL-Interpreter
    ```
2. Navigate to the project directory:
    ```sh
    cd RPAL-Interpreter
    ```
3. Compile the code for interpreter:
   I have built a <b>Makefile</b> to compile the code in one command:
    ```sh
    make
    ```
    
   Or you can directly compile using following command
    ```sh
    g++ -o myrpal main.cpp
    ```
    Now <b>myrpal.exe</b> created which is the RPAL interpreter

## Usage

Now to use the RPAL interpreter,you can test <b>myrpal.exe</b> with any programme written in RPAL language. In this repo there is a provided sample RPAL program <b>RPAL_test</b>.To test it use following command:

To execute program directly:
```sh
./myrpal rpal_test
```
To print the AST, use the −𝑎𝑠𝑡 switch.
```sh
./myrpal -ast rpal_test
```
After above commands you may see something similar below as output.

<img width="1366" alt="Screenshot 2024-07-09 at 22 26 05" src="https://github.com/ThisaraWeerakoon/RPAL-Interpreter/assets/83450623/27e48cb4-1c2a-42c2-aa29-bb9eb7f6e8c3">



## Doucmentation
You can access the comprehensive report including the folder structure and other essential theory biehind implementtion  <b>Report.pdf</b>

## Credits

We used several third-party assets and tutorials, including:

- [RPAL Language](https://rpal.sourceforge.net/)
- [How to build a Makefile](https://www.softwaretestinghelp.com/cpp-makefile-tutorial/#:~:text=A%20makefile%20typically%20starts%20with,specified%20by%20the%20target%20label.)

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.


## Features

- Implemented a lexical analyzer which creates tokens.You can find the lexical rules <b>Lexical_Rules.pdf</b>
- After lexical analyzer,program is parsed and create [Abstract Syntax Tree](https://en.wikipedia.org/wiki/Abstract_syntax_tree) 
- Further the AST is also converted into Standarize Tree
- Finally program is exeuted in <b>CSE Machine (Control Stack Environement Machine)</b> and given the final output

## How to Contribute

We welcome contributions from the community! If you are interested in contributing, please follow these guidelines:

1. Fork the repository.
2. Create a new branch for your feature or bug fix:
    ```sh
    git checkout -b feature-or-bugfix-name
    ```
3. Commit your changes:
    ```sh
    git commit -m "Description of the feature or bug fix"
    ```
4. Push to the branch:
    ```sh
    git push origin feature-or-bugfix-name
    ```
5. Open a pull request and provide a detailed description of your changes.
