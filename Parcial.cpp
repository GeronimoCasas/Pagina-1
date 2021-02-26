#include<iostream>
using namespace std;
#include<conio.h>
#include <windows.h> 
#include <time.h> 
#include<stdio.h>
#include<stdlib.h>
#include<string>

main()
{
int op1,suma,x,pap=1500,choc=1000,dor=1200, op2,C=1,D=2,P=3,dinero;

while(x==0){
cout<<"Buen día señor usuario, elige 1 respuesta""\n"" 1.Ver productos""\n""2.Comprar Productos""\n""3.Salir";
cin>>op1;
if(op1==1){
cout<<"Los productos son:""\n""1.Chocolates $1000""\n""2.Papitas $1500""\n""3.Doritos $1200";	
}
return main();

if(op1==2){
cout<<"Que deseas llevar?";
cin>>op2;
if(op2==C)	{
cout<<"Debes pagar $1000";
suma=suma+choc;	
}
if(op2==D){
cout<<"Debes pagar 1200";	
suma=suma+dor;
cout<<"Tu cuenta esta en "<<suma;	
}
if(op2==P){
cout<<"Debes pagar 1500";	
suma=suma+pap;
cout<<"Tu cuenta esta en "<<suma;	
}
}
return op2();
if(op1==3){
	cout<<"Buen día señor usuario adios";
	return 0;
}
cout<<"Con que dinero vas a pagar señor usuario?";
cin>>dinero;
if(dinero>=suma){
	cout<<"Gracias por las compras, bye";
}
else{
	cout<<"Perdón no tienes el dienro suficiente";
	return 0;
}
}
}





















