#include <iostream>

#include "myStuff.h"

int main() {
	std::cout << "Hello world!\n";

	std::string test_output = SubString("pannkakor i taket", 4, 9) + "\n";
	std::cout << (test_output);
	test_output = SubString("pannkakor i taket", 6) + "\n";
	std::cout << (test_output);

}