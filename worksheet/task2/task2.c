/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name:Delalorm Kunutsor
 * ID: gmbp0709
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	
	printf("Enter a hexadecimal:");
	scanf("%s", hex);
	for(int character = 0; character < strlen(hex); character++){

		if( (sizeof(hex) / sizeof(hex[0])) > 8 ){
			printf("Error: Invalid Hexadecimal\n");
			break;
		}


	}

	

	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}