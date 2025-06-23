#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main (){
	int n,aux, MO;
	float M,P;
	int numeros[30];
	int suma=0, c=0;
	
	srand(time(0));
	cout<<"Los 30 numeros generados aleatoriamente son:"<<endl;
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
	cout<<endl;
	M=(numeros[14]+numeros[15])/2.0;
	cout<<"La mediana es: "<<M<<endl;
	cout<<"Los numeros para hallar la mediana son: ";
	cout<<numeros[14]<<" ; "<<numeros[15];
	cout<<endl;
	
	MO = numeros[0];
    int Cantidad = 1;
	
	for(int i=0; i<30; i++){
		for(int j=0; j<30; j++){
			if(numeros[i] == numeros[j]){
				c++;
			}
		}
		if(c>Cantidad){
			Cantidad = c;
			MO = numeros[i];
		}
	}
	
	MO=numeros[0];
	int Rep=1,Cont=1;
	
	for(int i=0;i<30;i++){
        for(int j=i+1;j<30;j++){
            if(numeros[i]==numeros[j]){
                Cont++;
            }
        }
        if(Cont>Rep){
            Rep=Cont;
            MO=numeros[i];
        }
    }
    cout<<endl;
	cout<<"La moda es: "<<MO<<" se repite "<<Rep;
	
	return 0;
}
