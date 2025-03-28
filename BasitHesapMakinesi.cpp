#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");
    double num1, num2;
    char op;
    char choice;

    do {
        cout << "Birinci sayıyı girin: ";
        cin >> num1;

        cout << "İşlem (+, -, *, /): ";
        cin >> op;

        cout << "İkinci sayıyı girin: ";
        cin >> num2;

        switch(op) {
            case '+':
                cout << "Sonuç: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Sonuç: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Sonuç: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0)
                    cout << "Sonuç: " << num1 / num2 << endl;
                else
                    cout << "Hata: Sıfıra bölme yapılamaz!" << endl;
                break;
            default:
                cout << "Geçersiz işlem!" << endl;
        }

        cout << "\nYeni bir işlem yapmak ister misiniz? (e/h): ";
        cin >> choice;

    } while (choice == 'e' || choice == 'E');

    cout << "Programdan çıkılıyor..." << endl;
    return 0;
}
