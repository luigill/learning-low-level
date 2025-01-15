#include <iostream>
#include <vector>

// typedef -> Cria um novo tipo de dados arbitrário definido pelo programador.
// Melhora na leitura do código.

// Convenção terminar com _t
// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string string_t;

// Substituido pelo comando using, graças a uma melhor sinergia com templates.
using string_t = std::string;

int main()
{
    string_t name = "Lui";
    std::cout << name << "\n";
    return 0;
}