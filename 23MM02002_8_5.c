#include<stdio.h>

void circularRotate(int N,int m,int n,int arr[][n]){
    if(N==0){
        return;
    }
    switch(N%4){
        case 1:
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    printf("%d ",((arr+m-1-j)+i));
                }
                printf("\n");
            }
            break;
        case 2:
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    printf("%d ",((arr+m-1-i)+n-1-j));
                }
                printf("\n");
            }
            break;
        case 3:
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    printf("%d ",((arr+j)+n-1-i));
                }
                printf("\n");
            }
            break;
        default :
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    printf("%d ",((arr+i)+j));
                }
                printf("\n");
            }
            break;
    }
}

int main(){

    int m,n;
    printf("Number of rows and columns: ");
    scanf("%d%d",&m,&n);

    int a[m][n];

    printf("Enter the matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",(*(a+i)+j));
        }
    }

    int N;
    int (*parr)[n];
    parr=a;

    printf("How many times you want to rotate? : ");
    scanf("%d",&N);

    circularRotate(N,m,n,parr);

return 0;
}