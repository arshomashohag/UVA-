#include<cstdio>
#include<cstdlib>

int t,d1,d2,m1,m2,i,j,cn=1,out=0;
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

char ar[4][200]={"\0","Okay got it!","Oh no it is ambiguous!","I am sure there is some kinda mistake!"};
int main(void)
{
  scanf("%d",&t);
  while(t--)
  {
      scanf("%d%d%d%d",&m1,&d1,&m2,&d2);
       i=0;
       j=0;
       out=0;
      if(m1<=12 && m2<=12 && (m1<m2 ||( m1==m2 && d1<d2)) && d1<=month[m1] && d2<=month[m2])
      {
         out=1;
          i=1;

       }
     if(d1<=12 && d2<=12 && (d1<d2 || (d1==d2 && m1<m2)) && m1<=month[d1] && m2<=month[d2])
       {
          out=1;
          j=1;

       }


if(i && j)
{
    out=2;

}

    if(out!=1 && out!=2)
        {
            out=3;

        }

    printf("Case %d: %s\n",cn++,ar[out]);

}

      return 0;
  }

