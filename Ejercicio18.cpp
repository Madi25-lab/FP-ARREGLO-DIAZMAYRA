#include<iostream>
using namespace std;

int main(){
	bool Parentesis = true;
	int Cont=0;
	char texto[100];
	cout<<"Introduzca un texto con parentesis: ";
	cin.getline(texto,100);
	
	int i=0;
	while(texto[i]!= '\0'){
		if(texto[i] == '('){
			Cont++;
		}else if(texto[i] == ')'){
			Cont--;
		if(Cont<0){
			Parentesis = false;
			break;
			}
		}
		i++;
	}
	
	if(Cont != 0){
		Parentesis = false;
	}
	if(Parentesis == true){
		cout<<"El texto esta correctamente escrito";
	}else if(Parentesis == false){
		cout<<"El texto esta incorrectamente escrito";
	}
	
	return 0;
	}