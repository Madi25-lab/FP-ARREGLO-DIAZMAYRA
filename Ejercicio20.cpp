#include<iostream>
using namespace std;

int main (){
	float Ventas[12];
	float S=0,P;
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
        S= S+Ventas[i];
    }
	P=S/12.0;
	cout<<endl;
	cout<<"El promedio de las ventas es: "<<P;
	cout<<endl;
	
	float Minimo=P*0.4;
	float Regular=P*0.75;
	
	cout<<endl;
	cout<< "Venta excelente en los meses de: "<<endl;
	for (int i = 0; i < 12; i++) {
        if (Ventas[i]<Minimo){
			Mi=Mi+Ventas[i];
		}else if(Ventas[i]<=Regular){
			Re=Re+Ventas[i];
		}else{
			cout<< mes[i]<<endl;
			Ex=Ex+Ventas[i];
		}
    }
    
    cout<<endl;
    float PMi=Mi*100/S;
    float PRe=Re*100/S;
    float PEx=Ex*100/S;
    cout<< "Porcentaje de meses con venta minima: "<<PMi<<"%"<<endl;
    cout<< "Porcentaje de meses con venta minima: "<<PRe<<"%"<<endl;
    cout<< "Porcentaje de meses con venta minima: "<<PEx<<"%"<<endl;

	
	return 0;
}