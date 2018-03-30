#include<bits/stdc++.h>

using namespace std;

int t, cn=1, f, s, th, i, j, in, fa[10004], sa[10003], tha[10002], mx, l, hst;
int sf, ss, sth;

vector<int>a, b, c;


int main(void)
{
    scanf("%d", &t);
    for(i=0; i<10002; i++){
        fa[i]=0;
        sa[i]=0;
        tha[i]=0;
    }
    while(t--)
    {


    a.clear();
    b.clear();
    c.clear();
   hst=0;

      scanf("%d", &i);
      for(j=0; j<i; j++){
        scanf("%d",&in);
        if(hst<in)
            hst=in;

        fa[in]=1;
      }

      scanf("%d", &i);
      for(j=0; j<i; j++){
        scanf("%d",&in);
          if(hst<in)
            hst=in;

        sa[in]=1;
      }


      scanf("%d", &i);
      for(j=0; j<i; j++){
        scanf("%d",&in);
          if(hst<in)
            hst=in;

        tha[in]=1;
      }

     sf=0;
     ss=0;
     sth=0;
      for(i=0; i<=hst; i++){

        if(fa[i]==1 && sa[i]==0 && tha[i]==0){
          sf++;

          a.push_back(i);
        }
        else if(fa[i]==0 && sa[i]==1 && tha[i]==0)
        {
            ss++;

            b.push_back(i);
        }
        else if(fa[i]==0 && sa[i]==0 && tha[i]==1){
            sth++;

            c.push_back(i);
        }

       tha[i]=0;
        sa[i]=0;
        fa[i]=0;
      }

      mx = max(sf, max(ss, sth));
      printf("Case #%d:\n", cn++);

      if(sf==mx){
        l=a.size();
        printf("1 %d", sf);
        for(i=0; i<l; i++){
            printf(" %d", a[i]);
        }
        printf("\n");
      }


      if(ss==mx){
        l=b.size();
        printf("2 %d", ss);
        for(i=0; i<l; i++){
            printf(" %d", b[i]);
        }
        printf("\n");
      }

      if(sth==mx){
        l=c.size();
        printf("3 %d", sth);
        for(i=0; i<l; i++){
            printf(" %d", c[i]);
        }
        printf("\n");
      }

    }


    return 0;
}
