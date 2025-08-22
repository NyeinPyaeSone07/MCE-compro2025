#include <stdio.h>
int main() {

int totalMinutes;
int minute;
int hour;


printf("Enter total minutes:");
scanf("%d",& totalMinutes);

hour=totalMinutes/60;
minute=totalMinutes%60;

printf("%d minutes is %d hour(s) and %d minute(s)",totalMinutes,hour,minute);

return 0;


}