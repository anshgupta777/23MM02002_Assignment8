#include <stdio.h>

void func(int *a,int *b, int *c)
{
    int temp=*a;
    *a=*c;
    *c=*b;
    *b=temp;

}


void main()
{
    int x,y,z;

    printf("Enter the values of x,y and z: \n");

    scanf("%d%d%d", &x,&y,&z);

    func(&x,&y,&z);

    printf("x=%d\ty=%d\tz=%d",x,y,z);


}