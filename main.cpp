#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string.h>
#include "parser.h"

using namespace std;

int main(int argc, const char **argv)
{
    if (argc > 1)
    {
        int argIndex = 1;   // Index of the file name in the command line arguments
        int astEnabled = 0; // Flag to check if AST or ST flag is present

        if (argc == 3) // Check if flag is present
        {
            argIndex = 2;
            if (strcmp(argv[1], "-ast") == 0)
                astEnabled = 1;
            else if (strcmp(argv[1], "-st") == 0)
                astEnabled = 2;
        }

        string filepath = argv[argIndex];    // Get the file path from the command line arguments
        const char *file = filepath.c_str(); // Convert string to char array

        ifstream input(filepath);
        if (!input)
        {
            std::cout << "File not found!"
                      << "\n";
            return 1;
        }
        // Open file
        string file_str((istreambuf_iterator<char>(input)), (istreambuf_iterator<char>())); // Read file into string
        input.close();

        // Convert string to char array
        char file_array[file_str.size()];
        for (int i = 0; i < file_str.size(); i++)
            file_array[i] = file_str[i];

        // Create parser object and start parsing
        parser rpal_parser(file_array, 0, file_str.size(), astEnabled);
        rpal_parser.parse();
    }
    else
        cout << " Error : Incorrect no. of inputs " << endl;

    return 0;
}