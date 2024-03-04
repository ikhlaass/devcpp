#include <iostream>
using namespace std;


int FaktorialRekursif (int a){
    if (a <= 1){
        return a;
    }else {
        return a * FaktorialRekursif(a-1);
    }
}

int main () {
    int a;
    cout << "Angka : "; cin >> a;

    if (a < 0){
        cout << "Faktorial Tidak Terdefenisi Untuk Bilangan Negatif." ;
        cout << endl << endl;
    } else{
        cout << "Faktorial Dari " << a << " adalah : " << FaktorialRekursif(a);
        cout << endl << endl;
    }

}