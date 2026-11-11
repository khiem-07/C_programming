#include<stdio.h>

void itoa(int n, char *s){
	static int i=0;
	if(n<0){
		*s++='-';
		n=-n;
	}
	if(n/10)
		itoa(n/10,s);
	*(s+i)=n%10 + '0';
	i++;
	

}

void reverse(char *s, int t){
	static int n=t;
	if(t/2){
		n+=1;
		reverse(s+n);
	}
	tmp=s[m];
	s[m]=s[n];
	s[n]=tmp;
	m++;
	
	

}
void main(){
	char s[7];

	itoa(1234,s);
	printf("funcion itoa %s\n",s);
	reverse(s);
	printf("fun reverse %s\n", s);

}

