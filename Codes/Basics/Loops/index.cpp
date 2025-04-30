#include <iostream>

int main()
{
    int i{ 1 };
    while (i < 10)
    {
        std::cout << i << " * " << i << " = " << i * i << std::endl;
        i++;
    }

    for (int i{ 1 }; i < 10; i++)
    {
        std::cout << i << " * " << i << " = " << i * i << std::endl;
    }

    for (int n : {2, 3, 4, 5})
    {
        std::cout << n << std::endl;
    }

}