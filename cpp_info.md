#CPP
extension: .cpp 
compiled : (clang, g++,(g++-11) etc..) //compiler might not be installed with only sudo apt upgrade gcc || g++. 
/*
GCC 11 packages are not available in the default Ubuntu repositories. You can install them from the Ubuntu toolchain repository, but you will need to add the repository first.

To do this, open a terminal and run the following command:

sudo add-apt-repository -y ppa:ubuntu-toolchain-r/test
Then, update your package lists and install the GCC 11 packages:

sudo apt update
sudo apt install gcc-11 g++-11

*/
object oriented;
very fast;
not easy;

compilation process, file.o

https://www.learncpp.com/images/CppTutorial/Chapter0/LinkingObjects-min.png?ezimgfmt=rs:441x271/rscb2/ng:webp/ngcb2

file.o is a binary file another program called the linker kicks in. The job of the linker is three fold:

First, to take all the object files generated by the compiler and combine them into a single executable program.


#Flags

"-Wall",
"-Weffc++",
"-Wextra",
"-Wconversion",
"-Wsign-conversion",


#Language Version

Setting a language standard in g++

For GCC/G++, you can pass compiler flags -std=c++11, -std=c++14, -std=c++17, or -std=c++20 to enable C++11/14/17/20 support respectively. If you have GCC 8 or 9, you’ll need to use -std=c++2a for C++20 support instead.

Setting a language standard for VS Code

For VS Code, you can use compiler flags "-std=c++11",, "-std=c++14",, "-std=c++17",, or "-std=c++20", to enable C++11/14/17/20 support respectively. If you have GCC 8 or 9, you’ll need to use "-std=c++2a", for C++20 support instead.

Place the appropriate language standard flag (including the double quotes and comma) in the tasks.json configuration file, in the "args" section, on its own line before "${file}".

For C++20, in settings.json, change or add the following setting on its own line: "C_Cpp.default.cppStandard": "c++20".

