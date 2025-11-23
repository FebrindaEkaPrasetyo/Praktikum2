#include <iostream>

using namespace std;

int main() {
	double nilai;

	cout << "=== Program Penentuan Nilai Mutu === " << endl;
	cout << " Masukkan Nilai Angka : ";
	cin >> nilai;

	cout << "\nHasil" << endl;

	if (nilai > 76) {
		cout << "Nilai Mutu : A " << endl;
	}

	else if (nilai > 70 && nilai <= 76) {
		cout << "Nilai Mutu : B " << endl;
	}

	else if (nilai > 65 && nilai <= 70) {
		cout << "Nilai Mutu : C " << endl;
	}

	else if (nilai > 50 && nilai <= 65) {
		cout << "Nilai Mutu : D " << endl;
	}

	else if (nilai <= 50) {
		cout << "Nilai Mutu : E " << endl;
	}
	return 0;
}

