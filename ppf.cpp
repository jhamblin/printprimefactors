#include <iostream>

void PrintPrimeFactors(unsigned int n)
{
    int div = 2;
    while (n > 1)
    {
        if (n % div == 0)
        {
            n /= div;
            std::cout << div << " ";
        }
        else
        {
            ++div;
        }
    }
}

int main()
{
    std::cout << "100 = "; 
    PrintPrimeFactors(100);
    std::cout << "\n";

    std::cout << "4096 = ";
    PrintPrimeFactors(4096);
    std::cout << "\n";

    std::cout << "1700 = "; 
    PrintPrimeFactors(1700);
    std::cout << "\n";
}
