#include<stdio.h>
void reverse(char s[], int k){
	char tmp;
	int i=0;
	while(k>i){
		tmp=s[i];
		s[i]=s[k];
		s[k]=tmp;
		i++;
		k--;
	}
}
void itoa(int n, char s[], int b){
	int i,j,k;
	k=0;
	do{
	i=n % b;
	n=n/b;
	if(i<=9)
		i=i+'0';
	else
		i=i+'A'-10;
	s[k++]=i;
	}
	while(n!=0);
	s[k]='\0';
	reverse(s,k-1);

}
void main(){
	char s[100];
	itoa(4562,s,16);
	printf("%s\n",s);
}
