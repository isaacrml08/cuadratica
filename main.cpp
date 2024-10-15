#include <iostream>
#include <cmath> // Para la función sqrt()
using namespace std;

int main(){
    double A, B, C; // Coeficientes de la ecuación cuadrática
    cout << "Ingrese los valores de A, B y C: "; // Solicitar al usuario los coeficientes
    cin >> A >> B >> C; // Leer los valores ingresados

    // Verificar que A no sea cero
    if (A == 0) {
        cout << "El valor de A no puede ser cero." << endl; // Mensaje de error
        return 1; // Salir del programa con un código de error
    }

    // Calcular el discriminante
    double discriminante = B * B - 4 * A * C;

    // Evaluar el discriminante para determinar las raíces
    if (discriminante > 0) {
        // Dos raíces reales y distintas
        double x1 = (-B + sqrt(discriminante)) / (2 * A);
        double x2 = (-B - sqrt(discriminante)) / (2 * A);
        cout << "Las raíces son: x1 = " << x1 << " y x2 = " << x2 << endl;
    } else if (discriminante == 0) {
        // Una raíz real doble
        double x = -B / (2 * A);
        cout << "La raíz doble es: x = " << x << endl;
    } else {
        // Raíces complejas
        double realParte = -B / (2 * A);
        double imaginarioParte = sqrt(-discriminante) / (2 * A);
        cout << "Las raíces son complejas: x1 = " << realParte << " + " << imaginarioParte << "i"
             << " y x2 = " << realParte << " - " << imaginarioParte << "i" << endl;
    }
    return 0; // Salir del programa sin errores
}
