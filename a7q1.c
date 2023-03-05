//nth term of fibonacci
#include<stdio.h>
int main()
{
    long long int n,f1=1,f2=1,f3;
    printf("Enter the term number:");
    scanf("%lld",&n);
    if(n==1)
        printf("\nFirst term is %lld",f1);
    else if(n==2)
        printf("\nSecond term is %lld",f2);
    else
    {
      for(int i=3;i<=n;i++)
      {
         f3=f1+f2;
         f1=f2;
         f2=f3;
         printf("%lld\t",f3);
      }
      printf("\n%ldth term is %lld",n,f3);
    }

return 0;
}
