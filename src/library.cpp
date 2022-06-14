#include "../include/library.h"

#include <iostream>

void hello()
{
	std::cout << say() << std::endl;
}

int sum(int a, int b)
{
	return a + b;
}

const char* say()
{
	return "Hello, World!";
}
