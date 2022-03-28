#include <iostream>
using namespace std;
int main() {
    system ("Color 6");
    int x;
    char abjad[20]={'a', 'b', 'c', 'd', 'e', 'f', 'g','h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't'};
    for(x=0; x<=20; x++)
        if(x%2 != 0)
            cout << "indeks ganjil = huruf " << abjad[x] << endl;
    return 0;
}