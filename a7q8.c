//find next prime number of given number
#include<stdio.h>
int main()
{
    int n,i,j,flag=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=n+1;n!=0;i++)
    {
        for(j=2;j*j<=i;j++)
        {

           if(i%j==0)
            flag++;
        }
        if(flag==0)
        {

            break;
        }
        flag=0;


    }
    printf("Next prime number is %d",i);
    return 0;
}
