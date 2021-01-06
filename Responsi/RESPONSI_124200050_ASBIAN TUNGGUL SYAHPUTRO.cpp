#include <iostream>
#include <windows.h>
using namespace std;

string username, pass, nama_menu_1;
float harga_total, harga;
int masuk_menu, i, j, plh;
int byk_bahan[99], jmlh_bahan[99][99], hrg_bahan[99][99];
string nm_menu[99],nm_bahan[99][99];

void tambahkan();
void lihat();
void cari();

int main()
{
	string input_usr = "admin";
	string input_pass = "admin123";
	
   login:;
   system ("cls");
   do{
	cout << endl;   
	cout << "Login Admin__ \n";
	cout << "Username		: ";
	cin >> username;
	cout << "Password		: ";
	cin >> pass;
	
	if (username == input_usr && pass == input_pass)
	{
		cout << "Login Berhasil !\n";
		cout << endl;
		system ("pause");
		system ("cls");
	  awal:;
	  	system ("cls");
		cout << "Menu_____ " << endl;
		cout << "1. Tambah Makanan" << endl;
		cout << "2. Lihat Makanan" << endl;
		cout << "3. Cari Makanan" << endl;
		cout << "4. Logout" << endl;
		cout << "Pilih : ";
		cin >> plh;
		switch(plh)
		{
			case 1 :
			tambahkan();
			goto awal;
			break;
			case 2 :
			lihat();
			goto awal;
			break;
			case 3 :
			cari();
			goto awal;
			break;
			case 4 :
			goto login;
			break;	
		} 
	}
	else if (username == input_usr && pass != input_pass)
		{cout << "Password Salah!" << endl;}
	else if (username != input_usr && pass == input_pass)
		{cout << "Username Salah!" << endl;}
	else
		{cout << "Login Gagal!" << endl;}
	cout << endl;	
	} while(username != input_usr || pass != input_pass);	
return 0;		
}

void tambahkan()
{
	int i = 0;
	int j = 0;

	cout << "Jumlah makanan : ";
	cin >> masuk_menu;
	for (i = 0; i < masuk_menu; i++)
	{
		cout << "Data makanan ke-" << i+1 << endl;
		cin.ignore();
		cout << "Nama Menu : ";
		getline(cin,nm_menu[i]);
		cout << "Banyak bahan : ";
		cin >> byk_bahan[i];
		
		for(j = 0; j < byk_bahan[i]; j++){
			cout << "\t Bahan " << j+1 << endl;
			cin.ignore();
			cout << "\tNama 	: ";
			getline(cin,nm_bahan[i][j]);
			cout << "\tJumlah   : ";
			cin >> jmlh_bahan[i][j];
			cout << "\tHarga    : ";
			cin >> hrg_bahan[i][j];	
		}
	}
	cout << "Berhasil Memasukkan Data" << endl;
	cout << endl;
	system ("pause");
}

void lihat()
{
	for (i = 0; i < masuk_menu; i++)
	{
		cout << "Jumlah Makanan : " << i+1 << endl; 
		cout << "Data makanan ke-"<< i+1 << endl;
		cout << "Nama 	: " << nm_menu[i] << endl;
		
		for(j = 0; j < byk_bahan[i]; j++)
		{ 
			cout << "\tBahan " << j+1 << endl;
			cout << "\tNama   : " << nm_bahan[i][j] << endl;
			cout << "\tHarga  : " << jmlh_bahan[i][j]*hrg_bahan[i][j] << endl;
			harga = (jmlh_bahan[i][j] * hrg_bahan[i][j]);
			harga_total += harga;
		}
		cout << "Total Harga : " << harga_total << endl;
	}
	cout << endl;
	system ("pause");
}

void cari()
{
	int find = 0;
	cin.ignore();
	cout << "Cari Nama Makanan : "; 
	getline(cin,nama_menu_1);
	
		for (i = 0; i < masuk_menu; i++)
		{	
			if ( nama_menu_1 == nm_menu[i])
			{
			cout << "Data Ditemukan " << endl;
			cout << "Data Makanan ke-" << i+1 << endl;
			cout << "Nama 		 : " << nm_menu[i] << endl;
			for(j = 0; j < byk_bahan[i]; j++)
			{ 
				cout << "\tBahan "<< j+1 << endl;
				cout << "\tNama 	: "<< nm_bahan[i][j] << endl;
				cout << "\tHarga 	: "<< jmlh_bahan[i][j] * hrg_bahan[i][j] << endl;
				harga = (jmlh_bahan[i][j] * hrg_bahan[i][j]);
				harga_total += harga;
			}
			cout << "Total Harga : " << harga_total << endl;
			find = 1;
			system ("pause");
			}
		}
		if ( find == 0)
		{
			cout << endl << "Data tidak ditemukkan" << endl << endl;
			system ("pause");
		}
}
