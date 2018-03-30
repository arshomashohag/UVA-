#include<bits/stdc++.h>

using namespace std;

int main(void)
{
vector<int> pr1, pr2;
vector<int> ar[10];
ar[2].push_back(2);
ar[3].push_back(3);
ar[4].push_back(2);
ar[4].push_back(2);
ar[5].push_back(5);
ar[6].push_back(2);
ar[6].push_back(3);
ar[7].push_back(7);
ar[8].push_back(2);
ar[8].push_back(2);
ar[8].push_back(2);
ar[9].push_back(3);
ar[9].push_back(3);

int n1, n2, i, j, p, out, in, l, k, s1, s2;
bool chk;

while(scanf("%d%d",&n1,&n2) && (n1||n2))
{
pr1.clear();
pr2.clear();
s1=0;
s2=0;
  for(i=0; i<n1; i++)
  {
      scanf("%d",&in);
       for(k=2; k<=in; k++)
       {
         l = ar[k].size();
         for(j=0; j<l; j++)
            {
                pr1.push_back(ar[k][j]);
                s1++;
            }
       }
  }

  for(i=0; i<n2; i++)
  {
      scanf("%d",&in);
      for(k=2; k<=in; k++)
       {
         l = ar[k].size();
         for(j=0; j<l; j++)
            {
                pr2.push_back(ar[k][j]);
                s2++;
            }
       }
  }

  chk = true;
  if(s1!=s2)
  {
   chk = false;
  }
  else{
   sort(pr1.begin(), pr1.end());
   sort(pr2.begin(), pr2.end());

  for(i=0; i<s1; i++)
  {
      if(pr1[i]!=pr2[i])
      {
          chk = false;
          break;
      }
  }

  }

  if(chk)
    printf("YES\n");
  else
    printf("NO\n");


}

    return 0;
}
