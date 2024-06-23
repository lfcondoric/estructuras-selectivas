//par
//Condori Caljaro Luis Fernando

#include<iostream>
#include<stdlib.h>
#include<windows.h>

using namespace std;

int main(){
	
	int n,c=0;

	cout<<"\t\t\tConsulte si es par o impar\n";
	cout<<"Ingrese un numero: ";cin>>n;
	
	cout<<"Espere 2 segundos\n";
	Sleep(3000);
	if(n == 0){
		cout<<n<<" es nulo\n";
	}
	else if(n % 2 == 0){
		cout<<n<<" es par\n";
	}
		else{
			cout<<n<<" es impar\n";
		}
	for(int i=1;i<=n;i++){
		if(n%i==0){
			c++;
		}
	}
	if(c==2){
		cout<<"Ademas, el numero es primo\n";
	}
		
	system("pause");
	return 0;
	
}
		
		
