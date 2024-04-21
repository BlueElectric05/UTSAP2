#include <iostream>
using namespace std;

int main(){
    system("CLS");

    string nama,kom,matkul,nil,dosen,nim;
    int tugas,nilquiz,uts,uas,nilaitot;

    nilaitot = (tugas + nilquiz + uts + uas) / 4;

    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan NIM: ";
    getline(cin, nim);
    cout << "Masukkan Kom: ";
    getline(cin, kom);
    cout << "Masukkan Mata Kuliah: ";
    getline(cin, matkul);
    cout << "Masukkan Dosen PA: ";
    getline(cin, dosen);
    cout << "Masukkan Nilai Tugas: ";
    cin >> tugas;
    cout << "Masukkan Nilai Quiz: ";
    cin >> nilquiz;
    cout << "Masukkan Nilai UTS: ";
    cin >> uts;
    cout << "Masukkan Nilai UAS: ";
    cin >> uas;


    if (nilaitot >= 85){
        nil = 'A';
    }
    else if (nilaitot >= 70){
        nil = 'B';
    }
    else if (nilaitot >= 60){
        nil = 'C';
    }
    else if (nilaitot >= 50){
        nil = 'D';
    }
    else {
        nil = 'E';
    }

    cout << "Nama : " << nama << endl;
    cout << "NIM : " << nim << endl;
    cout << "KOM : " << kom << endl;
    cout << "Mata Kuliah : " << matkul << endl;
    cout << "Nilai : " << nil << endl;

}