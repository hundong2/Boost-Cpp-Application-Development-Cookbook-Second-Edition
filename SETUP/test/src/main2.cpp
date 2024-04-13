#include <iostream>
#include <format>

#include <string>

int main()
{
    std::cout << "hello world" << std::endl;

    // IO Stream
    std::cout << std::format("There are {} ways I Love you.", 219) << std::endl;
}