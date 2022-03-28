#include <iostream>
using namespace std;
int main(){
    system("Color A");
    string id;
    int katasandi;

    while (true){
        cout << "id : "; 
        cin >> id;
        cout << "kata sandi : "; 
        cin >> katasandi;
        if ((id == "weldaBerliandaka") && (katasandi == 10201085)){
            cout << "\nGerbang ITK\nWelcome!\nNama : Welda Berliandaka\nNim : 10201085" << endl;
         break;   
        }
        else {
            cout << "Id / kata sandi salah, coba lagi" << endl;
            cout << "Lupa kata sandi?" << endl;
        }
    } 
    return 0;
}