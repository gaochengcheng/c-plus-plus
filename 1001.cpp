//In this problem, your task is to calculate SUM(n) = 1 + 2 + 3 + ... + n.
//The input will consist of a series of integers n, one integer per line.
//For each case, output SUM(n) in one line, followed by a blank line. You may assume the result will be in the range of 32-bit signed integer.
#include <stdio.h>

int main(){
	int a,i,sum;
	while(scanf("%d",&a)!=EOF){
		sum = 0;
		for (i=1;i<=a;i++)
		{
			sum+=i;
		}
		printf("%d\n",sum);
	}
	return 0;
}
//    EOF���ļ�������  ���һ����ACM������Ҫ�����������ж���ʱ��ô��   ctrl+z  ����ģ�⵽�����ļ�ĩβ

/*
#include<stdio.h>
int main()
{
    int i,j;
    printf("%d\n",scanf("%d%d",&i,&j));
    return 0;
}  
 */
/*
scanf�������ص�����������ݵĸ���,ʲô�����������-1
��scanf("%d %d",&a,&b)==2 �������������������ôscanf�����᷵��һ��2
���ctrl+Z ��ôscanf��������-1
��Ϊ-1 != 2 ����ѭ����ֹ
����while(scanf("%d %d",&a,&b)!=EOF)ΪʲôҲ�����Ч��,ԭ����һ����
EOF = -1
������������ scanf���ؽ��2 ����ctrl+z ���� -1
-1 == -1 ѭ����ֹ
¥������������һ�¿���.
*/