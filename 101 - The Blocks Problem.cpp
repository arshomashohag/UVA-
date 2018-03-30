#include<cstdio>
#include<utility>
#include<iostream>
#include<cstring>
#define lld long long int
using namespace std;

lld n,i,j,k,a1,a2;
char s[20],s1[10],s2[10];

 int pos[26][3];
 int cur[27][27];
 int size_ar[27]={1};

 void move_a_onto_b(lld a, lld b)
 {
   int pres_pos,prev_pos,i,j,temp,pres_pos_b;
   pres_pos=pos[a-1][0];
   pos[a-1][1]=pres_pos;
   pres_pos_b=pos[b-1][0];
   i=size_ar[pres_pos_p];
   j=size_ar[pres_pos]
   while()
 }

int main(void)
{
  scanf("%lld",&n);
  for(i=0;i<n;i++)
   {
     pos[i][0]=i+1;
     pos[i][1]=i+1;
   }

  getchar();
  while(scanf("%[^\n]",s) && strcmp(s,"quit"))
  {
    sscanf(s,"%s %lld %s %lld",s1,&a1,s2,&a2);


     if(!strcmp(s1,"move") && !strcmp(s2,"onto"))
       move_a_onto_b(a1,a2);
     else if(!strcmp(s1,"move") && !strcmp(s2,"over"))
        move_a_over_b(a1,a2);
     else if(!strcmp(s1,"pile") && !strcmp(s2,"onto"))
        pile_a_onto_b(a1,a2);
    else if(!strcmp(s1,"pile") && !strcmp(s2,"over"))
        pile_a_over_b(a1,a2);

    getchar();
  }

return 0;
}
