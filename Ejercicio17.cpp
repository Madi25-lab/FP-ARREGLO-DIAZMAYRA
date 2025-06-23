#include <iostream>
using namespace std;

bool Vap(char nombresC[],char apellido[]){
	int i=0,j=0;

    while(nombresC[i] !='\0'){
        if(nombresC[i]==apellido[0]){
            int k=i;

            while(apellido[j] !='\0' && nombresC[k]==apellido[j]){
                j++;
                k++;
            }

            if(apellido[j]=='\0'){
                return true;
            }
        }
        i++;
    }

    return false;
}

int main(){
	bool validacion;
	char nombresC[200];
	char apellido[100];
	
	cout<<"Digite su nombre completo:(Digitelo todo en mayuscula o miniscula): ";
	cin.getline(nombresC,200);
	cout<<"Digite el apellido a buscar: ";
	cin.getline(apellido,100);
	
	validacion = Vap(nombresC, apellido);
	
	cout<<endl;
	if(validacion == true){
		cout<<"El apellido si le pertenece a esa persona";
	}else{
		cout<<"No se encuentra el apellido";
	}
	
	return 0;
}
