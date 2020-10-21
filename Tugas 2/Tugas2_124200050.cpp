#include <iostream>
using namespace std;

main ()
{
	char st1 [25], st2 [25], st3 [25], st4 [25];
	int u1, u2, u3, u4, bt1, bt2, bt3, bt4, ttl;
	cout << "------------------------------------------- \n";
	cout << "****Bantuan Dana Penanggulangan Bencana**** \n";
	cout << "------------------------------------------- \n\n";
	cout << "Status Dalam Keluarga diisi :\n";
	cout << "(Ayah/Ibu/Anak ke-1/Anak ke-2) \n\n";
	cout << "------------------------------------------- \n";
	cout << "Status Dalam Keluarga		= ";
	cin.getline (st1, sizeof (st1));
	cout << "Umur				= ";
	cin >>u1;
	cin.ignore ();
	if (u1<=12)
	{
		cout << "Golongan Anak-Anak (Rp.15000/hari) \n";
		bt1 = 15000*30;
	}
	else if ( u1>12 && u1<=20)
	{
		cout << "Golongan Remaja (Rp.20000/hari)\n";
		bt1 = 20000*30;
	}
	else
	{
		cout << "Golongan Dewasa (Rp.30000/hari) \n";
		bt1 = 30000*30;
	}
	cout << "Bantuan Perbulan		= Rp. "<< bt1 << endl;
	cout << "------------------------------------------- \n";
	cout << "Status Dalam Keluarga		= ";
	cin.getline (st2, sizeof (st2));
	cout << "Umur				= ";
	cin >>u2;
	cin.ignore ();
	if (u2<=12)
	{
		cout << "Golongan Anak-Anak (Rp.15000/hari) \n";
		bt2 = 15000*30;
	}
	else if ( u2>12 && u2<=20)
	{
		cout << "Golongan Remaja (Rp.20000/hari)\n";
		bt2 = 20000*30;
	}
	else
	{
		cout << "Golongan Dewasa (Rp.30000/hari) \n";
		bt2 = 30000*30;
	}
	cout << "Bantuan Perbulan		= Rp. "<< bt2 << endl;
	cout << "------------------------------------------- \n";
	cout << "Status Dalam Keluarga		= ";
	cin.getline (st3, sizeof (st3));
	cout << "Umur				= ";
	cin >>u3;
	cin.ignore ();
	if (u3<=12)
	{
		cout << "Golongan Anak-Anak (Rp.15000/hari) \n";
		bt3 = 15000*30;
	}
	else if ( u3>12 && u3<=20)
	{
		cout << "Golongan Remaja (Rp.20000/hari)\n";
		bt3 = 20000*30;
	}
	else
	{
		cout << "Golongan Dewasa (Rp.30000/hari) \n";
		bt3 = 30000*30;
	}
	cout << "Bantuan Perbulan		= Rp. "<< bt3 << endl;
	cout << "------------------------------------------- \n";
	cout << "Status Dalam Keluarga		= ";
	cin.getline (st4, sizeof (st4));
	cout << "Umur				= ";
	cin >>u4;
	cin.ignore ();
	if (u4<=12)
	{
		cout << "Golongan Anak-Anak (Rp.15000/hari) \n";
		bt4 = 15000*30;
	}
	else if ( u4>12 && u4<=20)
	{
		cout << "Golongan Remaja (Rp.20000/hari)\n";
		bt4 = 20000*30;
	}
	else
	{
		cout << "Golongan Dewasa (Rp.30000/hari) \n";
		bt4 = 30000*30;
	}
	cout << "Bantuan Perbulan		= Rp. "<< bt4 << endl;
	cout << "------------------------------------------- \n";
	ttl = bt1+bt2+bt3+bt4;
	cout << "Total Bantuan Satu Keluarga 	= Rp. " << ttl;
	return 0;
}
