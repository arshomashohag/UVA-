#include<cstdio>
#include<iostream>
#include<cstring>
#include<cctype>
#include<utility>
#include<vector>
#include<map>
#include<string>
#include<algorithm>

#define LL long long int

using namespace std;

int n_of_player_a[102]={0},n_of_player_b[102]={0};
int i,j,t,num,cnt,minit,p_n;
char name_a[100],name_b[100],ch,team,card;

int main(void)
{
  scanf("%[^\n]",name_a);
  getchar();
  scanf("%[^\n]",name_b);



    scanf("%d",&num);
   while(num--)
   {
       scanf("%d %c %d %c",&t,&team,&p_n,&card);

       if(team=='h')
       {
        if(card=='y')
        {
            if(n_of_player_a[p_n]>=0)
              n_of_player_a[p_n]++;
            if(n_of_player_a[p_n]==2)
              {
                  printf("%s %d %d\n",name_a,p_n,t);
                   n_of_player_a[p_n]=-100;
              }
        }
        else if(card=='r' && n_of_player_a[p_n]!=-100 )
        {
                printf("%s %d %d\n",name_a,p_n,t);
                 n_of_player_a[p_n]=-100;
        }
       }
      else if(team=='a')
      {
          if(card=='y')
        {
            if(n_of_player_b[p_n]>=0)
              n_of_player_b[p_n]++;

             if(n_of_player_b[p_n]==2)
                 {
                     printf("%s %d %d\n",name_b,p_n,t);
                      n_of_player_b[p_n]=-100;
                 }

        }
        else if(card=='r' && n_of_player_b[p_n]!=-100)
        {
         printf("%s %d %d\n",name_b,p_n,t);
          n_of_player_b[p_n]=-100;
        }
      }
   }

    return 0;
}
