#include <iostream>

using namespace std;

int main() {
    // Definir el arreglo con 15 elementos
    const int TAMANO = 15;
    int array[TAMANO];
    int valor_buscado;
    bool encontrado = false;

    // Ingresar los 15 valores
    cout << "Ingrese 15 valores:" << endl;
    for (int i = 0; i < TAMANO; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> array[i];
    }

    // Solicitar el valor que el usuario quiere buscar
    cout << "Ingrese el valor a buscar: ";
    cin >> valor_buscado;

    // Buscar el valor en el arreglo
    for (int i = 0; i < TAMANO; i++) {
        if (array[i] == valor_buscado) {
            encontrado = true;
            break;  // Salimos del ciclo cuando encontramos el valor
        }
    }

    // Mostrar el resultado
    if (encontrado) {
        cout << "El valor " << valor_buscado << " existe en el arreglo." << endl;
    } else {
        cout << "El valor " << valor_buscado << " no existe en el arreglo." << endl;
    }

    // Esperar que el usuario presione una tecla para terminar
    cout << "Presione una tecla para terminar..." << endl;
    cin.get();  // Captura el salto de línea pendiente
    cin.get();  // Ahora espera que el usuario presione una tecla

    return 0;
}
