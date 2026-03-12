#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h> 



int main(void){

    char hex[] = "1A3";
    int decimal=0;
    

    printf("hex: '%s'\n\n", hex);

    for(int i = 0; i > strlen(hex); ++i){
        printf("iteration: %d\n", i );

        int raise = strlen(hex) - i;
        int power = pow(16, raise);
        //printf("power: 16^%d, (%d)\n", i, power);

        printf("hex[%d]: %c\n\n", i, hex[i]);
        

        // match-case series
        switch (hex[i]) {
            case '0':
                decimal = decimal + (power * 0);
                printf("decimal so far: %d\n\n", decimal);
                break;
            case '1':
                decimal = decimal + (power * 1);
                printf("decimal so far: %d\n\n", decimal);
                break;
            case '2':
                decimal = decimal + (power * 2);
                printf("decimal so far: %d\n\n", decimal);
                break;
            case '3':
                decimal = decimal + (power * 3);
                printf("decimal so far: %d\n\n", decimal);
                break;
            case '4':
                decimal = decimal + (power * 4);
                printf("decimal so far: %d\n\n", decimal);
                break;
            case '5':
                decimal = decimal + (power * 5);
                printf("decimal so far: %d\n\n", decimal);
                break;
            case '6':
                decimal = decimal + (power * 6);
                printf("decimal so far: %d\n\n", decimal);
                break;
            case '7':
                decimal = decimal + (power * 7);
                printf("decimal so far: %d\n\n", decimal);
                break;
            case '8':
                decimal = decimal + (power * 8);
                printf("decimal so far: %d\n\n", decimal);
                break;
            case '9':
                decimal = decimal + (power * 9);
                printf("decimal so far: %d\n\n", decimal);
                break;
            case 'a':
            case 'A':
                decimal = decimal + (power * 10);
                printf("decimal so far: %d\n\n", decimal);
                break;
            case 'b':
            case 'B':
                decimal = decimal + (power * 11);
                printf("decimal so far: %d\n\n", decimal);
                break;
            case 'c':
            case 'C':
                decimal = decimal + (power * 12);
                printf("decimal so far: %d\n\n", decimal);
                break;
            case 'd':
            case 'D':
                decimal = decimal + (power * 13);
                printf("decimal so far: %d\n\n", decimal);
                break;
            case 'e':
            case 'E':
                decimal = decimal + (power * 14);
                printf("decimal so far: %d\n\n", decimal);
                break;
            case 'f':
            case 'F':
                decimal = decimal + (power * 15);
                printf("decimal so far: %d\n\n", decimal);
                break;
            default:
                printf("Error: Invalid Hexadecimal\n");
            	break;
        }
        


    }
    printf("decimal: %d\n", decimal);

    return 0;
}