 #include <stdio.h>
int main(void)
{
unsigned long int a,b;
while (scanf("%lu%lu",&a,&b)==2)
{
if(b>a)
 printf("%lu\n",b-a);
else
 printf("%lu\n",a-b);
}
return 0;
}
