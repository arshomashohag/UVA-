#include<bits/stdc++.h>
#define MAX 123453
using namespace std;

int n, m, out, srcx, srcy, desx, desy, cn=1;
char in[30][30];
int col=1;
int visit[26][26][6][5];

class node
{
public:
    int x, y, col, face, cost;
} nda, ndb;



bool checkIndex(int face, int x, int y, int col)
{
    if(face==1)
    {
        if((x-1)>=0 && visit[x-1][y][col][face]==-1 && in[x-1][y]!='#')
            return true;
        else
            return false;
    }
    else if(face==2)
    {
        if((x+1)<n && visit[x+1][y][col][face]==-1 && in[x+1][y]!='#')
            return true;
        else
            return false;
    }

    else if(face==3)
    {
        if((y+1)<m && visit[x][y+1][col][face] == -1 && in[x][y+1]!='#')
            return true;
        else
            return false;

    }

    else if(face==4 )
    {
        if((y-1)>=0 && visit[x][y-1][col][face]==-1 && in[x][y-1]!='#')
            return true;
        else
            return false;
    }

}


int bfs()
{

    queue< node > myQ;
    memset(visit, -1, sizeof(visit));

   int i, j, k, x, y, a, b, time, face, f, t, col, cost, cl, ct;

    nda.x = srcx;
    nda.y = srcy;
    nda.col = 1;
    nda.face = 1;
    nda.cost = 0;

    myQ.push(nda);
    visit[srcx][srcy][1][1]=1;


    while(!myQ.empty())
    {
        nda = myQ.front();

        myQ.pop();
        x = nda.x;
        y = nda.y;
        face = nda.face;
        col = nda.col;
        cost = nda.cost;


            //printf("%d %d %d\n", x, y, cost);

        if(x==desx && y==desy && col==1)
            return cost;

        if(checkIndex( face, x, y, (col%5)+1 ) )
        {


            ct=cost+1;
            cl = (col%5)+1;
            f = face;


            if(face==1)
            {
                a=x-1;
                b=y;
            }
            else if(face==2)
            {
                a=x+1;
                b=y;
            }
            else if(face==3)
            {
                a=x;
                b=y+1;
            }
            else if(face==4)
            {
                a=x;
                b=y-1;
            }

            ndb.x=a;
            ndb.y=b;
            ndb.col=cl;
            ndb.cost = ct;
            ndb.face = f;

            visit[a][b][cl][f]=1;
            myQ.push(ndb);
        }



        if(face==1)
        {

            if( visit[x][y][col][3]== -1)
            {
                ndb.x=x;
                ndb.y = y;
                ndb.col = col;
                ndb.cost = cost+1;
                ndb.face = 3;
                myQ.push(ndb);
                visit[x][y][col][3]=1;
            }

            if( visit[x][y][col][4]==-1)
            {
                ndb.x=x;
                ndb.y = y;
                ndb.col = col;
                ndb.cost = cost+1;
                ndb.face = 4;
                myQ.push(ndb);
                visit[x][y][col][4]=1;
            }

        }



       else if(face==2)
        {

            if( visit[x][y][col][3]==-1)
            {
                ndb.x=x;
                ndb.y = y;
                ndb.col = col;
                ndb.cost = cost+1;
                ndb.face = 3;
                myQ.push(ndb);
                visit[x][y][col][3]=1;
            }

            if( visit[x][y][col][4]==-1)
            {
                ndb.x=x;
                ndb.y = y;
                ndb.col = col;
                ndb.cost = cost+1;
                ndb.face = 4;
                myQ.push(ndb);
                visit[x][y][col][4]=1;
            }
        }


       else if(face==3)
        {
            if( visit[x][y][col][2]==-1)
            {
                ndb.x=x;
                ndb.y = y;
                ndb.col = col;
                ndb.cost = cost+1;
                ndb.face = 2;
                myQ.push(ndb);
                visit[x][y][col][2]=1;
            }

            if( visit[x][y][col][1]==-1)
            {
                ndb.x=x;
                ndb.y = y;
                ndb.col = col;
                ndb.cost = cost+1;
                ndb.face = 1;
                myQ.push(ndb);
                visit[x][y][col][1]=1;
            }


        }



       else if(face==4)
        {
            if( visit[x][y][col][2]==-1)
            {
                ndb.x=x;
                ndb.y = y;
                ndb.col = col;
                ndb.cost = cost+1;
                ndb.face = 2;
                myQ.push(ndb);
                visit[x][y][col][2]=1;
            }

            if( visit[x][y][col][1]==-1)
            {
                ndb.x=x;
                ndb.y = y;
                ndb.col = col;
                ndb.cost = cost+1;
                ndb.face = 1;
                myQ.push(ndb);
                visit[x][y][col][1]=1;
            }
        }

    }


    return -1;
}


int main(void)
{
    int i, j;

    while(scanf("%d%d",&n,&m) && (n||m))
    {
      if(cn>1)
         printf("\n");

        out=0;

         getchar();

        for(i=0; i<n; i++)
        {
          gets(in[i]);
        }


        for(i=0; i<n; i++){

             for(j=0; j<m; j++)
            {
                if(in[i][j]=='S')
                {
                    srcx=i;
                    srcy=j;
                }
                else if(in[i][j]=='T')
                {
                    desx=i;
                    desy=j;
                }
            }

        }

        out = bfs();
        if(out!=-1)
            printf("Case #%d\nminimum time = %d sec\n",cn++,out);
        else
            printf("Case #%d\ndestination not reachable\n",cn++);


    }


    return 0;
}
