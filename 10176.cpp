#include<bits/stdc++.h>
#define M 131071
using namespace std;

string in[10003];
vector<int> len;
int i, j, k, out, l, t, p, tem, r;


int MOD(int b, int p){
if(p==0)
    return 1;
if(p%2==0){
    int r = MOD(b, p/2);
    return (r*r)%M;
}
return (b*MOD(b, p-1));

}

int main(void)
{

while(cin>>in[0] && (l=in[0].size())>0){
        len.push_back(l);
      i=0;

    //printf("%d\n", l);

    while(in[i][l-1]!='#'){
            i++;
        cin>>in[i];
        l=in[i].size();
        //printf("%d\n", l);
      len.push_back(l);
    }

   t=0;
   out=0;

   for(j=i; j>=0; j--){
    l=len[j];
    if(j==i && l>=2)
        l-=2;
    else
        l-=1;

    for(k=l; k>=0; k--)
    {
     if(in[j][k]=='1')
     {
         r = MOD(2, t);
        out = (out+r)%M;
        //printf("%d\n", out);
     }
     t++;

    }

   }
   len.clear();

   if(out==0){
    printf("YES\n");
    }
    else{
        printf("NO\n");
    }

}


    return 0;
}
