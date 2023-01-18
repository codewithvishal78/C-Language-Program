#include<stdio.h>
#include<conio.h>
int main()
{
    char str[100];
    int i;
    printf("enter the string name:-");
    gets(str);
    //printf("%s",str);
    for(i=0;str[i]!='\0';i++);
    //i=strlen(str);
    printf("toal charactor %d",i);
    getch();
}
