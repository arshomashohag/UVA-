#include<bits/stdc++.h>
using namespace std;

int main(void){
char  judge[22], con[22];
int t, i, j, k, c=1, lj, lc;

scanf("%d",&t);
 while(t--){
    getchar();
    scanf("%[^\n]",con);

    getchar();
    scanf("%[^\n]",judge);


   printf("Case %d: ",c++);

   if(strcmp(judge,con)==0){
    printf("Yes\n");
   }

   else{
      lj = strlen(judge);
      lc = strlen(con);
      k=1;
      j=0;
      for(i=0; i<lj; i++)
        {
        while(j<lc && !isalpha(con[j]))
        {
            j++;
        }
        if(judge[i]!=con[j])
        {
           k=0;
           break;
        }
        j++;
      }

     if(k==1){
        printf("Output Format Error\n");
     }
     else
     {
         printf("Wrong Answer\n");
     }

   }


 }

}
