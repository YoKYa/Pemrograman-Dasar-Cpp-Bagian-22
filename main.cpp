#include <iostream>

using namespace std;

// Prototype Fungsi
void Tampilan();
int Tambah(int a, int b);

// Fungsi Main
int main(){
    system("cls");
    Tampilan(); // Pemanggilan Fungsi Void

    int Hasil;
    Hasil = Tambah(4, 5);
    cout << "Hasil Pertambahan " << Hasil << endl;

    cin.get();
    return 0; // Balikan Fungsi Main
}


// Fungsi-Fungsi
    // Fungsi Void
    void Tampilan(){
        cout << "Fungsi-Fungsi Dalam C++" << endl << endl;
    } 
    // Fungsi NonVoid (integer)  
    int Tambah(int a, int b){
        return a+b; // Balikan Fungsi Tambah
    }