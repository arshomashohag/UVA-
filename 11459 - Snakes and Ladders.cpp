#include<cstdio>
#include<iostream>
#include<map>
#include<vector>
#include<cstring>
#define lld long long int

using namespace std;

lld t, a, b, c, i, j, k, p;
int die, pos;
bool flag;


int main(void)
{

  map< lld, lld > lad_snake;
  map< lld, lld >::iterator it;

  vector< int >  roll;

    scanf("%lld",&t);

    while(t--)
    {
       scanf("%lld%lld%lld",&a,&b,&c);
         roll.assign(a,1);

       for(i=1;i<=b;i++)
       {
           scanf("%lld%lld",&j,&k);
               lad_snake[j] = k;
       }


       flag = false;
       for(i=0; i<c; i++)
       {
         scanf("%d",&die);

         if(!flag)
         {

         p = i%a;
         pos = roll[p];

         pos = die + pos;

         if(pos>=100)
           {
               roll[p]=100;
               flag=true;
           }

         else
         {
           it = lad_snake.find(pos);

           if(it!=lad_snake.end())
           {
               roll[p]=it->second;
               if(roll[p]==100)
               {
                   flag=true;
               }
           }

           else
            roll[p]=pos;
         }

        }

       }

      for(i=1; i<=a; i++)
      {
          printf("Position of player %lld is %d.\n",i,roll[i-1]);
      }

      lad_snake.clear();
      roll.clear();
    }

    return 0;
}
