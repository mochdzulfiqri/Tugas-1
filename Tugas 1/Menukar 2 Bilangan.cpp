#include <iostream>
using namespace std;
int main () {
	int a = 3;
	int b = 5;
	int c = 0;
	cout<<"Sebelum Ditukar :"<<endl;
	cout <<a<< endl;
	cout <<b<< endl;
	
	c = a;
	a = b;
	b = c;
	
	cout <<"Setelah Ditukar :"<<endl;
	cout <<a<< endl;
	cout <<b<< endl;
	return 0;
}
