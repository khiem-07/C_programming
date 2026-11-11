#include<stdio.h>
char *any(char *s1, char *s2){
	while(*s1!='\0'){
		for(int i=0; *(s2+i)!='\0';i++)
			if(*s1==*(s2+i))
				return s1;
		
		*s1++;
	}
	return NULL;
}

void main(){
	char s[]="12345";
	char t[]="491";
	char *p;
	p=any(s,t);
	printf("dia chi s: %p\n",s);
	printf("dia chi p: %p\n",p);
	if(p!=NULL){
		int i;
		for(i=0; &s[i]!=p;i++)
			;
		printf("trung tai vi tri i: %d la %c\n",i,*p);
	}
	else
		printf("sai me roi\n");

}
