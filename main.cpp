
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int bilangan;

    cout << "Masukkan bilangan: ";
    cin >> bilangan;

    if (bilangan % 2 == 0) {
        cout << "Bilangan Genap";
    }
    else {
        cout << "Bilangan Ganjil";
    }

    system("pause");
    return 0;
}
