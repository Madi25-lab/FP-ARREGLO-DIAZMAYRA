#include<iostream>
using namespace std;

void mistrcat(char str1[], char str2[]){
	int i, j;
	for( i=0;str1 [i]!='\0';i++){
    }
    
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

int main(){
	char str1[100];
	char str2[100];
	
	cout<<"Ingrese la primera palabra: "; 
	cin>>str1;
	cout<<"Ingrese la segunda palabra: ";
	cin>>str2;
	
	mistrcat(str1, str2);

    cout << "Resultado de juntar str1 y str2: " << str1 << endl;
	
	return 0;
}

