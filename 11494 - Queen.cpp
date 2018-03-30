#include<cstdio>

int chx[]={1,1,-1,-1};
int chy[]={1,-1,-1,1};



int main(void)
{
    int a, i, j, x1, x2, y1, y2, out, tempx, tempy;
    bool flag;

    while(scanf("%d%d%d%d",&x1,&y1,&x2,&y2) && (x1 && x2 && y1 && y2))
    {
        if(x1==x2 && y1==y2)
            out = 0;
        else if(x1==x2 || y1==y2)
            out = 1;

        else
        {
            flag = false;

           for(i=0; i<4; i++)
           {
               tempx = x1;
               tempy = y1;

               while( !flag && tempx>0 && tempx<=8 && tempy>0 && tempy<=8 )
               {
                   tempx += chx[i];
                   tempy += chy[i];
                   if(tempx==x2 && tempy==y2)
                        flag=true;
               }
               if(flag)
                break;
           }

           if(flag)
            out = 1;
           else
            out = 2;
        }

        printf("%d\n",out);
    }
    return 0;
}
