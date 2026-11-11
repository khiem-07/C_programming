#include<stdio.h>
int bit_h(char s){
	int a=-1000;
	if((s-'0')>=0 && (s-'0'<=9)){
			a=s-'0';
			a=a<<4;
		}
	if((s-'a')>=0 && (s-'a'<=5)){
			a=s-'a'+10;
			a=a<<4;
		}
	if((s-'A')>=0 && (s-'A'<=5)){
			a=s-'A'+10;
			a=a<<4;
		}
	return a;
}

int bit_l(char s){
	int b=-1000;
	if((s-'0')>=0 && (s-'0'<=9)){
			b=s-'0';
		}
	if((s-'a')>=0 && (s-'a'<=5)){
			b=s-'a'+10;
			
		}
	if((s-'A')>=0 && (s-'A'<=5)){
			b=s-'A'+10;
			
		}
	return b;
}

int htoi(char s[]){
	int a=0;
	int b=0;
	if(s[1]=='\n'){
		b=bit_l(s[0]);
		return b;
		}
	if(s[2]=='\n'){
		a=bit_h(s[0]);
		b=bit_l(s[1]);
		return a+b;
		}
	if(s[0]=='0' && (s[1]=='x' || s[1]=='X')){
		a=bit_h(s[2]);
		b=bit_l(s[3]);
		return a+b;
	}
	return -1;
	
}

int input(char s[]){
	int i=0;
	int a;
	printf("moi nhap so hex: \n");
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
int main(){
	char buff[200]="";
	int length=10;
	int a;
	while((length=input(buff))>1){
		char line[length];
		copy(line,buff);
		a=htoi(line);
		if(a<0){
			printf("nhap sai so hex \n");
			printf("\n");
			}
			
		else
			printf("so thap phan la: %d\n",a);
		
	}
	return 0;
	
}

