#include <iostream>
using namespace std;
int main (){
    int matriks[2][2], i, j, hasil;
    cout << "menampilkan matriks 2x2 " << endl;
    
    for(i=0; i<2; i++){
        for(j=0; j<2; j++)
    {
        cout << "Masukkan elemen matriks : "; cin>> matriks[i][j];

    }
    cout<<endl;
    }
    cout << "hasil : " << endl;
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            cout << " " << matriks[i][j]*5 << " ";
        }
        cout << endl;
        
    }
    
    return 0;
}