#include <iostream>
using namespace std;

int fibonacciRecursive(int n) {
    if (n <= 1)
        return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main() {
    setlocale(LC_ALL, "Turkish");
    int adet;
    cout << "Kaç adet Fibonacci sayısı istiyorsunuz? ";
    cin >> adet;

    cout << "Fibonacci Dizisi: ";
    for (int i = 0; i < adet; i++) {
        cout << fibonacciRecursive(i) << " ";
    }

    cout << endl;
    return 0;
}
