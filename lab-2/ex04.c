#include <stdio.h>
int main(){

char name[50];
int id;
float proScore,phyScore,calScore,GPA;

printf("Enter your name: ");
scanf("%s",name);

printf("Enter your student ID: ");
scanf("%d", &id);

printf("Enter your Programming score: ");
scanf("%f", &proScore);

printf("Enter your Physics score: ");
scanf("%f", &phyScore);

printf("Enter your Calculus score: ");
scanf("%f", &calScore);

GPA=(proScore+phyScore+calScore)/3;

printf("Hi %s(%d)! Your GPA is %.2f\n",name,id,GPA);

return 0;

}