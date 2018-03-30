#include<bits/stdc++.h>

using namespace std;

int main(void)
{
  int wh1, wm1, wh2, wm2, mh1, mm1, mh2, mm2, t, cn=1;
  char ar[50];
  bool flag;

  scanf("%d",&t);

  while(t--)
  {
      getchar();
      scanf("%[^\n]", ar);

       sscanf(ar,"%d%*c%d%*c%d%*c%d",&wh1, &wm1, &wh2, &wm2);

        getchar();
       scanf("%[^\n]", ar);

       sscanf(ar,"%d%*c%d%*c%d%*c%d",&mh1, &mm1, &mh2, &mm2);

       printf("Case %d: ",cn++);
       flag = false;

       if(mh1>wh2 || mh2<wh1)
        flag = true;

       else if( (mh1==wh2 && mm1>wm2) || (mh2==wh1 && mm2<wm1))
        flag = true;


       if(flag)
        printf("Hits Meeting\n");

       else
        printf("Mrs Meeting\n");
  }
}
