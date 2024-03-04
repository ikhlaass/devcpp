#include <iostream>
using namespace std;

#define bahasa 1

#if bahasa == 1
#define LANG "INDONESIA"
#elif bahasa == 2
#define LANG "BELANDA"
#else bahasa
#define LANG "INGGRIS"
#endif

int main () {
    cout << "BAHASA YANG ANDA PILIH : " << LANG << endl;
}
