#include <iostream>
#include <windows.h>
using namespace std;

char* MPrimeraLetra(char frase[]){
	int n=0;
	while (frase[n]!='\0'){
		n++;
	}
	frase[0]=toupper(frase[0]);
	for (int i=0; i<n; i++){
		if(frase[i]== ' ')
		frase[i+1] = toupper(frase[i+1]);
	}
	return frase;
}


int main (){
	SetConsoleOutputCP(CP_UTF8);
	char palabra[]="cáceres patrimonio de la humanidad";
	cout<< "Frase inicialmente: " << "*"<<palabra<<"*"<<endl;
	cout<< "Frase despues del arreglo: " <<"*"<< MPrimeraLetra(palabra) <<"*"<<endl;
	return 0;
}