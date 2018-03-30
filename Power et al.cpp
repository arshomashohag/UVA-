#include<cstdio>
#include<cstring>

long long int out,i,j,temp,l,bm;
char a[110],b[110],ch;


int ar2[]={6,2,4,8};
int ar3[]={1,3,9,7};
int ar7[]={1,7,9,3};
int ar8[]={6,8,4,2};
int ar4[]={6,4};
int ar9[]={1,9};

int main(void)
{

    while(scanf("%s %s",a,b) ==2)
    {
        if(a[0]=='0'  &&  b[0]=='0')
            break;
        j=0;
        l=strlen(a);
        ch=a[l-1];

        if(ch=='1' || ch=='5' || ch=='6' || ch=='0')
            printf("%c\n",ch);

        else
        {
            temp=0;
            if(ch=='2' || ch=='3' || ch=='7' || ch=='8')
                bm=4;
            else
                bm=2;
            for(i=0; b[i]; i++)
            {
                temp=temp*10+(b[i]-48);
                if(temp>=bm)
                {
                    temp=temp%bm;
                }
             }

            if(ch=='2')
                printf("%d\n",ar2[temp]);
            else if(ch=='3')
                printf("%d\n",ar3[temp]);
              else  if(ch=='4')
                printf("%d\n",ar4[temp]);
            else if(ch=='7')
                printf("%d\n",ar7[temp]);
              else  if(ch=='8')
                printf("%d\n",ar8[temp]);
                 else if(ch=='9')
                printf("%d\n",ar9[temp]);

           }

        getchar();
    }

    return 0;

}
