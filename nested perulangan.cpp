#include <conio.h>
#include <iostream>
using namespace std;

main(){
	int x,y;
	
	for (x=1; x<=4; x++){
		for (y=1; y<=x; y++){
			cout<<y<<"  ";
		}
		cout<<endl;
	}
	for (x=4; x>=0; x--){
		for (y=0; y<=x; y++){
			cout<<x<<"  ";
		}
		cout<<endl;
	}
	getch();
}
