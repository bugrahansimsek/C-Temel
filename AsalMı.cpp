#include <iostream>
using namespace std;

bool asalMi(int sayi) {
    if (sayi <= 1)
        return false;

    for (int i = 2; i * i <= sayi; ++i) {
        if (sayi % i == 0)
            return false;
    }

    return true;
}

int main() {
    setlocale(LC_ALL, "Turkish");
    int sayi;
    cout << "Bir sayı girin: ";
    cin >> sayi;

    if (asalMi(sayi))
        cout << sayi << " bir asal sayıdır." << endl;
    else
        cout << sayi << " asal sayı değildir." << endl;

    return 0;
}
