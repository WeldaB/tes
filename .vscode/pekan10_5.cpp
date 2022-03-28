#include <iostream>

using namespace std;

int main()
{
    int jmlIndeks, cari, indeks = 0;
    bool find = false;

    cout << "Berapa Indeks : ";
    cin >> jmlIndeks;

    int angka[jmlIndeks];

    for (int i = 0; i < jmlIndeks; i++)
    {
        cout << "Berikan angka pada indeks ke[" << i << "] : ";
        cin >> angka[i];
    }

    cout << "Angka yang akan di cari indeksnya: ";
    cin >> cari;

    for (int i = 0; i < jmlIndeks; i++)
    {
        if (cari == angka[i])
        {
            indeks = i;
            find = true;
            break;
        }
    }

    if (find)
    {
        cout << "Angka " << cari << " terdeteksi di indeks ke : " << indeks << endl;
    }
    else
    {
        cout << "Angka yang anda berikan tidak terdeteksi" << endl;
    }
    return 0;
}