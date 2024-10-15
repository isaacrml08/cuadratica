#include <iostream>
#include <cmath>
using namespace std;

/*
 * Este programa calcula las raíces de una ecuación cuadrática de la forma Ax^2 + Bx + C = 0.
 * El usuario ingresa los coeficientes A, B y C.
 * El programa verifica si A es cero (lo que no permitiría que sea una ecuación cuadrática),
 * y luego calcula el discriminante para determinar la naturaleza de las raíces:
 * - Dos raíces reales distintas si el discriminante es positivo.
 * - Una raíz real doble si el discriminante es cero.
 * - Raíces complejas si el discriminante es negativo.
 */
int main(){
    double A, B, C;
    cout << "Ingrese los valores de A, B y C: ";
    cin >> A >> B >> C;

    if (A == 0) {
        cout << "El valor de A no puede ser cero." << endl;
        return 1;
    }

    double discriminante = B * B - 4 * A * C;

    if (discriminante > 0) {
        double x1 = (-B + sqrt(discriminante)) / (2 * A);
        double x2 = (-B - sqrt(discriminante)) / (2 * A);
        cout << "Las raíces son: x1 = " << x1 << " y x2 = " << x2 << endl;
    } else if (discriminante == 0) {
        double x = -B / (2 * A);
        cout << "La raíz doble es: x = " << x << endl;
    } else {
        double realParte = -B / (2 * A);
        double imaginarioParte = sqrt(-discriminante) / (2 * A);
        cout << "Las raíces son complejas: x1 = " << realParte << " + " << imaginarioParte << "i"
             << " y x2 = " << realParte << " - " << imaginarioParte << "i" << endl;
    }
    return 0;
}
