#include<iostream>
using namespace std;

void tampilkanArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";        
    }
    cout << endl;
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        swap(arr[minIndex], arr[i]);

        cout << "Langkah " << i + 1 << " : ";
        tampilkanArray(arr, size);
    }
}

int main() {
    int size;
    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> size;

    int arr[size]; 

    cout << "Masukkan elemen-elemen array : ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << endl;

    cout << "Array Sebelum Diurutkan: ";
    tampilkanArray(arr, size);
    cout << endl;
	
    cout << "Proses Pengurutan... " << endl;
    selectionSort(arr, size);
    cout << endl;

    cout << "Array Setelah Diurutkan : ";
    tampilkanArray(arr, size);

    return 0;
}
