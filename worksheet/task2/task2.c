/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name:Delalorm Kunutsor
 * ID: gmbp0709
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h> 

int main(void){
	int decimal=0;
	char hex[9];
	
	
	
	
	printf("Enter a hexadecimal: ");
	scanf("%s", hex);

	if(strlen(hex) > 8){

		printf("Error: Invalid Hexadecimal\n");

	}else{

		int raise = strlen(hex)-1;

		//loop thru evry charecter
		for(int i =0; i < strlen(hex); ++i){

			
			
			int power = (int)pow(16, raise);
				

				
			// match-case series
			switch (tolower(hex[i])) {
				case '0':
					decimal = decimal + (power * 0);
					break;
				case '1':
					decimal = decimal + (power * 1);
					break;
				case '2':
					decimal = decimal + (power * 2);
					break;
				case '3':
					decimal = decimal + (power * 3);
					break;
				case '4':
					decimal = decimal + (power * 4);
					break;
				case '5':
					decimal = decimal + (power * 5);
					break;
				case '6':
					decimal = decimal + (power * 6);
					break;
				case '7':
					decimal = decimal + (power * 7);
					break;
				case '8':
					decimal = decimal + (power * 8);
					break;
				case '9':
					decimal = decimal + (power * 9);
					break;
				case 'a':
					decimal = decimal + (power * 10);
					break;
				case 'b':
					decimal = decimal + (power * 11);
					break;
				case 'c':
					decimal = decimal + (power * 12);
					break;
				case 'd':
					decimal = decimal + (power * 13);
					break;
				case 'e':
					decimal = decimal + (power * 14);
					break;
				case 'f':
					decimal = decimal + (power * 15);
					break;
				default:
            		printf("Error: Invalid Hexadecimal\n");
            		break;
				
				}

			raise -=1;
			//printf("decimal:%d\n\n", decimal);
		}
		printf("decimal:%u\n", decimal);
	

		// print the decimal result
		//printf("decimal:%ld\n", decimal);
	}

	
	

	

	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	
	
	// print the decimal result
	//printf("decimal:%ld\n", decimal);
	
	return 0;
}