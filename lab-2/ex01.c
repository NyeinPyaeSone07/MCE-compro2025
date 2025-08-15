#include <stdio.h>
int main(){

    int num;
    float decimal;
    char a;

    printf("Please enter an integer value: ");
    scanf("%d", &num);

    printf("You entered %d\n", num);

    printf("Please enter an float value: ");
    scanf("%f", &decimal);

    printf("You entered %.1f\n", decimal);

    printf("Please enter a character: ");
    scanf(" %c", &a);

    printf("You entered: %c\n", a);

return 0;
}

	
