#include<stdio.h>
#include<conio.h>
void accending_order_display(int a[],int n);
void frequency(int a[],int n);

int main()
{
    int a[20];
    int i,tem,j;
    printf("enter the frequency number:-");
    for(i=0;i<=19;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<=19;i++)
    {
        for(j=i+1;j<=19;j++)
        {
            if(a[i]>a[j])
            {
                tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }
    accending_order_display(a,20);
    frequency(a,20);
    getch();
}


void accending_order_display(int a[],int n)
{
    int i;
    printf("arrange in accending order:-\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void frequency(int a[],int n)
{
    int count=1,i=0,j;
    printf("frequency of your no:-\n");
    for(i;i<n;)
    {
            j=i+1;
            while(a[i]==a[j])
            {
                count++;
                j++;
            }
            printf("%d %d\n",a[i],count);
            i=j;
            count=1;
    }
}
