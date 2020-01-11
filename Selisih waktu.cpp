#include <iostream>
#include <conio.h>
using namespace std;

	struct data_jam 
	{
		int jam,menit,detik;
	};
	data_jam tj1,tj2,td3;
	

	int main(){
		//jam pertama
		cout<<"Masukan jam pertama"<<endl;
		cout<<"Jam   : ";cin>>tj1.jam;
		cout<<"Menit : ";cin>>tj1.menit;
		cout<<"Detik : ";cin>>tj1.detik;

		cout<<endl<<endl;

		cout<<"Masukan jam kedua"<<endl;
		cout<<"Jam   : ";cin>>tj2.jam;
		cout<<"Menit : ";cin>>tj2.menit;
		cout<<"Detik : ";cin>>tj2.detik;

		if((tj2.detik-tj1.detik)<0){
			td3.detik=(60 + tj2.detik)-tj1.detik;
			tj2.menit;
		}
		else{
			td3.detik = tj2.detik-tj1.detik;
		}
		if((tj2.menit-tj1.menit)<0){
			td3.menit=(60 + tj2.menit)-tj1.menit;
			tj2.jam;
			td3.jam = tj2.jam - tj1.jam-1;
		}
		else{
			td3.menit=tj2.menit-tj1.menit;
		}
		td3.jam=tj2.jam-tj1.jam;

		cout<<endl<<endl;

		cout<<"Selisih dalam detik = "<<
		td3.jam*3600 + td3.menit*60<<endl;
		cout<<"Selisih dalam menit = "<<
		td3.jam*60<<endl;
		cout<<"Selisih dalam jam = "<<
		td3.jam<<endl;


		cout<<endl<<endl;

		cout<<"Jam : "<<td3.jam<<":"<<td3.menit<<":"<<td3.detik;

		getch();
	}
