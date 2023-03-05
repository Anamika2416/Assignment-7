 //Co-prime
#include<stdio.h>
int main()
{
    int n1,n2,i,k=0,m=0;
    printf("Enter 2 numbers:");
    scanf("%d%d",&n1,&n2);
    if(((n2-n1)==2)||((n1-n2)==2))
    {
        for(i=1;i<=n1;i++)
        {
            if(n1%i==0)
                k++;
        }
        for(i=1;i<=n2;i++)
        {
            if(n2%i==0)
                m++;
        }
        if((k==2)&&(m==2))
            printf("%d and %d are co-prime numbers",n1,n2);
        else
            printf("%d and %d are not a co-prime numbers",n1,n2);
    }
    else
        printf("%d and %d are not a co-prime numbers",n1,n2);
    return 0;
}
