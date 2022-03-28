#include <iostream>
using namespace std;
int main(){
    /*
    int input;
    cout << "Masukkan nilai: "<< endl;
    cin >> input;

    if(input>=10){
        cout << "Nilainya lebih"<< endl;
    }
    else if(input<=5){
        cout << "Nilainya Pas"<< endl;
    }
    else {
        cout << "Nilainya kurang"<< endl;
    }
    */
   /*
   int number;
   cout << "Masukkan Number : " ;
   cin >> number;

   if (number%7==0){
       cout << "angka" << number << "habis dibagi 7" << endl;
   }
   else {
       cout << "Bukan kelipatan 7!" ;
   }
    */
   int nomor;

   cout << "Daftar channel TV" << endl;
   cout << "1. KBS TV" << endl;
   cout << "2. TVN K-Drama" << endl;
   cout << "3. SBS TV" << endl;
   cout << "4. JTBC" << endl;
   cout << "Pilih Channel :" << endl; 
   cin >> nomor;

   switch (nomor){
       case 1 : cout << "Channel yang anda masukkan adalah KBS TV, Silahkan Menyaksikan Descendant Of The Sun" << endl; break;
       case 2 : cout << "Channel yang anda masukkan adalah TVN K-Drama, Silahkan Menyaksikan Vicenzo" << endl; break;
       case 3 : cout << "Channel yang anda masukkan adalah SBS TV, Silahkan Menyaksikan Backstreet Rookie" << endl; break;
       case 4 : cout << "Channel yang anda masukkan adalah JTBC, Silahkan Menyaksikan Itaewon Class" << endl; break;
       default : cout << "Channel tidak ditemukan" << endl; break;
    cout << endl;
   }
    return 0;
}