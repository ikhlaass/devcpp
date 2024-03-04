#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int size) {
    for (int step = 0; step < size - 1; ++step) {
        cout << "Langkah " << step + 1 << ": ";
        for (int j = 0; j < size - step - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
        
        for (int k = 0; k < size; ++k) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Masukkan jumlah elemen dalam array : ";
    int size;
    cin >> size;

    int arr[size]; 

    cout << "Masukkan " << size << " elemen array : ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << endl;

    cout << "Proses pengurutan bubble sort : " << endl;
    bubbleSort(arr, size);

    cout << "\nArray setelah diurutkan : ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
