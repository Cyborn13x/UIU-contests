#include<stdio.h>

int main()
{
int num;
int data[4];
int count;
while(scanf("%d",&num)!=EOF){
count=0;
for(data[0]=0;data[0]<10;data[0]++){
for(data[1]=0;data[1]<10;data[1]++){
for(data[2]=0;data[2]<10;data[2]++){
for(data[3]=0;data[3]<10;data[3]++){
if(data[0]+data[1]+data[2]+data[3]==num){
count++;
}
}
}
}
}
printf("%d\n",count);
}
return 0;
}
