#include<stdio.h>

void rev(int *p,int size)
{

    int i,temp,c=0;

    for(i=0;i<size/2;i++)
    {
        temp=*(p+i);
        *(p+i)=*(p+size-i-1);
        *(p+size-i-1)=temp;


    }

}




void main()
{

    int n,i;

    printf("Enter the size of the Array:\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the Array elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Original Array:\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    
    rev(arr,n);
    
    printf("Reversed Array:\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}