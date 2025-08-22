#include <stdio.h>
int main(){

int num;
float myFloat;
char myChar;

printf("Please enter an interger value: ");
scanf("%d",& num);
printf("You entered %d\n",num);

printf("Please enter a float value: ");
scanf("%f",& myFloat);
printf("You entered %.1f\n",myFloat);

printf("Please enter a character: ");
scanf(" %c",& myChar);
printf("You entered %c\n", myChar);

return 0;

}