#include <iostream>
#include <string>
using namespace std;
 int Factorial(int);

 int main (){	
	int Total=0;
	int Acumulador=0;
	int Numero=0;
	int Origin=0;
	cout<<"Ingrese un numero:";
	cin>>Numero;
	Origin=Numero;
	do{
		Acumulador=Numero%10;
	//	cout<<Acumulador<<"!+";
		Numero=Numero/10;
		Total=Total+Factorial(Acumulador);
	}while(Numero>0);
//	cout<<Total<<" Total \n" ;
	if(Total==Origin){
	cout<<"="<<Origin;
	}else{
	cout<<"La suma no da el mismo numero";
	}
	return 99;
 
}

 int Factorial(int NumeroA){
	int Acumulador=1;
	int Mismo=0;
	Mismo=NumeroA; 
	for (int  i=1;i<=NumeroA;i++){
	Acumulador=Acumulador*i;
	
	}
	cout<<Acumulador<<"\n";
	return Acumulador;
 }	
	  		
	


