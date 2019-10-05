//Tampilkan hasil perhitungan faktorial dari bilangan yang diinputkan oleh user

#include<iostream>  
#include<iomanip>
#include<string>
using namespace std; 

int main() 
{ 
    //Kiri->kanan atau atas->bawah
    //AC,Mesin Cuci, Flat TV
    char a;
    int pilihan,b;
    bool lanjut = 1;
    string nama[3]={"AC","Mesin CUci","Flat TV"};
    int banyak[3]={0,0,0};
    int harga[3]={2000000,1000000,1500000};
    int tdiskon[3] = {0,0,0};
    int diskon[3][2] = {{10,15},
                        {7,10},
                        {10,20}};
    
    while(lanjut){
        cout << "Pilihan Barang:"<<endl<< "1. AC"<<endl<< 
        "2. Mesin Cuci"<<endl<<"3. Flat TV"<<endl<< "Barang yang dibeli [0/1/2] : "<<endl;
        cin >> pilihan;
        cout << "banyak barang : " ;
        cin >> b; 
        banyak[pilihan] += b;
        cout << nama[pilihan] << " : " << banyak[pilihan] << endl;
        cout <<"Masih masukan lagi ? [y/n] : ";
        cin >> a; 
        if(a == 'n'){
            break;
        }
    }

    cout << "========================= " <<endl;
    cout << "Receipt"<<endl;
    cout << "========================= " <<endl; 
    

    for (int i = 0; i < 3; i++)
    {
        //memastikan tidak ada nilai minus
        if(abs(banyak[i]) > 0){
            //mencetak receipt
            cout<<"Nama Barang" <<" : " << nama[i];
            //mencari diskon
            if(banyak[i] < 4){
               tdiskon[i] = banyak[i] * harga[i] * diskon[i][0] / 100;
            }else{
                tdiskon[i] = banyak[i] * harga[i] * diskon[i][1] /100;
            }
            cout<<"Jumlah" <<" : " << banyak[i] <<endl;
            cout<<"Harga Satuan" <<" : " << harga[i] << endl;
            cout<<"Subtotal" << " : " << banyak[i] * harga[i] <<endl;
            cout<<"Diskon" << diskon[i] << "%" << " : " << tdiskon[i]<<endl;
            
            cout<<"Total"<<":"<< banyak[i] * harga[i] - tdiskon[i] << endl;
        }
     
    }
} 