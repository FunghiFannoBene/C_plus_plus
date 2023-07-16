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

Best practice

Prefer ‘\n’ over std::endl when outputting text to the console.


#std:cin

std::cin is used to get an input value (cin = character input)

<< is used with std::cout, and shows the direction that data is moving (if std::cout represents the console, the output data is moving from the variable to the console). std::cout << 4 moves the value of 4 to the console
>> is used with std::cin, and shows the direction that data is moving (if std::cin represents the keyboard, the input data is moving from the keyboard to the variable). std::cin >> x moves the value the user entered from the keyboard into x
