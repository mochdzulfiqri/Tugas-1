#include<iostream>//Menu ATM
using namespace std;
int main () {
	cout<<"Pilih menu"<< endl;
	cout<<"1. Tarik dana"<< endl;
	cout<<"2. Transfer dana"<< endl;
	cout<<"3. Cek dana"<< endl;
	cout<<"Masukan pilihan anda";
	int menu;
	cin>>menu;
	if (menu==1){
	cout<<"Tarik dana";
	}else if (menu==2){
	cout<<"Transfer dana";
	}else if  (menu==3){
	cout<<"Cek dana";
	}else
	cout<<"menu tidak ada";
	
	return 0;
	} 
	
