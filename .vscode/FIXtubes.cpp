#include <conio.h>  // hasil antarmuka(getch, clrscr)
#include <cstdio>   //
#include <iostream> // standar input output
#include <string.h> // string
#include <cstdlib>  //

using namespace std;

static int p = 0; // static untuk menyimpan nilai di suatu variabel agar bisa digunakan lagi meski sudah dieksekusi

class a //

{

  char busn[5], driver[10], arrival[5], depart[5], from[10], to[10], seat[8][4][10];

public:           // hak akses
  void install(); // void untuk mendeklarasikan bahwa variabel bernilai kosong

  void allotment();

  void empty();

  void show();

  void avail();

  void position(int i);

}

bus[10];

void vline(char ch)

{

  for (int i = 80; i > 0; i--)

    cout << ch;
}

//FUNGSI PENAMBAHAN/PENDAFTARAN BUS
void a::install()

{

  cout << "Masukan No Kendaraan: ";

  cin >> bus[p].busn;

  cout << "\nMasukan Nama Supir: ";

  cin >> bus[p].driver;

  cout << "\nKendaraan Tiba Pukul: ";

  cin >> bus[p].arrival;

  cout << "\nKendaraan Berangkat Pukul: ";

  cin >> bus[p].depart;

  cout << "\nDari: ";

  cin >> bus[p].from;

  cout << "\nMenuju: ";

  cin >> bus[p].to;

  bus[p].empty();

  p++;
}

//FUNGSI PEMESANAN KURSI BUS
void a::allotment()

{

  int seat;

  char number[5];

top:

  cout << "No Kendaraan: ";

  cin >> number;

  int n;

  for (n = 0; n <= p; n++)

  {

    if (strcmp(bus[n].busn, number) == 0) // strcmp fungsinya untuk membandingkan dua string

      break;
  }

  while (n <= p)

  {

    cout << "\nKursi Nomor: ";

    cin >> seat;

    if (seat > 32)

    {

      cout << "\nHanya ada 32 Kursi yang tersedia di Kendaraan ini.";
    }

    else

    {

      if (strcmp(bus[n].seat[seat / 4][(seat % 4) - 1], "Kosong") == 0)

      {

        cout << "Masukan Nama Penumpang: ";

        cin >> bus[n].seat[seat / 4][(seat % 4) - 1];

        break;
      }

      else

        cout << "Kursi No. " << seat << " Sudah di Booking.\n";
    }
  }

  if (n > p)

  {

    cout << "Masukan No Kendaraan yang benar.\n";

    goto top;
  }
}

void a::empty()

{

  for (int i = 0; i < 8; i++)

  {

    for (int j = 0; j < 4; j++)

    {

      strcpy(bus[p].seat[i][j], "Kosong"); // strcpy untuk meng-copy teks dari string 1 ke string 2
    }
  }
}

//FUNGSI PENAMPIL BUS DAN KURSI YANG TERSEDIA
void a::show()

{

  int n;

  char number[5];

  cout << "Masukan Kendaraan: ";

  cin >> number;

  for (n = 0; n <= p; n++)

  {

    if (strcmp(bus[n].busn, number) == 0)

      break;
  }

  while (n <= p)

  {

    cout << "No Kendaraan: \t" << bus[n].busn

         << "\nPengemudi: \t" << bus[n].driver << "\t\tWaktu Kedatangan: \t"

         << bus[n].arrival << "\tWaktu Keberangkatan:" << bus[n].depart

         << "\nDari: \t\t" << bus[n].from << "\t\tMenuju: \t\t\t" <<

        bus[n].to << "\n";

    vline('*');

    bus[0].position(n);

    int a = 1;

    for (int i = 0; i < 8; i++)

    {

      for (int j = 0; j < 4; j++)

      {

        a++;

        if (strcmp(bus[n].seat[i][j], "Kosong") != 0)

          cout << "\nKursi No " << (a - 1) << " Sudah Di Booking oleh " << bus[n].seat[i][j] << ".";
      }
    }

    break;
  }

  if (n > p)

    cout << "Masukan No Kendaraan Yang benar: ";
}

void a::position(int l)

{

  int s = 0;
  p = 0;

  for (int i = 0; i < 8; i++)

  {

    cout << "\n";

    for (int j = 0; j < 4; j++)

    {

      s++;

      if (strcmp(bus[l].seat[i][j], "Kosong") == 0)

      {

        cout.width(5);

        cout.fill(' ');

        cout << s << ".";

        cout.width(10);

        cout.fill(' ');

        cout << bus[l].seat[i][j];

        p++;
      }

      else

      {

        cout.width(5);

        cout.fill(' ');

        cout << s << ".";

        cout.width(10);

        cout.fill(' ');

        cout << bus[l].seat[i][j];
      }
    }
  }

  cout << "\n\nHanya ada " << p << " Kursi kosong di No Kendaraan: " << bus[l].busn;
}

void a::avail()

{

  for (int n = 0; n <= p; n++)

  {

    cout << "No Kendaraan: \t" << bus[n].busn << "\nPengemudi: \t" << bus[n].driver

         << "\t\tWaktu Kedatangan: \t" << bus[n].arrival << "\tWaktu Keberangkatan: \t"

         << bus[n].depart << "\nDari: \t\t" << bus[n].from << "\t\tMenuju: \t\t\t"

         << bus[n].to << "\n";

    vline('*');

    vline('_');
  }
}

int main()

{

  system("cls");

  int w;

  while (1)

  {

    //system("cls");

    cout << "\n\n\n\n\n";

    cout << "\t\t\t1.Daftarkan Kendaraan\n\t\t\t"

         << "2.Booking Kursi\n\t\t\t"

         << "3.Daftar Kursi\n\t\t\t"

         << "4.Kendaraan Yang Tersedia. \n\t\t\t"

         << "5.Exit";

    cout << "\n\t\t\tEnter your choice:-> ";

    cin >> w;

    switch (w)

    {

    case 1:
      bus[p].install();

      break;

    case 2:
      bus[p].allotment();

      break;

    case 3:
      bus[0].show();

      break;

    case 4:
      bus[0].avail();

      break;

    case 5:
      exit(0);
    }
  }

  return 0;
}
