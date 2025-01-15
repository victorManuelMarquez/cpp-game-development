#include <iostream>
#include <cstdlib>

// esta clase puede implementar un valor genérico
template <typename T>
class ClaseGenerica {
    public:
        ClaseGenerica(T valor) : valor(valor) {};
    public:
        T getValor() { return valor; }
    private: T valor;

    template <typename U>
    friend void mostrarValor(ClaseGenerica<U> g);
};

template <typename T>
class ClaseHija final : public ClaseGenerica<T> {
    public:
        ClaseHija(T valor) : ClaseGenerica<T>(valor) {};
};

template <typename T>
void mostrarValor(ClaseGenerica<T>* g) {
    std::cout << "valor almacenado en clase genérica: " << g->getValor() << '\n';
}

int main(void) {
    // primera instancia
    ClaseGenerica<std::string> cadena("cadena");
    std::cout << "valor: " << cadena.getValor() << std::endl;
    // segunda instancia
    ClaseGenerica<int> numero(-23);
    std::cout << "valor: " << numero.getValor() << std::endl;
    // clase hija
    ClaseGenerica<std::string>* puntero = new ClaseHija<std::string>("Otra cadena");
    std::cout << "valor de la clase hija: " << puntero->getValor() << std::endl;
    // uso de la función amiga
    mostrarValor(puntero);
    delete puntero;
    puntero = nullptr;
    return EXIT_SUCCESS;
}