#include<stdio.h>

unsigned rightot(unsigned x, int n){
	unsigned i=0;
	unsigned j=x;
	printf("%d\n",j);
	while(j>1){
		i++;
		j=j>>1;
	} /* x looklike 10101 and i look like 4 */
	printf("%d\n",i);
	int k;
	while((n--)>0){
		if(x%2==1){
			k=1;
			x=x>>1;
			k=k<<i;
			x=x | k;
			
		}
		else{
			
			x=x>>1;
		}
	}
	
	return x;
}
void  main(){
	
	unsigned a;
	a=rightot(236,2);
	printf("%d\n",a);
}
