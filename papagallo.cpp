#include <iostream>

int main() {
    unsigned short n;

    std::cout << "Ingrese el tamaño del array (máx 65535): ";
    std::cin >> n;

    // Reservar memoria dinámicamente
    unsigned short* arr = new unsigned short[n];

    // Llenar el array con valores
    for (unsigned short i = 0; i < n; i++) {
        arr[i] = i + 1; 
    }

    // Calcular la suma de los elementos
    unsigned int suma = 0;
    for (unsigned short i = 0; i < n; i++) {
        suma += arr[i];
    }

    std::cout << "La suma de los elementos es: " << suma << std::endl;

    // Liberar la memoria
    delete[] arr;

    return 0;
}
