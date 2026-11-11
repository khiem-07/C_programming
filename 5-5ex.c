#include<stdio.h>

void strncpykhiem(char *s, char *t, int n){
	int i=0;
	while(i<n){
		*s++=*t++;
		i++;
		if(*t=='\0')
			while(i<n){
				*s++='\0';
				i++;
		}
	}

}

void strncatkhiem(char *s, char *t, int n){
	while((*s++)!='\0')
		;
	*s--;
	while((n--)>0){
		*s++=*t++;
		if(*t=='\0')
			break;
	}
	*s='\0';
}

int strncmpkhiem(char *s, char *t, int n){
	while((n--)>0){
		if((*s)>(*t))
			return 1;
		if((*s)<(*t))
			return -1;
		*s++;
		*t++;
	}
	return 0;
}

void main(){
	char s[20]="";
	char t[]="him";
	strncpykhiem(s,t,5);
	printf("test cpy: %s\n",s);
	char m[]="1234";
	char n[]="56789";
	strncatkhiem(m,n,3);
	printf("test cat: %s\n",m);
	char e[]="123456";
	char f[]="1239";
	int a;
	a=strncmpkhiem(e,f,4);
	printf("test cpm %d\n",a);
}

