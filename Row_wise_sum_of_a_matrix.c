#include<stdio.h>
int main()
{
    int r,c,i,j,s;
    scanf("%d",&r);
    scanf("%d",&c);
    int arr[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
for(i=0;i<r;i++){
    int s=0;
        for(j=0;j<c;j++)
        {
            s=s+arr[i][j];
        }
        printf("%d ",s);
    }
}