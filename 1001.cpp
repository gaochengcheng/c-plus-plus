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
//    EOF是文件结束流  这个一般在ACM比赛中要求输入数据有多组时这么做   ctrl+z  可以模拟到达了文件末尾

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
scanf函数返回的是输入的数据的个数,什么都不输入代表-1
在scanf("%d %d",&a,&b)==2 中如果输入两个数字那么scanf函数会返回一个2
如果ctrl+Z 那么scanf函数返回-1
因为-1 != 2 所以循环终止
至于while(scanf("%d %d",&a,&b)!=EOF)为什么也有这个效果,原因是一样的
EOF = -1
输入两个数字 scanf返回结果2 输入ctrl+z 返回 -1
-1 == -1 循环终止
楼主将代码运行一下看看.
*/