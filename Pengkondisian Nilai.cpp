#include<iostream>
using namespace std;
int main(){
	int nilai;
	cout<<"Masukan Nilai :";
	
	cin>>nilai;
	if(nilai >=80 & nilai <=100){
		cout<<"Nilai A"<<endl;
	}else if(nilai >=68 & nilai <=79){
		cout<<"Nilai B"<<endl;
	}else if(nilai >=56 & nilai <=67){
		cout<<"Nilai C"<<endl;
	}else if(nilai >=45 & nilai <=55){
		cout<<"Nilai D"<<endl;
	}else if(nilai >=0 & nilai <=44){
		cout<<"Nilai E"<<endl;
	}
	return 0;
}
