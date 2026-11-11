#include<stdio.h>
unsigned invert(unsigned x, int p, int n){
	unsigned y=x;
	unsigned mask=(~(~0U<<n))<<(p-n+1); /* look like 000011100 */
	x=(x & (~mask));

	y=(~y) & mask;
	x=x | y;
	return x;
}

void main(){
	unsigned x=255;
	unsigned y;
	y=invert(x,5,3);
	printf("%d\n",y);
}
