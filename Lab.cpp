#include <iostream>
#include <string>
using namespace std;
 int Factorial(int);
 void BuscandoNumero(int);

 int main (){
	for(int i=1;i<=50000;i++){
	BuscandoNumero(i);
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
//	cout<<Acumulador<<"\n";
	return Acumulador;
 }	

 void BuscandoNumero(int BNumero){
	 int Total=0;
        int Acumulador=0;
        int Numero=BNumero;
        int Origin=0;
        Origin=Numero;
        do{
                Acumulador=Numero%10;
        //      cout<<Acumulador<<"!+";
                Numero=Numero/10;
                Total=Total+Factorial(Acumulador);
        }while(Numero>0);
//      cout<<Total<<" Total \n" ;
        if(Total==Origin){
        cout<<"Resultado:"<<Total<<"\n";
        }else{
        
        }
}

	  		
	


