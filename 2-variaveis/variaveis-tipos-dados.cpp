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

    // Valor Booleano -> Verdadeiro ou Falso
    bool isStudent = true;
    bool power = false;
    std::cout << "Is a student? " << isStudent << "\n";
    std::cout << "Is the power on? " << power << "\n";

    // String -> Objeto que representa uma sequencia de texto
    // Implementado dentro da biblioteca padrão do C++
    std::string nomeCompleto = "Lui Gill Aquini";
    std::cout << "Nome Completo: " << nomeCompleto << "\n";

    // Valores contantes -> não podem ser mudados durante a execução do programa
    // Uma convenção para constantes é declarar o nome da constante com UPPERCASE.
    const double PI = 3.14159;
    std::cout << "Pi Value: " << PI << "\n";

    return 0;
}