#include <iostream>

using namespace std;

int main() {
    // Definir el arreglo con 15 elementos
    const int TAMANO = 15;
    int array[TAMANO];
    int suma_impares = 0;

    // Ingresar los 15 valores
    cout << "Ingrese 15 valores:" << endl;
    for (int i = 0; i < TAMANO; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> array[i];
    }

    // Calcular la suma de los valores impares
    for (int i = 0; i < TAMANO; i++) {
        if (array[i] % 2 != 0) {  // Si el valor es impar
            suma_impares += array[i];
        }
    }

    // Mostrar el resultado
    cout << "La suma de los valores impares es: " << suma_impares << endl;

    // Esperar que el usuario presione una tecla para terminar
    cout << "Presione una tecla para terminar..." << endl;
    cin.get();  // Captura el salto de línea pendiente
    cin.get();  // Ahora espera que el usuario presione una tecla

    return 0;
}
