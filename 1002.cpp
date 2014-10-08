#include <stdio.h>
#include <string.h>
char CA[1000],CB[1000];
int IA[1001];
int main()
{
	int n,m1,m2,i,j,d,k,s=1;
	scanf("%d",&n);
	while (n--)
	{
		scanf("%s%s",&CA,&CB);
		m1=strlen(CA);
		m2=strlen(CB);
		d=0;
		//////第一步
		for (i=m1-1,j=m2-1,k=0;i>=0 && j>=0;i--,j--,k++)
		{
			d=CA[i]-48+CB[j]-48+d;
			IA[k]=d%10;
			d=d/10;
		}
		///第二步
		if (k==m1)
		{
			while (j>=0)
			{
				d=CB[j]-48+d;
				IA[k]=d%10;
				d=d/10;
				j--;k++;
			}
		}
		else
		{
			while (i>=0)
			{
				d=CA[i]-48+d;
				IA[k]=d%10;
				d=d/10;
				i--;k++;
			}
		}
		///第三步
		if (d!=0)
		{
			IA[k]=d;k++;
		}
		///输出
		printf("Case %d:\n",s);
		printf("%s + %s = ",CA,CB);
		for (i=k-1;i>=0;i--)
			printf("%d",IA[i]);
		printf("\n");
		s++;
	}
	return 0;
} 

/*
思路分析：
共分三步进行处理，1，两数组各自从最高下标相加并存如新数组中，直到其中一个到达下标为0；
2,将下标没到达0的数组加到新数组中；
 3,判断最后是否还有进位，若有加到新数组中。 */