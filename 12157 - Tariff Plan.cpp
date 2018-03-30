#include<bits/stdc++.h>


using namespace std;

typedef  long long  lld;


int main(void)
{
 lld t, cn=1, in, n, i, j, out, c,  mile, juce;

 scanf("%lld",&t);

 while(t--)
 {
     scanf("%lld",&n);
     mile = 0;
     juce = 0;
     for(i=1; i<=n; i++)
     {
         scanf("%lld",&in);
         c=1;
         for(j=0; j<in; j++)
         {
           c++;
           if(c%30==0)
           {

             mile = mile+10;
           }
           if(c%60==0)
           {

               juce = juce+15;
           }

         }
         if(c%30)
            mile += 10;

         if(c%60)
            juce += 15;
     }

     printf("Case %lld: ",cn++);

     if(mile<juce)
     printf("Mile %lld\n",mile);
     else if(mile>juce)
        printf("Juice %lld\n",juce);
     else
        printf("Mile Juice %lld\n",juce);
 }

 return 0;
}
