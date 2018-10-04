#include <iostream>
#include <conio.h>

using namespace std;
int n;

main(){
	int array[n];
	float nilai,jumlah=0,average;
	cout<<"Masukan Banyak Nilai : ";
	cin>>nilai;
	
	for (int x=1;x<=nilai;x++){
		cout<<"Masukkan nilai ke - "<<x<<" :";
		cin>>array[n];
		jumlah+=array[n];
	}
	
		average=jumlah/nilai;
cout<<"Rata rata nilai :"<<average<<endl;
getch();
}
