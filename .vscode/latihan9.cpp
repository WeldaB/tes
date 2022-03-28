#include <iostream>
using namespace std;
int main(){
    //Latihan1
    /*float x[] = {5,3,7}, total=0; int i;
    for(i=0; i<=2; i++)
    total = total + x[i];
    cout << "Total = " << total << endl;
    */
   /*
   //Latihan2
   int data[5]= {2,3,5,6,7};
   cout << "Pengiriman nilai ke fugnsi"<< endl;

   int i,total=0;
   for (i=0; i<5; i++)
   total=total+data[i];
   cout << "Nilai total = "<< total << endl;
    */
   
   //Latihan3
   int mat1[2][2]= {{2,3}, {5,6}};
   int mat2[2][2]= {{3,4}, {1,2}};
   int i,j,jml[i][j];
   cout << "Hasil Penjumlahan Matriks = ";
   for(i=0; i<2; i++){
       for(j=0; j<2; j++){
           jml[i][j]=mat1[i][j]+mat2[i][j];
           cout << jml[i][j];
       }
       cout << endl;
   }   
   //Latihan4
   /*
   int i,nilai[5];
   cout << "inputan data : " << endl;
   for (i=0; i<5; i++)
   cin >> nilai[i];


   cout << "output data" << endl;

   for (i=0; i<5; i++)
   cout << nilai[i]; */
//latihan 5 
/*
   int baris,kolom;
   int bil[2][5] = {{1,2,35,7,10}, {6,7,4,1,0}};
   for(baris=0; baris < 2; baris++)
    for(kolom=0; kolom < 5; kolom++)
   cout << "Data " << baris << " " << kolom << " " << bil[baris][kolom] << endl;
*/

   return 0;
}