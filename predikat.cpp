#include<iostream>

using namespace std;

int main() {
	/*materi penggunaan tipe data dan 
	percabangan atau kondisi untuk menentukan
	predikat A, B, C, D, E berdasarkan nilai */
	
	// int adalah tipe data bilangan bulat
	// nilai adalah nama variabel
	int nilai = 90;
	
	// melakukan pengecekan
	if (nilai >= 90) {
		cout << "Nilai = " << nilai << " , dengan predikat A";
	} 
	else if (nilai >= 70 && nilai < 90) {
		cout << "Nilai = " << nilai << " , dengan predikat B";
	}
	else if (nilai >= 50 && nilai < 70) {
		cout << "Nilai = " << nilai << " , dengan predikat C";
	}
	else if (nilai >= 30 && nilai < 50) {
		cout << "Nilai = " << nilai << " , dengan predikat D";
	}
	else if (nilai >= 1 && nilai < 30) {
		cout << "Nilai = " << nilai << " , dengan predikat E";
	}
	else {
		cout << "Maaf nilai anda dibawah target, anda di DO";
	}
	
	return 0;
}
