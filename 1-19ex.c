#include<stdio.h>
void reverse(char str[],int leng){
	int i=0;
	int j=leng;
	char tmp;
	while(j>i){
		tmp=str[i];
		str[i]=str[j];
		str[j]=tmp;
		i++;
		j--;
	}
}
int input(char s[]){
	int i=0;
	int a;
	for(i;(a=getchar()) != EOF && a!='\n'; i++)
		s[i]=a;
	if(a=='\n'){
		s[i]=a;
		++i;
	}
	if(a==-1){
		s[i]='\n';
		++i;
	}
	s[i]='\0';
	return i;

}
void copy(char to[], char from[]){
	int i=0;
	while((to[i] = from[i]) != '\0')
			i++;
}
void main(){
	char buff[200]="";
	int length=10;
	while((length=input(buff))>1){
		char line[length];
		copy(line,buff);
		reverse(line,length-2);
		printf("%s\n",line);
	}
	
}





