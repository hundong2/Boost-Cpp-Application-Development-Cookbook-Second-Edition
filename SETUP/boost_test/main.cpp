#include <boost/version.hpp>
#include <format>
#include <cstdio>
#include <iostream>
int main() {
    printf("Boost version: %d.%d.%d\n",
            BOOST_VERSION / 100000,
           (BOOST_VERSION / 100) % 1000,
           BOOST_VERSION % 100);
    std::cout << std::format("boost version {} {} {}", BOOST_VERSION/100000, (BOOST_VERSION/100) % 1000, BOOST_VERSION %100) << std::endl;
    return 0;
}
