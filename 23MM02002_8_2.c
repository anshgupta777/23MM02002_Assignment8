#include<stdio.h>
int main()
{
    printf("enter dimensions of first matrix\n");
    int r1,c1;
    scanf("%d",&r1);
    scanf("%d",&c1);
    int m1[r1][c1];
    int* ptr1=&m1[0][0];
    printf("Enter elements of first matrix\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",(ptr1+i*c1+j));
        }
    }

    printf("enter dimensions of second matrix\n");
    int r2,c2;
    scanf("%d",&r2);
    scanf("%d",&c2);
    int m2[r2][c2];
    int* ptr2=&m2[0][0];
    printf("Enter elements of second matrix\n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",(ptr2+i*c2+j));
        }
    }
    int prod[r1][c2];
    int* ptrProd=&prod[0][0];
    if(c1==r2)
    {
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                int sum=0;
                for(int k=0;k<c1;k++)
                {
                    //sum=sum+(m1[i][k]*m2[k][j]);
                    int a=*(ptr1+i*c1+k);
                    int b=*(ptr2+k*c2+j);
                    sum+=(a*b); // sum+=m1[i][k]*m2[k][j4]
                }
                printf("%d\n",sum);
                *(ptrProd+i*c2+j)=sum ;
            }
        }
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                printf("%d ",*(ptrProd+i*c2+j));
            }
            printf("\n");
        }

    }
    else
    {
        printf("multiplication can't be performed\n");
    }
}