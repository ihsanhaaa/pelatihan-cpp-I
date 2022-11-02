#include<iostream>

using namespace std;

int main() {
	/*materi penggunaan tipe data dan 
	operator mencari luas setengah lingkaran */
	
	// int adalah tipe data bilangan bulat
  	// float adalah tipe data bilangan pecahan
	// phi, r, l adalah nama variabel
	float phi = 3.14;
	int r = 10;
	int l;
	
	// rumus mencari luas setengah lingkaran
	l = (phi * r * r) / 2;
	
	cout << "Hasil perhitungan luas setengah lingkaran = " << l;
	
	return 0;
}
