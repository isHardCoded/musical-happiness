#include <iostream>

int main()
{
	int a = 5;
	int b = 10;

	int* ptrA = &a;
	int* ptrB = &b;

	std::cout << "Address [a]: " << ptrA << std::endl;
	std::cout << "Address [b]: " << ptrB << std::endl;

	std::cout << "Value [a]: " << *ptrA << std::endl;
	std::cout << "Value [b]: " << *ptrB << std::endl;

	*ptrA = 15;
	*ptrB = 30;
	std::cout << "Values [a][b]: " << std::endl;

	std::cout << "Value [a]: " << *ptrA << std::endl;
	std::cout << "Value [b]: " << *ptrB << std::endl;
}