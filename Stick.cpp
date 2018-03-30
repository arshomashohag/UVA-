#include<bits/stdc++.h>
#define lld long long int

using namespace std;

char arena[102][102], ins , c, orien;

int main(void)
{
 lld n, m, s,i, out, j, x, y;

 while(scanf("%lld%lld%lld",&n,&m,&s) && (n || m ||s))
 {
     getchar();

     for(i=0; i<n; i++)
         {
          for(j=0; j<m; j++)
          {
               scanf("%c",&c);

              if(isalpha(c))
                {
                    orien = c;
                    x = i;
                    y = j;
                }
              arena[i][j] = c ;
          }
           getchar();
          arena[i][j]='\0';

         }

     out=0;

    for(i=0; i<s; i++)
    {
        if(arena[x][y]=='*')
        {
        out++;
        arena[x][y]='.';
        }
      scanf("%c", &c);

      if(c=='D')
      {
          if(orien=='N')
            orien = 'L';
          else if(orien=='S')
            orien = 'O';
            else if(orien == 'L')
             orien = 'S';
             else if(orien == 'O')
              orien = 'N';
      }

     else if(c=='E')
      {
          if(orien=='N')
            orien = 'O';
          else if(orien=='S')
            orien = 'L';
            else if(orien == 'L')
             orien = 'N';
             else if(orien == 'O')
              orien = 'S';
      }

      else if(c=='F')
      {
        if(orien=='L' && (y+1)<m && arena[x][y+1]!='#')
            y++;
        else if(orien=='O' &&(y-1)>=0 && arena[x][y-1]!='#')
            y--;
        else if(orien=='S' && (x+1)<n && arena[x+1][y]!='#')
            x++;
        else if(orien=='N' && (x-1)>=0 && arena[x-1][y]!='#')
            x--;
      }

    }
  if(arena[x][y]=='*')
    out++;

    printf("%lld\n", out);
 }

    return 0;
}
