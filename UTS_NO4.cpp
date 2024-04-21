#include <iostream>
using namespace std; // penambahan "namespace"

int main () {
    //Menghilangkan penggunaan system("CLS") karena penggunaan goto akan membutuhkan deklarasi sebelumnya.
    
    int umur = 0; //mengubah string menjadi int untuk membuat tipe data integer, lalu a diubah menjadi umur
    
    do { //mengubah goto dengan loop
        cout << "Tebak Umur Saya: "; //menambahkan titik koma (;) pada akhir statement
        cin >> umur; // mengubah "a" menjadi "umur"

        if (umur == 20) { //mengubah = menjadi == untuk menyatakan persamaan nilai.
            cout << "Jawaban Anda Benar" << endl;
            break; // Keluar dari loop jika jawaban benar
        } else { // else if diubah menjadi else karena tidak membutuhkan kondisi yang spesifik
            cout << "Jawaban Salah, Coba Lagi..." << endl; // penambahan titik koma (;) pada akhir statement
        }
    } while (true); // Loop akan terus berjalan sampai jawaban benar
    
    cout << "Program Selesai";

    return 0;

}
