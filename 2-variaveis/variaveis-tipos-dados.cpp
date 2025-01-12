#include <iostream>

// Variáveis são espaços na memória que armazenam dados dos programas.
// Esses dados possuem diferentes tipos:
// Cada um desses tipos precisa de diferente espaço de armazenamento.
// Cada um desses tipos realiza operações diferentes, específicas para cada tipo.

int main()
{
    // Número inteiro
    int numero = 10;
    int trunNumero = 7.5;
    std::cout << "Number: " << numero << "\n";
    std::cout << "Number (Truncated Number): " << trunNumero << "\n";
    // Número com maior espaço de representação -> Necessita do dobro de espaço em memória
    // Usado para números fracionados
    double dnumero = 2000.99;
    std::cout << "Double Number: " << dnumero << "\n";
    // Número em ponto flutuante
    float fnumero = 3.14;
    std::cout << "Floating point number: " << fnumero << "\n";
    // Caracter unitário
    char letter = 's';
    std::cout << "Letter: " << letter << "\n";

    int num1 = 10;
    int num2 = 30;
    int sum = num1 + num2;
    std::cout << "Two numbers sum: " << sum << "\n";

    return 0;
}