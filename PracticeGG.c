#include<stdio.h>
#include<math.h>

int main()
{
    int c,f,d;
    enan:
    system("cls");
    printf("Input the temperature in C :\n");
    scanf("%d",&c);

    f=((c*9)/5)+32;

    printf("\nTemperature in Farenheit is %d \n",f);

    printf("\nAre you done?\n\nIf you are, press [0] or press [1] to continue :\n\n");
    scanf("%d",&d);
    if(d==1)
    {
        goto enan;
    }
    else{printf("Thanks for using my program");}
    getch();
}
