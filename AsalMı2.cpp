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
    int baslangic, bitis;
    cout << "Başlangıç sayısı: ";
    cin >> baslangic;
    cout << "Bitiş sayısı: ";
    cin >> bitis;

    cout << "\n" << baslangic << " ile " << bitis << " arasındaki asal sayılar:\n";

    for (int i = baslangic; i <= bitis; ++i) {
        if (asalMi(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
