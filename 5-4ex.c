#include<stdio.h>
int strend(char *s, char*t){
	while(*s++!='\0'){
		int i=0;
		while(*(s+i)==*(t+i)){
			i++;
			if(*(t+i)=='\0')
				return 1;
		}
			
	}
	return 0;
}
void main(){
	char s[]="123456";
	char t[]="56";
	int a;
	a=strend(s,t);
	printf("%d\n",a);
}
