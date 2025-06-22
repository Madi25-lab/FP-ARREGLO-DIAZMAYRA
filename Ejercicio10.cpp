#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main (){
	int n,P;
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
	P=suma/30;
	cout<<endl;
	cout<<"El promedio es: "<<P<<endl;
	
	
	return 0;
	
}
    