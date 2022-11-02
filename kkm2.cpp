#include<iostream>

using namespace std;

int main() {
	/*materi penggunaan tipe data dan 
	percabangan atau kondisi */
	
	// int adalah tipe data bilangan bulat
	// nilai dan kkm adalah nama variabel
	int nilai = 50;
	int kkm = 75;
	
	// melakukan pengecekan
	if (nilai > kkm) {
		cout << "Selamat nilai anda diatas target";
	} 
	else {
		cout << "Maaf nilai anda dibawah target";
	}
	
	return 0;
}
