#include <iostream>
using namespace std;

int main(){
    system("CLS");

    int option;
    cout << "Daftar Calon Presiden: \n";
    cout << "1. Anies\n";
    cout << "2. Prabowo\n";
    cout << "3. Ganjar\n\n";
    cout << "Masukkan Pilihan Presiden anda : "; cin >> option;

    cout << "Pilihan Anda telah disimpan, Pilihan Anda adalah ";
    switch(option){
        case 1: cout << "1. Anies\n\n";
        break;
        case 2: cout << "2. Prabowo\n\n";
        break;
        case 3: cout << "3. Ganjar\n\n";
        break;
        default: cout << "ERROR : Pilihan tidak valid!";
    }
    
}