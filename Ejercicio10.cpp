#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main (){
	int n,aux;
	float M,P;
	int numeros[30];
	int suma=0;
	
	srand(time(0));
	cout<<"Los numeros generados aleatoriamente son:"<<endl;
	cout<<endl;
	cout<<"(";
	for(int i=0; i<30; i++){
		numeros[i]=rand()%901+100;
		cout<<numeros[i];
		if(i<29){
			cout<<";";
		}
	}
	cout<<")";
	cout<<endl;
	
	for(int i=0; i<30; i++){
		suma+=numeros[i];
		}		
	P=suma/30.0;
	cout<<endl;
	cout<<"El promedio es: "<<P<<endl;
	
	for (int i=0; i<30-1; i++){
		for (int j=0; j<30-i-1; j++){
			if(numeros[j]>numeros[j+1]){
				aux=numeros[j];
				numeros[j]=numeros[j+1];
				numeros[j+1]=aux;
			}
		}
	}
	
	cout<<"Orden"<<endl;
	for(int i=0; i<30; i++){
	cout<< numeros[i] <<endl;
    }
	
	M=(numeros[14]+numeros[15])/2.0;
	cout<<numeros[14];
	cout<<numeros[15];
	cout<<"La mediana es: "<<M<<endl;
	return 0;
	
}
    