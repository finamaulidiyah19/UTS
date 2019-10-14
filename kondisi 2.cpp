#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int a;
	
	cout<<"masukkan nilai (0-100) = ";
	cin>>a;
	
	if(a>0 || a<100){
		if(a>89){
			cout<<"anda mendapatkan nilai A";
		}
		else if(a>79){
			cout<<"anda mendapatkan nilai B";
		}
		else if(a>69){
			cout<<"anda mendapatkan nilai C";
		}
		else if(a>59){
			cout<<"anda mendapatkan nilai D";
		}
		else{
			cout<<"anda mendapatkan nilai E";
		}
	}
	else{
		cout<<"inputan anda salah";
	}
	getch();
}
