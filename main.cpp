// Calcular la suma de todos los números que se introducen por el teclado y sean positivos. El progrma para de sumar cuando se introduce un 0.
/*
#include <iostream>

int main() {
    int numero;
    int suma = 0;

    while (true) {
        std::cout << "Número: ";
        std::cin >> numero;

        if (numero == 0) {
            break;
        }

        if (numero > 0) {
            suma += numero;
        }
    }

    std::cout << "La suma de los números positivos es: " << suma << std::endl;

    return 0;
}
*/
#include <iostream>

int main() {
    int numero;
    int suma = 0;
    int contador = 0;

    std::cout << "Número: ";
    std::cin >> numero;

    while (numero != 0) {
        if (numero > 0) {
            suma += numero;
            contador++;
        }
        std::cout << "Número: ";
        std::cin >> numero;
    }

    std::cout << "La suma de los números positivos es: " << suma << std::endl;
    std::cout << "Se introdujeron " << contador << " números." << std::endl;

    return 0;
}
