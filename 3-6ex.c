#include<stdio.h>

void reverse(char s[], int k){
	int j=0;
	char tmp;
	while(k>j){
		tmp=s[j];
		s[j]=s[k];
		s[k]=tmp;
		j++;
		k--;
	}
		
}

void itoa(int n, char s[], int b){
	int ten;
	int i=0;
	int sign=0;
	do{
		ten=n%10;
		if(ten<0){
			ten=ten*(-1);
			sign=1;
		}
		s[i++]=ten + '0';
	}while((n/=10)!=0);
	if(sign==1)
		s[i++]='-';
	while(b>i)
		s[i++]=' ';
	s[i]='\0';
	reverse(s,i-1);
}

void main(){
 char s[30];
 int i=-2147483648;
 itoa(i,s,9);
 printf("%s\n",s);
}
