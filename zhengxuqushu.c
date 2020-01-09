/*输入一个数，正序输出各位数字，中间的数字间有空格，最后一位数字不加空格*/
#include <stdio.h>

int main()
{
	
	int x;
	scanf("%d",&x);
	
	int mask = 1;//初始化第一个10000 
	int t = x;   //避免x被消耗掉，后面x有用 
	while ( t>9 ){
		t /=10;  
		mask *=10;
	}
	do{
		int d = x / mask;  //得到x的最高位 
		printf("%d",d);
		//保正最后一位数字后没有空格    
		if (mask > 9) {     
			printf(" ");
		}
		x %=mask;
		mask /= 10;
	}while( mask > 0);
	printf("\n");
	return 0;
	
}
