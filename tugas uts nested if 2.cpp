//Tentukan harga minuman aqua gelas?


#include <iostream>

using namespace std ;
int main() {
	long harga=0;
	char kodeminuman,bentuk;
	string merk;
	
	cout << "Progam cek harga minuman";
	
	
	cout << "Masukkan kode minuman : " ;
	cin >> kodeminuman ;
	
	cout << "Masukkan bentuk minuman : ";
	cin >> bentuk;
	
	if(kodeminuman=='1'){
		merk="aqua";
		if(bentuk=='botol'){
			harga = 5000;
		}
		else if (bentuk=='gelas'){
			harga = 4000;
		}
		else {
			harga = 6000;
		}
	}
	else if(kodeminuman=='2'){
		merk="torasusu";
		if(bentuk=='botol'){
			harga = 7000;
		}
		else if (bentuk=='gelas'){
			harga = 8000;
		}
		else {
			harga = 9000;
		}
	}
	else {
		merk="Error";
		cout << "Salah input kode minuman" ;
	}
	
	cout << "Merk minuman= " <<merk;
	cout << "Bentuk minuman= "<<bentuk;
	cout << "Harga minuman = " <<harga;

	return 0;
}
