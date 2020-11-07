#include <iostream>
#include <iomanip>
using namespace std;
main ()
{ string a, b;
  float hr1, ts1, as1, ttl1, hr2, ts2, as2, ttl2;
  int matakuliah;
  cout << "=============================================\n";
  cout << setw (30) << "Login Akun \n";
  cout << "=============================================\n";
  cout << "User Name      = ";
  cin >>a;
  cout << "Password       = ";
  cin >>b;
  cout << "---------------------------------------------\n\n";
  if (a != "asbian" && b != "124200050" )
  {
    cout << "Username salah \n";
    cout << "Password salah \n";
    cout << "Login gagal !";
    exit (0);
  }
  else if (a != "asbian" && b == "124200050")
  {
    cout << "Username salah \n";
    cout << "Login gagal ! \n";
    exit (0);
  }
  else if (a == "asbian" && b != "124200050")
  {
    cout << "Password salah \n";
    cout << "Login gagal ! \n";
    exit (0);
  }
  else
  {
    cout << "Login Berhasil ! \n\n";
  }
  cout << "=============================================\n";
  cout << "Pilih Mata Kuliah = \n";
  cout << "1. Algoritma dan Pemrograman  \n";
  cout << "2. Kalkulus   \n";
  cout << "Pilih : ";
  cin >> matakuliah;
  switch (matakuliah) {
    case 1 :
      cout << "=============================================\n";
      cout << setw (37) << "Algoritma dan Pemrograman \n";
      cout << "=============================================\n";
      cout << "Masukkan Nilai Harian    = ";
      cin >> hr1;
      cout << "Masukkan Nilai UTS       = ";
      cin >> ts1;
      cout << "Masukkan Nilai UAS       = ";
      cin >> as1;
      ttl1 = (hr1 + ts1 + as1)/3;
      if (ttl1 >= 80)
        { cout << "Selamat Anda Lulus Matkul Algoritma Pemrograman\n ";
          cout << "Dengan Nilai " << ttl1 << endl;}
      else if (ttl1 < 80)
        { cout << "Anda Tidak Lulus Matkul Algoritma Pemrograman\n ";
          cout << "Nilai anda " << ttl1 << endl;}
      else
        { cout << "Input eror \n";}
          break;
    case 2 :
    cout << "=============================================\n";
    cout << setw (30) << "Kalkulus \n";
    cout << "=============================================\n";
    cout << "Masukkan Nilai Harian    = ";
    cin >> hr2;
    cout << "Masukkan Nilai UTS       = ";
    cin >> ts2;
    cout << "Masukkan Nilai UAS       = ";
    cin >> as2;
    ttl2 = (hr2 + ts2 + as2)/3;
    if (ttl2 >= 80)
      { cout << "Selamat Anda Lulus Matkul Kalkulus \n";
        cout << "Dengan nilai " << ttl2 << endl;}
    else if  (ttl2 < 80)
      { cout << "Anda Tidak Lulus Matkul Kalkulus \n";
        cout << "Nilai anda " << ttl2 << endl;}
    else
      { cout << "Input eror \n";}
        break ;
    default :
      {cout << "Input Tidak Terdefinisi \n";}
    }
  return 0;
}
