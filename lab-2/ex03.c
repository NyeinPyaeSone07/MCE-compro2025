#include <stdio.h>
int main(){

char name[50];
int age,weight;
float height;
char gender,education[100];


printf ("Enter your name: ");
scanf("%s", name);

printf ("Enter your age: ");
scanf("%d",& age);

printf ("Enter your height: ");
scanf("%f",& height);

printf ("Enter your weight: ");
scanf("%d",& weight);

printf("Enter your gender: ");
scanf(" %c", & gender);

printf("Enter your education: ");
scanf ("%s", education);

printf("\nName: %s\nAge: %d\nGender: %c\nHeight: %.1f\nWeight: %d\nEducation: %s\n",name,age,gender,height,weight,education);

return 0;

}