#include <stdio.h>

int main() {


  float point;
  char name[20];
  printf ("Enter your name  :");
  scanf ("%[^\n]",name);
  printf("Enter your point :");
  scanf ("%f",&point);

  printf ("Name :%s\nPOint :%f\n",name,point);

    return 0;
}