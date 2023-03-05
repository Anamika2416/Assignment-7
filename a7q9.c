//Armstrong number
#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,temp,y,sum=0,c=0;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        c++;
        temp/=10;
    }
    y=n;
    while(y!=0)
    {
        rem=y%10;
        sum=sum+pow(rem,c);
        y/=10;
    }
    if(n==sum)
        printf("\n%d is armstrong.\n",n);
    else
        printf("\n%d is not an armstrong.\n",n);
}
