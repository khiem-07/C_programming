#include<stdio.h>

void expand(char s[], char d[]){
	char a='-';
	int i;
	int j=0;
	for(i=1;s[i-1]!='\0'; i++){
		d[j]=s[i-1];
		j++;
		if(s[i-1]!=a && s[i]==a && s[i+1]!='\0' && s[i+1]!=a){
			int c=s[i+1]-s[i-1];
			for(int k=1; k<c; k++){
				d[j]=s[i-1]+k;
				j++;
			}
			i++;

		}
	}
	
	d[j]='\0';

}
void main(){
char d[1000];
char s[]="----a-b-c-zA-D0-9---";
expand(s,d);
printf("%s\n",d);
}


	

		

