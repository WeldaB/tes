#include <iostream>
int main() 
{
    //Tugas Pemrograman Terstruktur A pekan 2
    system ("Color 9");
    //digunakan untuk merubah (memberi variasi) warna di output program agar lebih indah.
    std::cout <<"Program Kalkulator Sederhana by C++" << std::endl;
    //tahap pemberian nama program.

    int x = 5;
    int y = 10;
    //mendeklarasikan nilai variabel x dan y.

    y += x; //Operasi pertama, dimana var y masih berupa var asli.
    std::cout <<"Hasil penjumlahannya adalah    : "  << y << std::endl  ;

    y -= x; //Operasi kedua , dimana var y sudah berubah nilainya menjadi hasil dari operasi pertama.
    std::cout <<"Hasil pengurangannya adalah    : "  << y << std::endl  ;
    
    y *= x; //Operasi ketiga , dimana var y sudah berubah nilainya menjadi hasil dari operasi kedua.
    std::cout <<"Hasil perkaliannya adalah      : " << y << std::endl   ;
    
    y /= x; //Operasi keempat , dimana var y sudah berubah nilainya menjadi hasil dari operasi ketiga.
    std::cout <<"Hasil pembagiannya adalah      : " << y << std::endl   ;
    
    y %= x; //Operasi kelima , dimana var y sudah berubah nilainya menjadi hasil dari operasi keempat.
    std::cout <<"Hasil modulusnya adalah        : "  << y << std::endl  ;
    
    return 0;
}