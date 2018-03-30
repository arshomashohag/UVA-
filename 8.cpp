#include<cstdio>
#include<cmath>

double out,len,sat;
char in[12],in1[12];
int i,j,one,two,wrong,req,tot;
int ar[]={1,-1};

double fact(int ind)
{
  double ret=1;

  while(ind)
    {
        ret=ret*ind;
        ind--;
    }

  return ret;
}
int main(void)
{
   scanf("%s",in);
   scanf("%s",in1);
   one=0;
   two=0;
   wrong=0;
   for(i=0;in[i];i++)
   {
       if(in[i]=='+')
         one++;
       else
         one--;

       if(in1[i]=='+')
       two++;
       else if(in1[i]=='-')
         two--;
       else
        wrong++;
   }

    req=one-two;
    if(req==0 && wrong==0)
        printf("1.000000000000\n");
    else if((req>0 && req>wrong) || (req<0 && ((req*(-1))>wrong)))
      printf("0.000000000000\n");


  else
  {
   tot=pow(2,wrong);

      for(i=0;i<=wrong;i++)
      {
        j=wrong-i;
        if(i-j==req)
            break;
      }


     sat=fact(wrong)/((fact(i))*(fact(j)));
     out=(double)sat/(double)tot;
     printf("%0.12lf\n",out);
  }
   return 0;
}
