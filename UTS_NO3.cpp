#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int n, total = 0;
    cout << "Masukkan nilai n: ";
    cin >> n;
    
    for (int i = 1; i <= n; i += 2) {
        total += i * i;
    }

    cout << "n : " << n << " = " << total << endl;

    return 0;
}