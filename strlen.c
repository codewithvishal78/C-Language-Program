#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;

    printf("enter the string name:-");
    gets(str);
   // for(i=0;str[i]!='\0';i++);
    //i=strlen(str);
    char* k=strrev(str);
    printf("%s",k);
    getch();
}
