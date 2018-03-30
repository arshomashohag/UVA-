#include<cstdio>
#include<cstring>
using namespace std;

class st{
 char ar[200];
 int top;
 public:
     st()
     {
         top=-1;
     }
     void push(char c)
     {
       ar[++top]=c;
     }
     char pop(void)
     {
         if(top>=0)
            return ar[top--];
         else
            return 'f';
     }
    int sizeof_st()
    {
        return top;
    }
};

char str[200],c,che;
int n,i,j,flag;

int main(void)
{
 scanf("%d\n",&n);
 while(n--)
 {
     st ob;
      gets(str);
     i=0;
     flag=1;

     if(strlen(str)==0)
        printf("Yes\n");
     else
     {
     while(c=str[i])
     {
       if(c=='(' || c=='[')
        ob.push(c);
        else if(c==')')
        {
         if(ob.sizeof_st()>=0)
         {
             che=ob.pop();
         if(che!='(')
         {
             flag=0;
             break;
         }
         }
         else
         {
           flag=0;
           break;
         }
        }
        else if(c==']')
        {
        if(ob.sizeof_st()>=0)
        {
        che=ob.pop();
         if(che!='[')
         {
             flag=0;
             break;
         }
        }
        else
        {
            flag=0;
            break;
        }
        }
        i++;
     }
    if(flag && ob.sizeof_st()== -1)
        printf("Yes\n");

    else
        printf("No\n");
     }
 }
 return 0;
}
