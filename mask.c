#include <stdio.h>
//输出一个树所对应的二进制形式。 
int main(void){
	int number;
//	scanf("%d",&number);
	number = 0xaaaaaaaa;  //对应的二进制是1010 1010 1010 1010 
	unsigned mask = 1u<<31;
	for(;mask;mask>>=1){
		printf("%d",number & mask?1:0);
	}
	printf("\n");
//	printf("%d",sizeof(int));	
	return 0;
}
