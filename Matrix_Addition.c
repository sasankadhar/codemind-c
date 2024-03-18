#include<stdio.h>
int main(){
    int i,j,a,b,c,d;
    int s[100][100];
    scanf("%d%d",&a,&b);
    int arr1[a][b];
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
        scanf("%d",&arr1[i][j]);
        }
    }
    scanf("%d %d",&c,&d);
    int arr2[c][d];
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
        scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            s[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
        printf("%d ",s[i][j]);
        }
     printf("
");
}
}