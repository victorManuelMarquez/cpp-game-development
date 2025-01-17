#include <iostream>
#include <cstdlib>
#include <fstream>

int main(void) {
    std::string nombreDeArchivo = "archivo.txt";
    std::ofstream salida(nombreDeArchivo);
    std::cout << "'CTRL+D' o 'CTRL+Z' para guardar todo y salir.\n";
    std::cout << "Ingrese lo que desea guardar en el archivo: ";
    char dato;
    while (std::cin.get(dato)) {
        salida.put(dato);
    }
    salida.close();
    std::cout << "Datos almacenados en \"" << nombreDeArchivo << "\"\nFin del programa." << std::endl;
    return EXIT_SUCCESS;
}