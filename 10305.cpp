#include<bits/stdc++.h>

using namespace std;

int  i, j, x, y , m, n, k, l;
vector<int> arr[102];
int ind[102];

int main(void)
{

while(scanf("%d%d",&n, &m) && (n||m)){

   memset(ind, 0, sizeof(ind));

    for(i=0; i<m; i++){
        scanf("%d%d", &x, &y);
         arr[x].push_back(y);
         ind[y]++;
    }

  for(i=1; i<=n; i++){
        k=0;

    for(j=1; j<=n; j++){
       if(ind[j]==0)
            {
                k=j;
                break;
            }

    }

    if(k!=0){
       l = arr[k].size();

       if(i>1)printf(" ");

       printf("%d", k);
       for(x=0; x<l; x++){
        ind[arr[k][x]]--;
       }
       ind[k]=-1;
    }
  }

  printf("\n");

  for(i=0; i<=n; i++){
    arr[i].clear();
  }

}


    return 0;
}
