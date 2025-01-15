#include <iostream>

// Namespaces separam escopos de variáveis, funções e outras declarações.
// É possível ter variáveis com mesmo nome, em namespaces diferentes.
// Cada entidade precisa de um nome único.

namespace First
{
    int x = 0;
} // namespace First

namespace Second
{
    int x = 10;
} // namespace Second

int main()
{
    // using namespace First; // x = 0
    using namespace Second; // x = 10

    // Esse valor se altera de acordo com qual namespace está sendo usado.
    std::cout << x << "\n";

    // Acessando valores específicos de cada namespace
    std::cout << First::x << "\n";
    std::cout << Second::x << "\n";

    // É possível omitir o uso do prefixo std com namespaces
    using namespace std;
    // using std::cout;
    // using std::string;

    string name = "Lui";
    cout << "hello" << name;

    return 0;
}