//Buat program yang menampilkan MENU menghitung keliling, luas, volume dari persegi/balok. 
//Sehingga user dapat memilih mau menjalankan perhitungan yang mana

#include<iostream>  
  
using namespace std; 
  
int main() 
{ 
    char pilihan;
    int sisi;
    
    cout << "1. Keliling Persegi Panjang" <<endl<< 
    "2. Luas Persegi Panjang"<<endl<<  "3. Volume Balok" <<endl;
    cout << "Pilih 1/2/3 : ";
    cin >> pilihan;
    cout << "masukan sisi : " ;
    cin >> sisi;

    switch (pilihan)
    {
    case '1':
        cout << "keliling adalah: "<< sisi * 4;
        break;
    case '2':
        cout << "Luas adalah: "<< sisi * sisi;
        break;
    case '3':
        cout << "Volumr adalah: "<< sisi * sisi * sisi;
        break;
    default:
        cout << "input salah";
        break;
    }
      
    return 0; 
} 