#include <iostream>
using namespace std;
int main(){
    system ("Color A");
    int i,j;

    for(i=1; i<=5; i++){
        cout << " " << endl;
        for(j=i; j<=5; j++){
            cout <<  "*" ;
        }
    }
    cout << endl;
    return 0;
}
