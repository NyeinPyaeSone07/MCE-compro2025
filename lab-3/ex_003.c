#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

  switch(num)

  { case 1: (num%2==0);
    printf("%d is even\n",num);
    break;

    case 2: (num>100);
    printf("%d is out of range\n",num);
    break;

    case 3: (num%2!=0);
    printf("%d is odd\n",num);
    break;



  }

    return 0;
}