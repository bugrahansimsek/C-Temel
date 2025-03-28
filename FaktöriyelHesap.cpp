#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");
    int n;
    unsigned long long faktoriyel = 1;

    cout << "Bir pozitif tamsayı girin: ";
    cin >> n;

    if (n < 0) {
        cout << "Negatif sayıların faktöriyeli tanımsızdır." << endl;
    }
    else {
        for (int i = 1; i <= n; ++i) {
            faktoriyel *= i;
        }

        cout << n << "! = " << faktoriyel << endl;
    }

    return 0;
}
