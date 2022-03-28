#include <iostream>
using namespace std;
int main(){
    /*
    for (int i=0; i<=5; i++){
       cout << i << ".Pemrograman Terstruktur A" << endl;
    }
   
   int a,b;
   int i=1,j=1;
   a=++i;
   b=j++;
   cout << "a = "<< a <<endl;
   cout << "b = "<< b <<endl;
   cout << "i = "<< i <<endl;
   cout << "j = "<< j <<endl;
   */ 
  /*
   int i=0;
   while (i<=5){
       cout << i << ".Pemrograman Terstruktur A"<< endl;
       i++;
   }
   
  int i = 6;
  do{
      cout << i << ".Pemrograman Terstruktur A "<< endl;
      i++;
  }
  while (i<=5);*/
  
  int i,j;

    for(i=1; i<=5; i++){

        cout <<" "<<endl;
        for(j = i; j<=5; j++){
            cout<< " " << i;
        }
    }
    cout << endl;
    return 0;
}