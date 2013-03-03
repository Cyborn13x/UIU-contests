#include <stdio.h>  
#include <string.h>
int main()
{
	char m[100];
	int j,k,l,i=1;
	scanf("%d",&j);
	if(j<=1000)
	while(j--)
	{
		scanf("%d %s",&k,m);
		l=strlen(m);
		if(k<=l)
		{
			while(m[k] !='\0')
			{
				m[k-1]=m[k];
				k++;
			}
			m[k-1]='\0';
		}
		printf("%d %s\n",i,m);
		i++;
	}
}
