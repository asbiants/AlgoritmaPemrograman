#include <iostream>
using namespace std;


main()
{
	
	int i, jumlah_input = 0, mak = 0, min = 0;
	int i_min, hasil2 = 0, selisih[999] = {0};
	int angka[jumlah_input];
	float avg = 0, hasil = 0;
	
		
	cout << "Masukkan Banyak Angka : ";
	cin >> jumlah_input;

	for ( i = 0; i < jumlah_input; i++)
	{
		cout << "Angka Ke-" << i+1 << " : ";
		cin >> angka[i];
	}
	
	
	cout << "  " << endl;
	cout << "  " << endl;
	cout << "____________Hasil____________" <<endl;	
	cout << "Deret\t\t\t : ";
	for (i=0; i< jumlah_input; i++)
	{
	cout << angka[i] << " " ;
	}
	cout << endl;
	
	mak = angka[0];
	for (i = 0; i < jumlah_input; i++)
	{
		if (mak < angka[i])
		{
			mak = angka[i];
		}
		else 
		min = angka[0];
		if(min > angka[i])
		{
			min = angka[i];
		}
	}
	cout<<"Maksimum\t\t : " << mak << endl;
	cout<<"Minimum\t\t\t : "<< min <<endl;
	
	for( i = 0; i < jumlah_input; i++)
	{
		avg = avg + angka[i];
	}
	hasil = avg/jumlah_input;
	cout<<"Rata-Rata\t\t : "<< hasil <<endl;

	jumlah_input = jumlah_input - 1;
	for (i = 0; i < jumlah_input; i++)
	{
		i_min = i + 1;
	
		if (i < jumlah_input)
		selisih[i] = angka[i] - angka[i_min];
		else selisih[i] = 0;
		
		if (selisih [i] < 0)
		selisih[i] = selisih[i] * (-1);
		hasil2 = selisih [0];
		if (selisih [i] > hasil2)
		{
			 hasil2 = selisih [i];
		}
	}
	cout << "Selisih Max\t\t : " << hasil2 <<endl;
	
	  
	
	
	return 0;
}
