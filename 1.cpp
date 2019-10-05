//Tampilkan hasil perhitungan faktorial dari bilangan yang diinputkan oleh user

#include<iostream>  
  
using namespace std; 
  
int main() 
{ 
    int n, fakt=1;
    cin >> n;
    for(n; n > 0;n-- ){
        fakt *= n;
    }
    cout << fakt;
      
    return 0; 
} 