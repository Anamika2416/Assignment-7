
//Armstrong number
#include<stdio.h>
#include<math.h>
int main()
{
    int i=1,rem,y,temp,sum=0,c=0;
    printf("Armstrong Number below 1000 are:-\n");
    while(i<=1000)
    {
      temp=i;
    while(temp!=0)
    {
        temp=temp/10;
        c++;
    }
    y=i;
    while(y!=0)
    {
        rem=y%10;
        y=y/10;
        sum=sum+pow(rem,c);

    }
    if(sum==i)
        printf("%d ",i);
    c=0;
    i++;
    sum=0;
    }
    return 0;

}

