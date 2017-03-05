#include <stdio.h>

int StrToInt(char* string){
	int number=0;
	while(*string != 0){
		
		number=number*10+*string-'0';
		printf("%d\n",number);
		++string;
	}
	return number;
}


int main(){
	printf("%d",StrToInt("123"));
}
