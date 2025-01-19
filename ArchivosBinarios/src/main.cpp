#include <iostream>
#include <cstdlib>
#include <fstream>

int main(void) {
    std::string nombreDeArchivo = "archivo.dat";
    // abro el archivo y especifico que sea en modo binario (eliminando lo que ya tenga)
    std::ofstream salida(nombreDeArchivo, std::ios::out | std::ios::binary);

    if (!salida.is_open())
        return EXIT_FAILURE;
    
    std::cout << "Presione enter y luego 'CTRL+D' o 'CTRL+Z' para terminar.\n";
    std::cout << "Ingrese lo que desea guardar en el archivo: ";

    char dato;
    while (std::cin.get(dato)) {
        // de esta forma no es necesario escificar los saltos de línea
        salida.write(&dato, sizeof(dato)); // si presiono enter y luego CTRL + D se termina este ciclo
    }

    salida.close();

    // ahora abro el archivo y especifico que sea en modo binario
    std::ifstream entrada(nombreDeArchivo, std::ios::in | std::ios::binary);

    if (!entrada.is_open())
        return EXIT_FAILURE;
    
    int linea = 1;
    std::cout << linea << " | ";
    while (entrada.get(dato)) {
        std::cout << dato;
        if (dato == '\n') {
            std::cout << linea << " | ";
            linea++;
        }
    }
    entrada.close();

    return EXIT_SUCCESS;
}