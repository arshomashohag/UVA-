#include<bits/stdc++.h>

#define lld long long int

using namespace std;
lld n, i, j, out, c, cost;

class num{
public:
    lld n;

    bool operator <(const num& p)const{
    return n>p.n;
    }
}nd;
priority_queue<num> pq;

int main(void)
{

  while(scanf("%lld",&n) && n)
  {

      for(i=0; i<n; i++)
        {
            scanf("%lld",&j);
            nd.n = j;
            pq.push(nd);
        }
       out=0;
      while(pq.size()>=2){
        nd=pq.top();
        pq.pop();
        i=nd.n;

        nd=pq.top();
        pq.pop();
        j=nd.n;

        out+=j+i;
        nd.n = i+j;
        pq.push(nd);
      }

      printf("%lld\n", out);
      pq.pop();
  }


    return 0;
}
