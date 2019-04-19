#include "romanConverter.hpp"

int valordeumchar (char caractere) {	// Switch case para definir tipos básicos
	switch (caractere){
		case 'I':
			return 1;
            break;
		case 'V': 
			return  5;
            break;
		case 'X':
			return  10;
            break;
		case 'L':
			return  50;
            break;
		case 'C':
			return  100;
            break;
		case 'D':
			return  500;
            break;
		case 'M':
			return  1000;
            break;
		default:
			return  -1;
	    }
}


int romanConverter(char string[]){
    int i = 0;
    int convertido = 0;		// Resultado da conversão para inteiro
	char caractere_atual;
	char caractere_pos;
	

	while(i<strlen(string) && string[i] != '\0') {	// Loop para percorrer a string
		char caractere_atual = string[i];
		char caractere_pos = string[i+1];

		//Checa valores invalidos
		if(valordeumchar(caractere_atual) == -1){
			return -1;
		}

		//Checa números inválidos
		if (string[i] == 'V' && string[i+1] == 'V' || string[i] == 'L' && string[i+1] == 'L' || string[i] == 'D' && string[i+1] == 'D') {
			return -1;
		}
		//Checa números inválidos
		if (string[i] == string[i+1] && string[i] == string[i+2] && string[i] == string[i+3]) {
			return -1;
		}		

		//If para tipos válidos que precisam de soma
		if (valordeumchar(caractere_atual) >= valordeumchar(caractere_pos)){ 
			convertido = convertido + valordeumchar(caractere_atual);
			i++;
		} else if (valordeumchar(caractere_atual) < valordeumchar(caractere_pos)) { //If para tipos válidos que precisam de subtração
			convertido = convertido + valordeumchar(caractere_pos) - valordeumchar(caractere_atual); 
			i = i + 2;
		}
	}

    return convertido;
}
