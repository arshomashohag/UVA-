 #include<bits/stdc++.h>
#define lld long long int

using namespace std;
 vector<lld> ar[30];
lld t, in, out, i, j, n, m, k;

lld recur(lld cs, lld c)
{
  if(cs>n)
    return -1;
  if(c>=m)
    return cs;

 lld a, l = ar[c].size();
 lld r, ret= -1;

 for(a=0; a<l; a++)
 {
     r = recur(cs+ar[c][a], c+1);

     ret = ( (n-ret) > (n-r) ? r : ret );

 }

return ret;
}


int main(void)
{
  scanf("%lld",&t);

  while(t--)
  {
    scanf("%lld%lld",&n,&m);

    for(i=0; i<m; i++)
    {
        scanf("%lld",&k);

        for(j=0; j<k; j++)
        {
          scanf("%lld",&in);
          ar[i].push_back(in);
        }
    }

    out = recur(0, 0);

    if(out >0 && out<=n)
        printf("%lld\n", out);
    else
        printf("no solution\n");

  for(i=0; i<m; i++)
    ar[i].clear();

  }

}
