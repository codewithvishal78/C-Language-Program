#include<stdio.h>
#include<conio.h>
int main()
{
    float p,r,t,SI;
    printf("Enter principle amount\n");
    scanf("%f",&p);
    printf("Enter rate of principle\n");
    scanf("%f",&r);
    printf("Enter time of principle\n");
    scanf("%f",&t);
    SI=p*r*t/100;
    printf("%f",SI);
    getch();
}
