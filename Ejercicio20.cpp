#include<iostream>
using namespace std;

int main (){
	float Ventas[12];
	float P;
	int Ex=0, Re=0,Mi=0;
	string mes[12]={"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio","Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
	
	cout<<"------------------------------------------------------"<<endl;
	cout<< "<<<<<<<           ALMACEN LA MILAGROSA       >>>>>>>"<<endl;
	cout<<"------------------------------------------------------"<<endl;
	
	cout<<"Ingreso de ventas mensuales"<<endl;
	cout<<endl;
	for (int i = 0; i < 12; i++) {
        cout<<"Ingrese la venta mensual del mes de "<< mes[i] << ": ";
        cin >> Ventas[i];
        P= P+Ventas[i];
    }
	P=P/12.0;
	cout<<endl;
	cout<<"El promedio de las ventas es: "<<P;
	cout<<endl;
	
    
	
	
	
	return 0;
}