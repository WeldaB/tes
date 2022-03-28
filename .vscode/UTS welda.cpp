#include <iostream>
using namespace std;
int main(){
    int pil, sisi, tinggi, batas, i, j;

    cout << "Daftar Pilihan Program : " << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Segitiga sama kaki" << endl;
    cout << "Pilihan : ";
    cin >> pil;

    if(pil == 1){
        cout << "Tinggi : ";
        cin >> tinggi;
        cout << "sisi : ";
        cin >> sisi;

        cout << endl;

        for(i=1; i<=tinggi; i++){
            for(j=1; j<=sisi; j++){
                cout << "*";
            }
           cout << endl; 
        }
        cout << "Welda Berliandaka 10201085" << endl;

        for(i=1; i<=tinggi; i++){
            for(j=1; j<=sisi; j++){
                cout << "*";
            }
           cout << endl; 
        }
    }
    else if(pil == 2){
        cout << "batas : ";
        cin >> batas;

        cout << endl;

        for(i=1; i<=5; i++){
            cout << " " << endl;
            for(j=i; j<=5; j++){
                cout <<  "*" ;
        }
    }
    cout << endl;

        cout << "Welda Berliandaka 10201085" << endl;

        for(i=1; i<=batas; i++){
            cout << " " << endl;
            for(j=1; j<=i; j++){
            cout << "*";
        }
    }
    }
    else{
        cout << "Pilihan tidak valid" << endl;
    }
    cout << endl;
    cout << "Terimakasih" << endl;
    return 0;
}