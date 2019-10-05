//Tampilkan hasil perhitungan faktorial dari bilangan yang diinputkan oleh user

#include<iostream>  
  
using namespace std; 
  
int main() 
{ 
    int penjualan,bonus,komisi;
    cin >> penjualan;
    if(penjualan > 1000000){
        bonus = 100000;
        komisi = penjualan * 4 /10;
    }else{
        if(penjualan > 500000){
            bonus = 75000;
            komisi = penjualan * 3 /10;
        }else{
            if(penjualan > 300000){
                bonus= 50000;
                komisi = penjualan * 2/10;
            }else
            {
                bonus = 10000;
                komisi = penjualan*1/10;
            }
        }
    }
    cout << "Bonus : "<< bonus<<endl;
    cout << "Komisi : "<< komisi<<endl;
    cout << "Total Pendapatan"<< bonus+komisi;


    return 0; 
} 