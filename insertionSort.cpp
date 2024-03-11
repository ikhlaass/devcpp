#include <iostream>
using namespace std;

void tampilkanArray (int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort (int arr[], int size){
    int i, key, j;
    for (i = 0; i < size; i++){
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr [j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main () {
    int size;
    cout << "Masukkan Jumlah Elemen Daalam Array : ";
    cin >> size;

    int arr[size];
    cout << "Masukkan Elemen-Elemen Dalam Array : ";
    for (int a = 0; a < size; a++){
        cin >> arr[a];
    }
    cout << endl;

    cout << "Tampilkan Array Sebelum Di Urutkan : ";
    tampilkanArray(arr, size);
    cout << endl;

    insertionSort(arr, size);

    cout << "Array Setelah Di Urutkan : ";
    tampilkanArray(arr, size);
    cout << endl;

}