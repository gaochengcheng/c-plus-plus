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
		//////��һ��
		for (i=m1-1,j=m2-1,k=0;i>=0 && j>=0;i--,j--,k++)
		{
			d=CA[i]-48+CB[j]-48+d;
			IA[k]=d%10;
			d=d/10;
		}
		///�ڶ���
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
		///������
		if (d!=0)
		{
			IA[k]=d;k++;
		}
		///���
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
˼·������
�����������д���1����������Դ�����±���Ӳ������������У�ֱ������һ�������±�Ϊ0��
2,���±�û����0������ӵ��������У�
 3,�ж�����Ƿ��н�λ�����мӵ��������С� */