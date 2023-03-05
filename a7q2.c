//Fibonacci series upto n terms
#include<stdio.h>
int main()
{
    int n;
    long int f3,f1=1,f2=1;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("%d  %d  ",f1,f2);
   for(int i=1;i<=n;i++)
      {
         f3=f1+f2;
         f1=f2;
         f2=f3;
         printf("%ld  ",f3);
      }

return 0;
}
