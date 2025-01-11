#include <iostream>
#include <stdlib.h>

class ClaseInterna {
    public:
        std::string mensaje() const
        {
            return "Clase Interna instanciada.\n";
        }
} instanciaInterna;

int main(void)
{
    std::cout << instanciaInterna.mensaje();
    return EXIT_SUCCESS;
}