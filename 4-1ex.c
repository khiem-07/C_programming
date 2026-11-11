#include<stdio.h>

int strindex(char s[], char t[]){
	int i,j,k;
	int lengs, lengt;
	for(lengs=0; s[lengs]!='\0'; lengs++)
		;
	for(lengt=0; t[lengt]!='\0'; lengt++)
		;
	for(i=lengs-1;i>0;i--)
		for(j=lengt-1, k=0;(s[i-k]==t[j]);j--,k++){
			if(j==0){
				
				printf("len s: %d\n",lengs);
				printf("len t: %d\n",lengt);
				return i - lengt+1;
			}

	
	}
	printf("len s: %d\n",lengs);
	printf("len t: %d\n",lengt);
	return -1;


}
void main(){
	char s[]="123456789456789";
	char t[]="45l6";
	int a=strindex(s,t);
	if(a>0)
		printf("co trung bat dau tai vi tri: %d\n",a);
	else
		printf("sai me roi %d\n",a);
}
