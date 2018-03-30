#include<bits/stdc++.h>

using namespace std;

int t, n, i, j, x, r, u, v,  w,  y, par[1000000], rnk[1000000];
char in[100], c;


int fin(int a){
if(par[a]==a)
    return a;
return (par[a]=fin(par[a]));
}


int main(void)
{
 scanf("%d",&t);

 while(t--){
    scanf("%d",&n);

    for(i=1;i<=n; i++){
        par[i]=i;
        rnk[i]=0;
    }
    getchar();
     r=0;
     w=0;

     while(gets(in) && strlen(in)){
         sscanf(in,"%c%*c%d%*c%d",&c,&x,&y);

          u = fin(x);
          v = fin(y);


          if(c=='q'){
            if(u==v)
                r++;
            else
                w++;
          }

          else {
             if(u!=v){
                if(rnk[u]<rnk[v])
                    par[u]=v;
                else{
                    par[v] = u;
                    if(rnk[u]==rnk[v])
                        rnk[u]++;
                }
             }
          }

     }

     printf("%d,%d\n", r, w);
     if(t>0)
        printf("\n");

 }



    return 0;
}
