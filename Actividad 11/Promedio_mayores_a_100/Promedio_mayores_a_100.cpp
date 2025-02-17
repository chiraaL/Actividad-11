#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Definir el arreglo con 15 elementos
    const int TAMANO = 15;
    double array[TAMANO];
    double suma = 0;
    int contador = 0;

    // Ingresar los 15 valores
    cout << "Ingrese 15 valores:" << endl;
    for (int i = 0; i < TAMANO; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> array[i];
    }

    // Calcular la suma de los valores mayores a 100
    for (int i = 0; i < TAMANO; i++) {
        if (array[i] > 100) {
            suma += array[i];
            contador++;
        }
    }

    // Mostrar el promedio si existen valores mayores a 100
    if (contador > 0) {
        double promedio = suma / contador;
        cout << "El promedio de los valores mayores a 100 es: " << promedio << endl;
    } else {
        cout << "No hay valores mayores a 100 en el arreglo." << endl;
    }

    // Esperar que el usuario presione una tecla para terminar
    cout << "Presione una tecla para terminar..." << endl;
    cin.get();  // Esto es necesario para capturar el salto de línea pendiente
    cin.get();  // Ahora espera que el usuario presione una tecla

    return 0;
}