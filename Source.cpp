#include <iostream>
using namespace std;

int main()
{
	int panjang, lebar, tinggi, luas_permukaan, volume;
	cout << "Menghitung luas permukaan balok dan volume balok\n";
	cout << "\nMasukkan nilai panjang dari balok = ";
	cin >> panjang;
	cout << "Masukkan nilai lebar dari balok = ";
	cin >> lebar;
	cout << "Masukkan nilai tinggi dari balok = ";
	cin >> tinggi ;

	luas_permukaan = 2 * (panjang * lebar) + 2 * (panjang * tinggi) + 2 * (lebar * tinggi);
	volume = panjang * lebar * tinggi;

	cout << "\nLuas permukaan dari balok tersebut adalah = " << luas_permukaan << endl;
	cout << "\nVolume dari balok tersebut adalah = " << volume << endl;
}