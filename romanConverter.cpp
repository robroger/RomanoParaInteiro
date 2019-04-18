#include "romanConverter.hpp"

#include <iostream>


using namespace std;

int valordeumchar (char caractere) {
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
    int convertido = 0;
	char caractere_atual;
	char caractere_pos;

	while(i<strlen(string) && string[i] != '\0') {
		char caractere_atual = string[i];
		char caractere_pos = string[i+1];

		convertido = convertido + valordeumchar(caractere_atual);
		i++;
	}

    return convertido;
}
