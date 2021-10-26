#include<iostream>
using namespace std;

int main(){
	/* Nama : SITI AYUNI
	   Kelas: Ilmu Komputer B
	   NPM : 2117051068
	   */
	   
     string NPM;
     string Tanggal_Lahir;
     string Bulan_Lahir;
     string Tahun_Lahir;
	 
	 //input
	 
	 cout << " --------------CARA LOGIN SIAKADU-------------" << endl;
	 cout << " Masukkan NPM\t\t: "; getline(cin,NPM);
	 cout << " Masukkan Tanggal Lahir\t:"; getline(cin,Tanggal_Lahir);
	 cout << " Masukkan Bulan Lahir\t: "; getline(cin,Bulan_Lahir);
	 cout << " Masukkan Tahun Lahir\t:"; getline(cin,Tahun_Lahir);
	 
	 cout << endl << endl;
	 
	 //output
	 
	 cout << "---------------LOGIN SIAKADU-------------------" << endl;
	 cout << "Username\t: " << NPM << endl;
	 cout << "Password\t: " <<Tahun_Lahir << Bulan_Lahir <<Tanggal_Lahir << endl;
	 
	 
	 return 0; 
	 
	
	   
}
