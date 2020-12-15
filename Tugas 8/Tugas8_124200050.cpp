#include <iostream>

using namespace std;

int pilih;
float luas, r, t, vol_tab, kel;
float phi= 3.14;
string awal;

void luaslingkaran();
void kelilingling();
void volumetabung();

int main()
{
  do {
  cout << "Hitung Lingkaran ==============\n";
  cout << "1. Luas Lingkaran \n";
  cout << "2. Keliling Lingkaran \n";
  cout << "3. Volume Tabung \n";
  cout << "Pilih : ";
  cin >> pilih;

  switch (pilih)
  {
    case 1 :
    luaslingkaran();
    break;
    case 2 :
    kelilingling();
    break;
    case 3 :
    volumetabung();
    break;
    default :
    cout <<"Input Yang Anda Masukkan Salah \n";
  }

   do{
	    cout << "Ulangi Program ? (y/n)";
      cin >> awal;
      cout << "\n";
   }while(awal !="y" && awal != "n");
}while (awal == "y");
cout << "\n \n";
cout << "Program Selesai, Sekian dan TerimaKasih ";
cout << "\n";
return 0;
}

void luaslingkaran()
{
  cout << "Jari - Jari      : ";
  cin >> r;
  luas = phi*r*r;
  cout << "Luas Lingkaran Adalah " << luas << endl;
}
void kelilingling()
{
  cout << "Jari - Jari      : ";
  cin >> r;
  kel = 2*phi*r;
  cout << "Keliling Lingkaran Adalah " << kel << endl;
}
void volumetabung()
{
  cout << "Jari - Jari      : ";
  cin >> r;
  cout << "Tinggi           : ";
  cin >> t;
  vol_tab = phi*r*r*t;
  cout << "Volume Tabuung Adalah " << vol_tab << endl;
}
