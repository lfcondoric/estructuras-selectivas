//par
//Condori Caljaro Luis Fernando

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int n;
	
	cout<<"Ingrese un numero: ";cin>>n;
	
	if(n == 0){
		cout<<n<<" es nulo\n";
	}
	else if(n % 2 == 0){
		cout<<n<<" es par\n";
	}
		else{
			cout<<n<<" es impar\n";
		}
		
	system("pause");
	return 0;
	
}
		
		
