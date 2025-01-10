#include <iostream>
#include <stdlib.h> // para usar EXIT_SUCCESS sin implementar toda la libreria std

// en otras de mis práticas hago uso de
// using namespace std;
// pero no es conveniente para proyectos grandes.

int main(void) {
    // Muestra por pantalla ¡Hola Mundo! y luego finaliza.
    std::cout << "¡Hola Mundo!" << std::endl;
    return EXIT_SUCCESS;
}