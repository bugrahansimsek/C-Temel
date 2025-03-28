#include <iostream>
#include <vector>
#include <algorithm> // sort() için

using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");
    int n;
    cout << "Kaç adet sayı gireceksiniz? ";
    cin >> n;

    vector<int> sayilar(n); // n boyutlu vektör oluşturuyoruz

    // Sayıları al
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". sayıyı girin: ";
        cin >> sayilar[i];
    }

    // Sıralama işlemi
    sort(sayilar.begin(), sayilar.end());

    // Sıralanmış listeyi yazdır
    cout << "\nSıralanmış Sayılar (Küçükten Büyüğe): ";
    for (int s : sayilar) {
        cout << s << " ";
    }

    cout << endl;
    return 0;
}
