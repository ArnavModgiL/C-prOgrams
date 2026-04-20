// power (base,exp) code  by recursion:
#include<stdio.h>

long power(int base,int exp){
    if( exp < 0) return -1;
    if(exp == 0) return 1;

    int half = power(base,exp/2);

    // for odd power:
    if(exp % 2 == 0){
        return half * half;
    }
    else {
        return base * half * half;
    }
    return 0;
}

    int main()
{
   int T, base, exp;
   printf("Enter the number: ");
   scanf("%d",&T);
   while(T--)
   {
      scanf("%d",&base);
      scanf("%d",&exp);
     
     printf("%ld\n", power(base, exp));
   }
    return 0;
}
