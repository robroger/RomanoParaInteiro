#include "romanConverter.hpp"

#include <iostream>


using namespace std;

int romanConverter(char string[]){
    int i = 0;
    int convertido = 0;

        switch (string[i]){
		case 'I':
			convertido = 1;
            break;
		case 'V': 
			convertido =  5;
            break;
		case 'X':
			convertido =  10;
            break;
		case 'L':
			convertido =  50;
            break;
		case 'C':
			convertido =  100;
            break;
		case 'D':
			convertido =  500;
            break;
		case 'M':
			convertido =  1000;
            break;
		default:
			convertido =  -1;
	    }

    return convertido;
}
