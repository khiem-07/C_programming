#include<stdio.h>
void squeeze(char s1[], char s2[]){
	int i, j, k;
	for(i=k=0;s2[i]!='\0';i++){
		for(j=0; s1[j]!='\0' ;j++){
			if(s1[j]!=s2[i])
				s1[k++]=s1[j];
		
		}
		s1[k]='\0';
		k=0;
		
	}
}
void main(){
	char s1[]="12345678";
	char s2[]="356";
	squeeze(s1,s2);
	printf("new string s1:%s\n",s1);
        printf("string s2:%s\n",s2);
}
