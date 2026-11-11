#include<stdio.h>
unsigned setbits(unsigned x, int p, int n, unsigned y){
	return (~(~(~0U<<n)<<(p-n+1)) & x) | (~(~0U<<n) & y)<<(p-n+1);
}  
void main(){
	int a=setbits(243,3,2,7);
	printf("%d\n",a);
}
