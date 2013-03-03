#include<stdio.h>
#include<math.h>
int main()
{
int test;
scanf("%d",&test);
int hash[500001];
int i;
for(i=1;i<=500000;i++)
hash[i]=(int)sqrt(i);
while(test--)
{
int no;
scanf("%d",&no);
int i;
int ans=0,q;
for(i=2;i<=hash[no];i++){
if(no%i==0)
{
q=no/i;
if(q!=i)
ans=ans+i+q;
else
ans=ans+i;
}
}
if(no==1)
printf("%d\n",0);
else
printf("%d\n",ans+1);
}
return 0;
}

