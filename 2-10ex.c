#include<stdio.h>
char lower(char a){
	char i;
	i=(a>90 || a<65)?-1:a+32;
	return i;
}
void main(){
	char a;
	a=lower('9');
	if(a>0)
		printf("%c\n",a);
	else
		printf("sai me roi\n");
}
