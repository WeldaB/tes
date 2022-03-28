#include <iostream>
using namespace std;
int main() {
    system ("Color 6");
    int x;
    char y;
    char huruf[20]= {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't'};
    cout << "Input abjad yang akan dicari : ";
    cin >> y;

    for(x=0; x<20; x++){
        if(y==huruf[x])
        cout << "di indeks " << x << " " << "ada huruf di atas" << endl;
        else continue;
    }
    cout << " " << endl;
    return 0;
}
