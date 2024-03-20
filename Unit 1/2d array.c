#include<stdio.h>
int main()
{
    int i,j,k,c=3,d=3;
    int a[c][d],b[c][d],mul[c][d];
        for(i=0;i<c;i++)
        {
            for(j=0;j<d;j++)
            {
                printf("enter the value of a%d%d :",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
        }
        
        for(i=0;i<c;i++)
        {
            for(j=0;j<d;j++)
            {
                printf("enter the value of b%d%d :",i+1,j+1);
                scanf("%d",&b[i][j]);
            }
        }

    for(i=0;i<c;i++)
    {
        for(j=0;j<d;j++)
        {
            mul[i][j] = 0;
            for(k=0;k<d;k++)
             mul[i][j] +=a[i][k]*b[i][j];
            printf("%d ",mul[i][j]);
        }
       printf("\n");
        
    }
}