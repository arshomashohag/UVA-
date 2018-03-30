
#include<bits/stdc++.h>
#define lld long long int

using namespace std;

class res{
    public:
int c, sp, pen;

 bool operator<(const res& par)const{
    if(sp>par.sp)
        return true;
    if(sp==par.sp && pen<par.pen)
    {
        return true;
    }
    if(sp==par.sp && pen==par.pen)
    {
        return c<par.c;
    }
    return false;

 }


}nd;

int spa[104], inc[104][12], pen[104], cnt[104];

priority_queue<res> vc;
vector<res> v;


int t, n, i, j, k, out, p, sp, c, tim;
char in[120], car;

int main(void)
{
scanf("%d", &t);
getchar();

while(t--){
getchar();

  for(i=0; i<103; i++){
    spa[i]=0;
    pen[i]=0;
    cnt[i]=0;
    for(j=0; j<11; j++){
        inc[i][j]=0;
    }
  }
  while(scanf("%[^\n]",in)){
    getchar();
    if(strlen(in)==0)
        break;

    sscanf(in, "%d%*c%d%*c%d%*c%c",&c, &p, &tim, &car);
    cnt[c]=1;

    if(car=='I'){
          inc[c][p]++;
       }

       else if(car=='C'){
       pen[c]+= tim+ 20*inc[c][p];
       spa[c]++;
      }
  }


for(i=1; i<=100; i++){
    if(cnt[i]==1){
        nd.c = i;
        nd.sp = spa[i];
        nd.pen = pen[i];
      //vc.push(nd);
      v.push_back(nd);
    }
}
sort(v.begin(), v.end());


 /*while(!vc.empty()){
        nd=vc.top();
      vc.pop();
    printf("%d %d %d\n",nd.c, nd.sp, nd.pen);
}*/

i=0;
j=v.size();

while(i<j){
    nd = v[i];
    printf("%d %d %d\n",nd.c, nd.sp, nd.pen);
    i++;
}
v.clear();

if(t>0)
     printf("\n");
}

    return 0;
}
