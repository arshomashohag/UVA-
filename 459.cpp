#include<bits/stdc++.h>

using namespace std;

int t, res, i, j, x, y, h, u,dif, v, par[30], rnk[30];
char c, ca, cb, in[4];


int fin(int a){
if(par[a]==a)
    return a;
return (par[a]=fin(par[a]));
}

int main(void)
{
  scanf("%d", &t);
  getchar();
   getchar();
  while(t--){

   scanf("%c",&c);

  getchar();

 for(i=0; i<=26; i++){
    par[i]=i;
    rnk[i]=0;

 }

   dif = c-64;

  while(gets(in) && strlen(in)){

     x = in[0]-64;
     y = in[1]-64;

     u = fin(x);
     v = fin(y);


    if(u!=v)
    {
        if(rnk[u]<rnk[v])
            par[u]=v;
        else{
            par[v]=u;
            if(rnk[u]==rnk[v])
                rnk[u]++;
        }
         dif--;
    }

  }


printf("%d\n",dif);

if(t>0)
    printf("\n");

  }

    return 0;
}
