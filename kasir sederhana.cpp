#include <iostream>

using namespace std;

int main() {
	
	int i,j; 
	float jumlah[j];  
	float harga[j];
	char produk[100][j];
	float diskon[j];
	float hitung[j];
	float jml[i];
	
	cout << "======================="<< endl;
	cout << "Program Kasir Sederhana"<< endl;	
	cout << "======================="<< endl;
	
	cout << "masukkan Data Resi: ";
	cin >>j;
	
	for(i=1;i<=j;i++) {
		
		cout << "Nomor Resi Belanja " << i << endl; 
		
		cout << "masukkan Nama Produk : ";
		cin>>produk[i];
		
		cout << "masukkan Harga Produk : ";
		cin>> harga[i];
		
		cout << "total Produk Yang Dibeli: ";
		cin >>jumlah[i];
		
		cout << "masukkan Diskon (%): ";
		cin >>diskon[i];
		
		jml[i]= harga[i]*jumlah[i];
		
		hitung[i]= jml[i]*(diskon[i]/100);	

		cout << "\n" << endl;
	}
	
	
	for(i=1; i<=j; i++) {
		cout << "\n" << endl;	
		cout << "======================"<<  endl;
		cout << "=====Nota Belanja====="<< endl;
		cout << "======================"<< endl;
		cout << "No Resi Belanja = "<<i<<  endl;
		cout << "Nama Produk     = " <<produk[i]<< endl;
		cout << "Harga Produk    = " <<harga[i]<< endl;
		cout << "Jumlah beli     = " <<jumlah[i]<< endl;
		cout << "Total Diskon	= "<<diskon[i]<< endl;
		cout << "total harga     = " <<jml[i]-hitung[i]<< endl;
		cout << "======================" << endl;
		cout << "Selamat Berbelanja" << endl;
		cout << "======================" << endl;
		
	}
	
	return 0;
}
