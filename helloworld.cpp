#include <iostream>
#include <cstdlib>
#include <cerrno>
int main()
{
int word;
std::cout << "\ttype something:\t"; 
std::cin >> word; 
std::cout << "\tYou printed\t" << word << std::endl;
}
