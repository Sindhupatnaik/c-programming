#include<stdio.h>
int main(){
float number1,number2;
char operator;
printf("enter the number1:");
scanf("%f", &number1);
printf("enter the number2:");
scanf("%f", &number2);
printf("enter the operator:");
scanf("\n%c", & operator);
if(operator=='+'){
printf("sum%f" ,number1, number2);}
else if(operator=='-'){
printf("difference%f" ,number1, number2);
}
else {
printf("please enter valid input");
return 0;
}
}
