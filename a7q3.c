//Number is present in fibbonacci series
#include<stdio.h>
int main()
{
   long int n,f1=1,f2=1,f3,k=0;
    printf("Enter Number:");
    scanf("%d",&n);
    if((f1==n)||(f2==n))
       {
            printf("Number found");
            k++;
       }
    else
    {
     for(;f3<=n;)
    {
        f3=f1+f2;
        if(f3==n)
        {
             printf("Number found");
             k++;
             break;
        }

        else
        {
          f1=f2;
          f2=f3;
        }

    }
    }
    if(k==0)
    printf("Number not found");

    return 0;
}
