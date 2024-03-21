#include<stdio.h>
#include<string.h>
void main()
{
    printf("enter length of first string\n");
    int a1;
    scanf("%d",&a1);
    printf("Enter first string\n");
    char c1[a1+1];
    fflush(stdin);
    gets(c1);
    printf("enter length of second string\n");
    int a2;
    scanf("%d",&a2);
    printf("Enter second string\n");
    char c2[a2+1];
    fflush(stdin);
    gets(c2);
    int k1=0;
    char c3[a1+a2+1];
    char a;
    while(k1<=a1)
    {
        a= *(c1+k1);
        *(c3+k1)= a;
        k1++;
    }
    int t=k1;
    int k=0;
    while (t<=a1+a2)
    {
        a= *(c2+k);
        *(c3+t)= a;
        t++;
        k++;
    }
    for(int i=0;i<=(a1+a2);i++)
    {printf("%c",*(c3+i));}

}