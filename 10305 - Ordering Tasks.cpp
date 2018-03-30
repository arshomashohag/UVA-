#include<cstdio>
#include<list>
using namespace std;

int i, n, m, j, ina, inb, posa, posb,temp;

int ar[105];

int main(void)
{
list<int> myl;
list<int>::iterator it1, it2, it3;

    while(scanf("%d%d",&n,&m) && (n||m) )
    {

      for(i=1;i<=n;i++)
      {
        myl.push_back(i);
      }

      for(i=1;i<=m;i++)
      {
          scanf("%d%d",&ina,&inb);

          it1 = myl.begin();
          it2 = myl.end();
          while(it1!=it2 && *(it1)!=inb)
            it1++;

          it3 = myl.begin();
          while(it3!=it2 && (*(it3++))!=ina);


            myl.erase(it1);
            myl.insert(it3,inb);



      }

       it1 = myl.begin();
          it2 = myl.end();
          while(1)
          {
            printf("%d", *it1);
            it1++;
            if(it1!=it2)
                printf(" ");
            else
                break;
          }
          printf("\n");
    }

    return 0;
}
