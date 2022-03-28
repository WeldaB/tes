#include <iostream>
using namespace std;
int main(){
    system ("Color 6");
    char name[50];
    int jumlahnilai,nilai1, nilai2, nilai3, ratarata;
    cout << "Nama           : " ;
    cin >> name;
    cout << "Jumlah nilai   : ";
    cin >> jumlahnilai;
    cout << "Nilai ke-1     : " ;
    cin >> nilai1;
    cout << "Nilai ke-2     : " ;
    cin >> nilai2;
    cout << "Nilai ke-3     : " ;
    cin >> nilai3;

    ratarata = (nilai1+nilai2+nilai3)/3;
    cout << name << ", Nilai rata-rata adalah : " << ratarata << endl;
    return 0;
}