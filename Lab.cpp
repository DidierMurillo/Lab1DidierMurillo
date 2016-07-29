#include <iostream>
#include <string>
using namespace std;
 int Factorial(int);
 void BuscandoNumero(int);
 int BuscarDivisores(int);


 int main (){
	int Opcion=0;
	cout<<"Ejercicio 1:1"<<"\n"<<"Ejercicio 2:2"<<"\n"<<"Ingrese su opcion";
	cin>>Opcion;
	if(Opcion==1){
	for(int i=1;i<=50000;i++){
	BuscandoNumero(i);
	}
	}if(Opcion==2){
	int Numero1=0;
	int Numero2=0;
	int A=0,B=0;
	cout<<"Ingrese el primer numero: ";
	cin>>Numero1;
	cout<<"\n";
	cout<<"Ingrese el segundo numero:";
	cin>>Numero2;
//	cout<<"\n";
	A=BuscarDivisores(Numero1);
	B=BuscarDivisores(Numero2);
	if(A==Numero2&&B==Numero1){
	cout<<"Los numeros son amigos";
	}else{
	cout<<"Los numeros no son amigos";
	}		
	}else{
	cout<<"Ingreso una opcion incorrecta";

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

 int BuscarDivisores(int NumeroX){
	int SumaDivisores=0;
	for(int i=1;i<NumeroX;i++ ){
	if(NumeroX%i==0){
		SumaDivisores=SumaDivisores+i;
	}
	}
	cout<<SumaDivisores<<"\n";
	return SumaDivisores;
}
	  		
	


