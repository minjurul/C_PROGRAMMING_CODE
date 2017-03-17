#include<stdio.h>
int main()
{
    int cho;
    float c,f;

    printf("\n\tChoice 1 to convert Fahrenheit to Celsius\n");
    printf("\tChoice 2 to convert Celsius to Fahrenheit\n");
    printf("\tEnter your choice(1 or 2):");
    scanf("%d",&cho);
    if(cho==1){
        printf("\n\tEnter the Fahrenheit temperature:");
        scanf("%f",&f);
        c=(f-32)/1.8;
        printf("\n\tTemperature in Celsius:%.2f\n",c);
    }
    else if(cho==2){
       printf("\n\tEnter the Celsius  temperature:");
       scanf("%f",&c);
       f=(c*1.8)+32;
       printf("\n\tTemperature in Fahrenheit:%.2f",f);
    }
    else{
        printf("\tInvalid Choice !!!");
    }
    return 0;
}
