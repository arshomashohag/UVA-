#include<bits/stdc++.h>
#define MAX 1005
#define inf (1<<7)
#define pii pair<int,int>
#define uu first
#define uv second
using namespace std;
int fx[]= {0,-1,0,1};
int fy[]= {1,0,-1,0};
int fire[MAX][MAX],jopes[MAX][MAX],R,C,ans;
string grap[MAX];
queue<pii>fq;
queue<pii>jq;
bool b;
void fbfs();
void jbfs();
void reset()
{
    for(int i=0; i<R; i++)
        for(int j=0; j<C; j++)
        {
            fire[i][j]=inf;
            jopes[i][j]=inf;
        }
    return;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d\n",&R,&C);
        reset();
        for(int i=0; i<R; i++) getline(cin,grap[i]);
        for(int i=0; i<R; i++)
            for(int j=0; j<C; j++)
            {
                if(grap[i][j]=='F')
                {
                    fire[i][j]=0;
                    fq.push(pii(i,j));
                }
                else if(grap[i][j]=='J')
                {
                    jopes[i][j]=0;
                    jq.push(pii(i,j));
                }
            }
        fbfs();
        jbfs();
        if(b) printf("IMPOSSIBLE\n");
        else printf("%d\n",ans);
    }
    return 0;
}

void fbfs()
{
    int tx,ty,x,y;
    while(!fq.empty())
    {
        pii frnt=fq.front();
        fq.pop();
        for(int i=0; i<4; i++)
        {
            tx=frnt.uu+fx[i];
            ty=frnt.uv+fy[i];
            if((tx>=0&&tx<R)&&(ty>=0&&ty<C)&&grap[tx][ty]!='#'&&fire[tx][ty]==inf)
            {

                           fire[tx][ty]=fire[frnt.uu][frnt.uv]+1;
                               fq.push(pii(tx,ty));

            }
        }
    }
    return;
}
void jbfs()
{
    int tx,ty;
    b=true;
    if(jq.empty())
    {
        ans=1;
        b=false;

    }
    while(!jq.empty())
    {
        pii frnt=jq.front();
        jq.pop();
        if(frnt.uu==0 ||(frnt.uu+1)==R||frnt.uv==0||(frnt.uv+1)==C)
        {
            ans=jopes[frnt.uu][frnt.uv]+1;
            b=false;
        }
        for(int i=0; i<4&&b; i++)
        {

            tx=frnt.uu+fx[i];
            ty=frnt.uv+fy[i];
            if((tx>=0&&tx<R)&&(ty>=0&&ty<C)&&grap[tx][ty]=='.'&&jopes[tx][ty]==inf)
            {
                if(fire[tx][ty]>(jopes[frnt.uu][frnt.uv]+1))
                {

                    jopes[tx][ty]=jopes[frnt.uu][frnt.uv]+1;
                    jq.push(pii(tx,ty));
                }
            }
        }
    }
    return;
}
