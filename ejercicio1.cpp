//par
//Condori Caljaro Luis Fernando

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int n;
	
	cout<<"Ingrese un numero: ";cin>>n;
	
	if(n == 0){
		cout<<"El numero es nulo"<<endl;
	}
	else if(n % 2 == 0){
		cout<<"El numero es par"<<endl;
	}
		else{
			cout<<"El numero es impar"<<endl;
		}
		
	system("pause");
	return 0;
	
	}
		
		
