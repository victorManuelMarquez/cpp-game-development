#include <iostream>
#include <stdlib.h>

class ClaseInterna {
    public:
        std::string mensaje() const
        {
            return "Clase Interna instanciada.\n";
        }
} instanciaInterna;

class ClaseInternaHija final : public ClaseInterna {
    public:
        ClaseInternaHija() = default;
    public:
        // mal uso del polimorfismo
        std::string mensaje() const
        {
            return "Clase Hija de la clase interna.\n";
        }
};

int main(void)
{
    std::cout << instanciaInterna.mensaje();
    ClaseInternaHija hija;
    std::cout << hija.mensaje();
    return EXIT_SUCCESS;
}