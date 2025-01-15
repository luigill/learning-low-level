#include <iostream>

int main()
{

    int num1 = 10;
    int num2 = 30;

    // Soma entre dois números
    int sum = num1 + num2;
    std::cout << "Two numbers sum: " << sum << "\n";

    // Operações em uma variável
    // Podem ser feitas com outros operadores
    int variable = 10;
    variable++;
    std::cout << variable << "\n";
    ++variable;
    std::cout << variable << "\n";

    int sub = num2 - num1;
    std::cout << "Two numbers sub: " << sub << "\n";

    return 0;
}