#include<iostream>
using namespace std;

int mistrcmp(char str1[], char str2[]) {
    int i;
	while(str1[i] != '\0' && str2[i] != '\0'){
		if(str1[i] > str2[i]){
			return 1;
		}else if(str1[i] < str2[i]){
			return -1;
		}
		i++;
	}
	
	if(str1[i] == '\0' && str2[i] == '\0'){
		return 0;
	}else if(str1[i] == '\0'){
		return -1;
	}else{
		return 1;
	}
} 
        
int main(){
	char str1[100];
	int str2[100];
	int Similitud;
	
	cout<<"Ingrese una palabra para el primer arreglo: ";
    cin>>str1;
    cout<<"Ingrese una palabra para el segundo arreglo";
    cin>>str2;
    cout<<endl;
    
    Similitud = mistrcmp(str1, str2);
    

	
	return 0;
}

    
 