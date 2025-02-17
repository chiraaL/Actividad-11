#include <iostream>
#include <limits>  // Para utilizar valores de limites de tipo numérico

using namespace std;

int main() {
    // Definir el arreglo con 15 elementos
    const int TAMANO = 15;
    double array[TAMANO];

    // Ingresar los 15 valores
    cout << "Ingrese 15 valores:" << endl;
    for (int i = 0; i < TAMANO; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> array[i];
    }

    // Inicializamos el valor máximo y mínimo con los límites posibles
    double max_val = numeric_limits<double>::lowest();  // Valor más pequeño posible
    double min_val = numeric_limits<double>::max();     // Valor más grande posible

    // Encontrar el valor máximo y el valor mínimo
    for (int i = 0; i < TAMANO; i++) {
        if (array[i] > max_val) {
            max_val = array[i];  // Actualiza el valor máximo
        }
        if (array[i] < min_val) {
            min_val = array[i];  // Actualiza el valor mínimo
        }
    }

    // Mostrar los resultados
    cout << "El valor máximo del arreglo es: " << max_val << endl;
    cout << "El valor mínimo del arreglo es: " << min_val << endl;

    // Esperar que el usuario presione una tecla para terminar
    cout << "Presione una tecla para terminar..." << endl;
    cin.get();  // Captura el salto de línea pendiente
    cin.get();  // Ahora espera que el usuario presione una tecla

    return 0;
}
