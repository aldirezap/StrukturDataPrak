#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int n;
int main(){
	int n;
	float array[n],s_e2,varian,jumlah=0,jumlah_2;
	cout<<"Input banyak nilai :  ";cin>>n;
	for (float i=0; i<n;i++){
		cout<<"Masukkan nilai ke  "<<i+1<<" = ";cin>>array[n];
		s_e2+=(pow(array[n], 2)); 
		jumlah+=array[n];
	}
	jumlah_2=pow(jumlah, 2);
	varian=((n*s_e2)-jumlah_2)/(n*(n-1));
	cout<<"standar Devisiasi= "<<sqrt(varian)<<endl;
getch();
}
