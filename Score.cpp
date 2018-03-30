#include<bits/stdc++.h>
#define lld long long int

using namespace std;

class res{
    public:
int c, sp, pen, pra[12];

 bool operator<(const res& par)const{
    if(sp<par.sp)
        return true;
    if(sp==par.sp && pen>par.pen)
    {
        return true;
    }
    if(sp==par.sp && pen==par.pen)
    {
        return c>par.c;
    }
    return false;

 }


}nd;


map<int, res> v;
map<int, res>::iterator its, ite;

priority_queue<res> vc;


int t, n, i, j, k, out, p, sp, c, tim;
char in[120], car;

int main(void)
{
scanf("%d", &t);
 getchar();

while(t--){
getchar();

  while(scanf("%[^\n]",in)){
    getchar();
    if(strlen(in)==0)
        break;

    sscanf(in, "%d%*c%d%*c%d%*c%c",&c, &p, &tim, &car);


    if(car=='I'){
       if(v.find(c)!=v.end()){
        v[c].pra[p]++;
       }
       else{
            nd.pen = 0;
            nd.c = c;
            memset(nd.pra, 0, sizeof(nd.pra));
            nd.pra[p] = 1;
            nd.sp = 0;
            v.insert(make_pair(c, nd));
       }
    }
   else if(car=='C'){
      if(v.find(c)!=v.end()){
         nd = v[c];
         if(nd.pra[p]>=0)
         {
         nd.pen += tim + (20*nd.pra[p]);
         nd.sp++;
         nd.pra[p]=-1;
         }

         v[c]=nd;
       }

       else{
         nd.pen = tim;
         nd.sp++;
         nd.pra[p]=-1;
         nd.c = c;

         v.insert(make_pair(c, nd));
       }

   }

  }

its=v.begin();
ite=v.end();

 while(its!=ite){
    vc.push(its->second);
    v.erase(its);
     its++;
 }

 while(!vc.empty()){
        nd=vc.top();
      vc.pop();
    printf("%d %d %d\n",nd.c, nd.sp, nd.pen);
}

if(t>0)
     printf("\n");
}

    return 0;
}
