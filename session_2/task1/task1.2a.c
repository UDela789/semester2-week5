//Week 5, Session 2

# include <stdio.h>
# include <string.h>

int main(void){
/* Task 1.2a
 * Complete the following while loop in C to ask user input for a password 
 * until 'secure123' is entered.
 */
     char password[50];
	 
	 // compare using strcmp(str1,str2) from week 4
	 // complete the rest of the code here

     printf("Enter Password: ")
     scanf("%s", password)
     char correct_password[10] = 'secure123'

     while(password != correct_password){
        printf("Enter Password: ")
        scanf("%s", password)
     }
	
    return 0;
}