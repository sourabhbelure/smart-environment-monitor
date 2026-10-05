#include<stdio.h>
int main(void){
int temperature = 27;
int humidity =62;

printf("==== smart Environmental Monitor ====\n\n");
printf("Temperature : %d C\n",temperature);
printf("Humidity: %d %%\n\n",humidity);
printf("Temperature Status: NORMAL\n");
printf("Humidity Status: NORMAL\n");
printf("overall Status: NORMAL\n");

temperature=38;
humidity=75;

printf("==== smart Environmental Monitor ====\n\n");
printf("Temperature : %d C\n",temperature);
printf("Humidity: %d %%\n\n",humidity);
printf("Temperature Status: WARNING\n");
printf("Humidity Status: NORMAL\n");
printf("overall Status: WARNING\n");

return 0;
}
