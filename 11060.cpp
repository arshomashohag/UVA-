
#include<bits/stdc++.h>

using namespace std;

int  i, j, x, y , m, n, k, l, cn=1;
vector<int> arr[102];
int ind[102];

map<string, int> myM;
string input[104];
string in, in1;



int main(void)
{

while(scanf("%d",&n)==1){
ind[0]=0;
input[0]="";

for(i=1; i<=n;  i++){
    cin>>in;
    myM.insert(make_pair(in, i));
    input[i]=in;
    ind[i]=0;
}

cin>>m;

    for(i=0; i<m; i++){
        cin>>in>>in1;
         x = myM[in];
         y = myM[in1];
         arr[x].push_back(y);
         ind[y]++;
    }


  printf("Case #%d: Dilbert should drink beverages in this order: ",cn++);

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

        cout<<input[k];

       for(x=0; x<l; x++){
        ind[arr[k][x]]--;
       }
       ind[k]=-1;
    }
  }

  printf(".\n");

  for(i=0; i<=n; i++){
    arr[i].clear();
  }
  myM.clear();
  printf("\n");

}


    return 0;
}
