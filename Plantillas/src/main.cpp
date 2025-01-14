#include <iostream>
#include <cstdlib>

// esta clase puede implementar un valor genérico
template <typename T>
class ClaseGenerica {
    public:
        ClaseGenerica(T valor) : valor(valor) {};
    public:
        T demo() { return valor; }
    private: T valor;
};

template <typename T>
class ClaseHija final : public ClaseGenerica<T> {
    public:
        ClaseHija(T valor) : ClaseGenerica<T>(valor) {};
};

int main(void) {
    // primera instancia
    ClaseGenerica<std::string> cadena("cadena");
    std::cout << "valor: " << cadena.demo() << std::endl;
    // segunda instancia
    ClaseGenerica<int> numero(-23);
    std::cout << "valor: " << numero.demo() << std::endl;
    // clase hija
    ClaseGenerica<std::string>* puntero = new ClaseHija<std::string>("Otra cadena");
    std::cout << "valor de la clase hija: " << puntero->demo() << std::endl;
    delete puntero;
    puntero = nullptr;
    return EXIT_SUCCESS;
}