#include <iostream>
using namespace std;
int main(){
    system("Color A");
    int i, j;

    for(i=1; i<=5; i++){
        for(j=i; j<=5; j++){
            cout << " ";
        }
        for(j=1; j<=i; j++){
            cout << "*" ;
        }
        cout << endl;
    }
    return 0;
}