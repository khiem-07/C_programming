#include<stdio.h>
#include<ctype.h>
double atof(char s[]){
	double val, power;
	double mu=0.0;
	double pow;
	int sign;
	int i=0;

	sign=(s[i]=='-')?-1:1;
	if(s[i]=='-')
		i++;
	for(val=0.0; isdigit(s[i]);i++)
		val=10.0*val+s[i]-'0';
	if(s[i]=='.')
		i++;
	for(power=1.0; isdigit(s[i]); i++){
		val=10.0*val+s[i]-'0';
		power*=10;
	}
	printf("power : %f\n",power);
	if(s[i]=='e' || s[i]=='E')
		i++;
	if(s[i]='-'){
		i++;
		mu=-1;
	}

	for(pow=0.0; isdigit(s[i]); i++)
			pow=pow*10.0+s[i]-'0';
	if(mu>=0)
		for(pow;pow>0;pow--)
			power/=10;
	else
		for(pow;pow>0;pow--)
			power*=10;
	printf("power : %f\n",power);
	return sign*val/power;
}
void main(){
	char s[]="123456789e-12";
	double a=atof(s);
	printf("%f\n",a);
}
