#include <iostream>
using namespace std;

int main (){

char espacio[100];

cout<<"Ingrese una frase: ";
cin.getline(espacio,100);
cout<< endl;

cout<< "La frase eco es: " << endl;
	for (int i = 0; espacio[i] != '\0'; i++){
        if (espacio[i] != ' '){
            cout << espacio[i] ;
    }else {
    	cout<<endl;
	}
}
return 0;
}