#include <iostream>
#include <cmath> // İleri matematiksel işlemler için

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");
    int secim;
    double alan;

    cout << "=== Alan Hesaplama Uygulaması ===" << endl;
    cout << "1. Kare" << endl;
    cout << "2. Dikdörtgen" << endl;
    cout << "3. Üçgen" << endl;
    cout << "4. Daire" << endl;
    cout << "Bir şekil seçin (1-4): ";
    cin >> secim;

    switch (secim) {
    case 1: { // Kare
        double kenar;
        cout << "Karenin bir kenarını girin: ";
        cin >> kenar;
        alan = kenar * kenar;
        cout << "Karenin alanı: " << alan << endl;
        break;
    }

    case 2: { // Dikdörtgen
        double kisa, uzun;
        cout << "Kısa kenarı girin: ";
        cin >> kisa;
        cout << "Uzun kenarı girin: ";
        cin >> uzun;
        alan = kisa * uzun;
        cout << "Dikdörtgenin alanı: " << alan << endl;
        break;
    }

    case 3: { // Üçgen
        double taban, yukseklik;
        cout << "Tabanı girin: ";
        cin >> taban;
        cout << "Yüksekliği girin: ";
        cin >> yukseklik;
        alan = (taban * yukseklik) / 2;
        cout << "Üçgenin alanı: " << alan << endl;
        break;
    }

    case 4: { // Daire
        double yaricap;
        cout << "Yarıçapı girin: ";
        cin >> yaricap;
        alan = M_PI * yaricap * yaricap;
        cout << "Dairenin alanı: " << alan << endl;
        break;
    }

    default:
        cout << "Geçersiz seçim!" << endl;
    }

    return 0;
}
