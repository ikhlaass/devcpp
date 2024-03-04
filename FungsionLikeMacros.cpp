#include <iostream>
#include <cmath>

using namespace std;


void hitungAkarKuadrat(double a, double b, double c);

int main() {
    double a, b, c;

    cout << "Masukkan koefisien a: ";
    cin >> a;

    cout << "Masukkan koefisien b: ";
    cin >> b;

    cout << "Masukkan koefisien c: ";
    cin >> c;

    hitungAkarKuadrat(a, b, c);

    return 0;
}


void hitungAkarKuadrat(double a, double b, double c) {
    double delta = b * b - 4 * a * c;

    if (delta < 0) {
        cout << "Persamaan tidak memiliki akar real." << endl;
    } else if (delta == 0) {
        double akar = -b / (2 * a);
        cout << "Akar tunggal: " << akar << endl;
    } else {
        double akar1 = (-b + sqrt(delta)) / (2 * a);
        double akar2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Akar pertama: " << akar1 << endl;
        cout << "Akar kedua: " << akar2 << endl;
    }
}
