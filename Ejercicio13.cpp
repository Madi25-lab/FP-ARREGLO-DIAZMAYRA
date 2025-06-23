#include<iostream>

using namespace std;

void mistrcpy(char Inicio[], char Fin[]){
	int i=0;
	for( i=0;Fin [i]!='\0';i++){
		Inicio[i]=Fin[i];
    }
    Inicio[i] = '\0';
}

int main(){

	char str1[100],str2[100];
	
	cout<<"Ingrese str1: ";
    cin>>str1;
    cout<<"Ingrese str2: ";
    cin>>str2;
    cout<<endl;
    
    mistrcpy(str1,str2);
	
	cout<<"La palabra str2 copiada en str1 es: "<<str1<<endl;
    
	
	return 0;
}
    
 