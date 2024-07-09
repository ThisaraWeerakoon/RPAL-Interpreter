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
- 
## Table of Contents 

- [Installation](#installation)
- [Usage](#usage)
- [Credits](#credits)
- [License](#license)
- [Badges](#badges)
- [Features](#features)
- [How to Contribute](#how-to-contribute)

## Installation

Follow these steps to set up the development environment for the project:

1. Clone the repository:
    ```sh
    git clone https://github.com/ThisaraWeerakoon/RPAL-Interpreter
    ```
2. Navigate to the project directory:
    ```sh
    cd ECommerce_Platform_DataBase_Project
    ```
3. Install the required dependencies for the backend:
    ```sh
    cd server
    npm install
    ```
4. Install the required dependencies for the frontend:
    ```sh
    cd client
    npm install
    ```
5. Set up the MySQL database:
    - Create a new database.
    - Import the provided SQL schema to set up the tables and initial data.
    - <b>database.sql</b>
6. Configure environment variables:
    - Create a `.env` file in the backend directory and add your database credentials.
7. Start the backend server:
    ```sh
    cd server
    node index.js
    ```
8. Start the frontend server:
    ```sh
    cd client
    npm start
    ```

## Usage

To use the platform, follow these steps:

1. Register an account or log in as a guest.
2. Browse through the product catalog and select items to add to your cart.
3. View your cart and proceed to checkout.
4. Enter delivery and payment details to complete the purchase.
5. Access the admin panel for detailed sales and inventory reports.


https://github.com/ThisaraWeerakoon/ECommerce_Platform_DataBase_Project/assets/83450623/6bfa00ac-e220-4056-b46a-63c1c468f3a1


## Doucmentation
You can access the software requirement specification <b>SRS Document.pdf</b>
and Entity Relationship Diagram <b>ER Diagram.pdf</b>

## Credits

We used several third-party assets and tutorials, including:

- [React Documentation](https://reactjs.org/docs/getting-started.html)
- [Node.js Documentation](https://nodejs.org/en/docs/)
- [MySQL Documentation](https://dev.mysql.com/doc/)

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Badges

![React](https://img.shields.io/badge/React-17.0.2-blue)
![Node.js](https://img.shields.io/badge/Node.js-14.17.0-green)
![MySQL](https://img.shields.io/badge/MySQL-8.0.25-orange)

## Features

- User registration and login
- Product catalog with variants
- Shopping cart and checkout system
- Inventory management
- Comprehensive reporting system
- Delivery estimation module

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
