#include <stdio.h>

float calculator(float number1,float number2,char oprtr);

 int main(){
 	
	float first_Value1,second_Value2;
	char character;
	
	printf("Please Enter the Number1: ");    
	scanf("%f",&first_Value1);
	
	printf("Please Enter the Operator: ");    
	scanf(" %c", &character);
	
	printf("Please Enter the Number2: ");    
	scanf("%f",&second_Value2);
	
	printf("---> %f %c %f = %.4f",first_Value1,character,second_Value2,calculator(first_Value1,second_Value2,character));
	
	return 0;
 }
 
 float calculator(float number1,float number2,char oprtr){
 	switch(oprtr)
	 {
        case '+':
            return (number1 + number2);
            break;
        case '-':
            return (number1 - number2);
            break;
        case '/':
            return (number1 / number2);
            break;
        case '*':
            return (number1 * number2);
            break;
        default:
            printf("ERROR!!! You Entered Invalid Operator..");
    }
}
