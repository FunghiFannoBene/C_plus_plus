std::cout

The iostream library contains a few predefined variables for us to use. 
One of the most useful is std::cout, which allows us to send data to the console to be printed as text. cout stands for “character output"

`
#include <iostream> // for std::cout standard::character output

int main()
{
    std::cout << "Hello world!"; // print Hello world! to console

    return 0;
}

#include <iostream> // for std::cout

int main()
{
    int x{ 5 };
    std::cout << "x is equal to: " << x;
    return 0;
}
`
std::endl prints a newline character to the console (causing the cursor to go to the start of the next line). In this context, endl stands for “end line”.
