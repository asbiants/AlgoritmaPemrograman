#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
  int plh;
  cout << "============================================= \n";
  cout << setw (30) << "Gambar Bangun Datar \n";
  cout << "============================================= \n\n";
  cout << "Silahkan Pilih \n";
  cout << "[1] Kotak Bolong \n";
  cout << "[2] Segitiga \n";
  cout << "Pilihanmu    = ";
  cin >> plh;
  cout << "============================================= \n";
  switch (plh){
  case 1 :
    int p, l, z, y;
    cout << "Masukkan Panjang   = ";
    cin >> p;
    cout << "Masukkan Lebar     = ";
    cin >> l;
    for (z = 1; z <= p; z++)
    {
      for (y = 1; y <= l; y++)
      {
        if (z == 1 || z == p || y == 1 || y == l)
        {
          cout << " *";
        }
        else
        {
          cout << "  ";
        }
      }
      cout << "\n";
    }
    break;
  case 2 :
    int a, i, x, b, c;
    i = 1;
    x = 1;
    cout << "Masukkan Tinggi Segitiga   = ";
    cin >> a;
    cout << endl;
    while (i <= a)
    {
      c = a;
      b = i;
      while (x <= i)
      {
        cout << b << " ";
        x++;
        c = c-1;
        b = b+c;
      }
      i++;
      x=1;
      cout << endl;
    }
    break;
  }
      return 0;
}