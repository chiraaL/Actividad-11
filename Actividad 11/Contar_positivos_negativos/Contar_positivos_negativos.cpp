#include <iostream>

using namespace std;

int main() {
    // Definir el arreglo con 15 elementos
    const int TAMANO = 15;
    int array[TAMANO];
    int positivos = 0, negativos = 0;

    // Ingresar los 15 valores
    cout << "Ingrese 15 valores:" << endl;
    for (int i = 0; i < TAMANO; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> array[i];
    }

    // Contar los valores positivos y negativos
    for (int i = 0; i < TAMANO; i++) {
        if (array[i] > 0) {
            positivos++;  // Incrementar contador de positivos
        } else if (array[i] < 0) {
            negativos++;  // Incrementar contador de negativos
        }
    }

    // Mostrar los resultados
    cout << "Cantidad de valores positivos: " << positivos << endl;
    cout << "Cantidad de valores negativos: " << negativos << endl;

    // Esperar que el usuario presione una tecla para terminar
    cout << "Presione una tecla para terminar..." << endl;
    cin.get();  // Captura el salto de línea pendiente
    cin.get();  // Ahora espera que el usuario presione una tecla

    return 0;
}
