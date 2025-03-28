#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");
    srand(static_cast<unsigned int>(time(0)));  // Random için seed
    char tekrar;

    do {
        int gizliSayi = rand() % 100 + 1;  // 1-100 arası sayı
        int tahmin;
        int hak = 5;
        bool bildi = false;

        cout << "=== Sayı Tahmin Oyunu ===" << endl;
        cout << "1 ile 100 arasında bir sayıyı tahmin edin. Toplam 5 hakkınız var." << endl;

        while (hak > 0) {
            cout << "\nTahmininiz: ";
            cin >> tahmin;

            if (tahmin == gizliSayi) {
                cout << "🎉 Tebrikler! Sayıyı doğru bildiniz: " << gizliSayi << endl;
                bildi = true;
                break;
            }
            else if (abs(tahmin - gizliSayi) <= 10) {
                cout << "🔥 Çok yaklaştınız!";
            }
            else if (tahmin < gizliSayi) {
                cout << "⬆️ Daha büyük bir sayı deneyin.";
            }
            else {
                cout << "⬇️ Daha küçük bir sayı deneyin.";
            }

            hak--;
            cout << " (Kalan hak: " << hak << ")" << endl;
        }

        if (!bildi) {
            cout << "\n😞 Hakkınız bitti! Doğru sayı: " << gizliSayi << endl;
        }

        cout << "\nTekrar oynamak ister misiniz? (e/h): ";
        cin >> tekrar;

    } while (tekrar == 'e' || tekrar == 'E');

    cout << "Güle güle!" << endl;
    return 0;
}
