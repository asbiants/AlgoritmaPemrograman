#include <iostream>
#include <iomanip>
using namespace std;
int main()
{ int m, n, total, i, plh;
  cout << "Nama : Asbian Tunggul Syahutro \n";
  cout << "NIM  : 124200050 \n\n\n";
  cout << "==================================================\n";
  cout << setw (40) << "Perkalian dan Perpangkatan\n";
  cout << "==================================================\n";
  cout << "[1] Perkalian\n";
  cout << "[2] Perpangkatan \n";
  cout << "Pilihan : ";
  cin >> plh;

  switch (plh){
    case 1 :
      cout << "Masukkan nilai M = ";
      cin >> m;
      cout << "Masukkan nilai N = ";
      cin >> n;
      cout << "Hasil " << m << " x " << n <<endl;
      total = 0;
      i = 1;
        while (i <= n){
          total += m;
          if (i != n)
            {cout << m << " + ";}
          else
            {cout << m << " = " << total;}
          i++;}
      cout << "\nSekian dan Terimakasih";
      break;
    case 2 :
      cout << "Masukkan nilai M = ";
      cin >> m;
      cout << "Masukkan nilai N = ";
      cin >> n;
      cout << "Hasil " << m << " ^ " << n <<endl;
      total = 1;
      i = 1;
      while (i <= n){
        total *= m;
        if (i != n)
          {cout << m << " X ";}
        else
          {cout << m << " = " << total;}
        i++;}
      cout << "\nSekian dan Terimakasih";
      break;
      default :
        {cout << "Input Tidak Terdefinisi \n";}
  }

  return 0;
}
