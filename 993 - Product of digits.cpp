#include<bits/stdc++.h>
#define lld long long int

using namespace std;

int main(void)
{
   lld in, t, i, j;
   list<int> out;
   list<int>::iterator itb, ite;

scanf("%lld",&t);
   while(t--)
   {
        scanf("%lld",&in);

        if(in>1)
        {

        for(i=9; i>1; i--)
        {
          while(in>1 && in%i==0)
          {
              out.push_front(i);
              in /= i;
          }

        }

        }
      else
        out.push_front(1);




        if(in>1)
            printf("-1\n");
        else
          {
           ite = out.end();
           for(itb = out.begin(); itb!=ite; itb++)
           {
               printf("%d",*itb);

           }
           printf("\n");
          }
       out.clear();

   }

    return 0;
}
