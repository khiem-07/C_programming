#include<stdio.h>
int bitcount(unsigned x){
	int i=0;
	while((x&=(x-1))>0)
		i++;
	return i+1;
}
void main(){
	int i;
	i=bitcount(57);
	printf("so luon bit 1: %d\n",i);
}
