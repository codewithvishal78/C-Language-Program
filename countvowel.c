#include<stdio.h>
#include<conio.h>
#include<string.h>
int vowelcount(char str[],int i);
void main()
{
    char str[100];
    char i;
    gets(str);
    i=strlen(str);
    printf("no of charactor is %d\n",i);
    vowelcount(str,i);
  //   printf("%s",str);i=strlen(str);
  /*  for(i=1;i<=6;i++)
    {
        if(str[i]=='a' || str[i]=='i' || str[i]=='e' || str[i]=='o' || str[i]=='u')
        {
            count++;
        }
    }
    printf("%d",count);
    */
    getch();
}



int vowelcount(char str[],int i)
{
    int j,count=0;
    for(j=0;j<i;j++)
    {
        if(str[j]=='a' || str[j]=='i' || str[j]=='e' || str[j]=='o' || str[j]=='u')
        {
                    count++;
        }
    }
    printf(" total vowel no is %d",count);
}
