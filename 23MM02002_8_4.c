 #include<stdio.h>

int Count(int *p,int n)
{
    int a,b;
     for(int i=0;i<n;i++)
    {
        
        for(int j=i+1;j<=n;j++)
        {
            a= *(p+i);
            b= *(p+j);
            if(a==b)
            {
                printf("The element that is repeated is %d",a);
                return 0;
            }
        }
    }


}

int main()
{
    printf("Enter number of elements in array\n");
    int n;
    scanf("%d",&n);
    int nums[n+1];
    printf("Enter elements of array\n");
    for(int i=1;i<=n;i++)
    {
        nums[i-1]=i;
    }
    printf("Enter the last integer in the range[1,%d]:\n",n);
    scanf("%d",&nums[n]);

    int last= *(nums+n);
    
    if ( last>=1 && last<=n)
    Count(&nums[0],n);
   
}