#include<stdio.h>
void escape(char s[], char d[]){
	char tmp[300];
	int i,k;
	int len;
	for(len=0;s[len]!='\0';len++)
		tmp[len]=s[len];
	for(int j=0; d[j]!='\0'; j++)
		tmp[len++]=d[j];
	tmp[len]='\0';
	for(i=0, k=0;tmp[i]!='\0';i++){
		switch(tmp[i]){
			case '\n':
				s[k]='\\';
				s[++k]='n';
				k++;
				break;
			case '\t':
				s[k]='\\';
				s[++k]='t';
				k++;
				break;
			default:
				s[k++]=tmp[i];
				break;
		}
	
	}
	s[k]='\0';


}
void main(){
	char s[200]="123\n456\n789\t";
	char d[]="101112\\n\\n";
	printf("char s: %s\n",s);
	printf("char d: %s\n",d);
	escape(s,d);
	printf("new char s: %s\n",s);

}
