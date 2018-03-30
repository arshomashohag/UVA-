#include<bits/stdc++.h>

using namespace std;


int t, tim[30], ind[30], i, j, out, k, l, chk[30], temp;
vector<int> adj[30], inz;

char in[30], pod[28], src, des;
bool flag;



int main(void)
{
 scanf("%d", &t);
getchar();
 while(t--){
    getchar();

    for(i=0; i<30;i++){
        ind[i]=0;
        tim[i]=0;
        chk[i]=0;
        adj[i].clear();
    }

     while(scanf("%[^\n]", in) && strlen(in)){
            pod[0]='\0';

            sscanf(in,"%c%*c%d%*c%s",&src, &k, pod);
            getchar();
           l = strlen(pod);
           tim[src-'A'] = k;
           chk[src-'A']=1;

         for(i=0; i<l; i++){
            des = pod[i];
            adj[des-'A'].push_back(src-'A');

            ind[src-'A']++;

            chk[des-'A']=1;
         }
     }
   out=0;
   flag=true;

   while(flag){
        temp=-1;
         flag=false;

       for(i=0; i<26; i++){

        if(chk[i]==1 && ind[i]==0){
            flag=true;

            temp=max(temp, tim[i]);
            ind[i]=-1;

           inz.push_back(i);
        }

       }

        for(i=inz.size()-1;i>=0; i--){
            l = adj[inz[i]].size();
            for(j=0; j<l; j++){
                ind[adj[inz[i]][j]]--;
            }
        }
        inz.clear();

       if(flag)
        out+=temp;

   }

   printf("%d\n", out);
   if(t>0)
    printf("\n");

 }


    return 0;
}
