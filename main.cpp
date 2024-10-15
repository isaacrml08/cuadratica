#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double A, B, C;
    cout << "Ingrese los valores de A, B y C (separados por espacios): ";
    cin >> A >> B >> C;

    if (A == 0) 
    {
        cout << "El valor de A no puede ser cero en una ecuación cuadrática." << endl;
        return 1;
    }

    double discriminante = B * B - 4 * A * C;

    if (discriminante > 0) 
    {
        double x1 = (-B + sqrt(discriminante)) / (2 * A);
        double x2 = (-B - sqrt(discriminante)) / (2 * A);
        cout << "Las raíces son: x1 = " << x1 << " y x2 = " << x2 << endl;
    } 
    else if (discriminante == 0) 
    {
        double x = -B / (2 * A);
        cout << "La raíz doble es: x = " << x << endl;
    } 
    else 
    {
        double realParte = -B / (2 * A);
        double imaginarioParte = sqrt(-discriminante) / (2 * A);
        cout << "Las raíces son complejas: x1 = " << realParte << " + " << imaginarioParte << "i" << " y x2 = " << realParte << " - " << imaginarioParte << "i" << endl;
    }

    return 0;
}
