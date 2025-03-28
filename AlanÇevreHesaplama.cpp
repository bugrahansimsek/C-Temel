#include <iostream>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");
    int secim;
    double alan, cevre;

    cout << "=== Alan ve Çevre Hesaplama Uygulaması ===" << endl;
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
            cevre = 4 * kenar;
            cout << "Karenin Alanı: " << alan << endl;
            cout << "Karenin Çevresi: " << cevre << endl;
            break;
        }

        case 2: { // Dikdörtgen
            double kisa, uzun;
            cout << "Kısa kenarı girin: ";
            cin >> kisa;
            cout << "Uzun kenarı girin: ";
            cin >> uzun;
            alan = kisa * uzun;
            cevre = 2 * (kisa + uzun);
            cout << "Dikdörtgenin Alanı: " << alan << endl;
            cout << "Dikdörtgenin Çevresi: " << cevre << endl;
            break;
        }

        case 3: { // Üçgen
            double kenar1, kenar2, kenar3, yukseklik;
            cout << "Üç kenarı girin:\n";
            cout << "Kenar 1: ";
            cin >> kenar1;
            cout << "Kenar 2: ";
            cin >> kenar2;
            cout << "Kenar 3: ";
            cin >> kenar3;
            cout << "Tabana ait yüksekliği girin: ";
            cin >> yukseklik;
            alan = (kenar1 * yukseklik) / 2;
            cevre = kenar1 + kenar2 + kenar3;
            cout << "Üçgenin Alanı: " << alan << endl;
            cout << "Üçgenin Çevresi: " << cevre << endl;
            break;
        }

        case 4: { // Daire
            double yaricap;
            cout << "Yarıçapı girin: ";
            cin >> yaricap;
            alan = M_PI * yaricap * yaricap;
            cevre = 2 * M_PI * yaricap;
            cout << "Dairenin Alanı: " << alan << endl;
            cout << "Dairenin Çevresi: " << cevre << endl;
            break;
        }

        default:
            cout << "Geçersiz seçim!" << endl;
    }

    return 0;
}
