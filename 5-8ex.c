#include<stdio.h>
static char daytab[2][13] = {
{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};
int day_of_year( int year, int month, int day){
	int i;
       	int leap=0;
	if(year<0 || month<1 || month >12){
		printf("ban nhap ko hop le\n");
		return -1;
	}
	if(year%4==0 && year%100!=0 || year%400==0)
		leap=1;
	int tmp=day;
	for(i=0; i< month; i++)
		day +=daytab[leap][i];
	if(tmp>daytab[leap][i] || tmp<0){
		printf("ban nhap sai ngay trong thang \n");
		return -1;
	}
	return day;
}

int month_day(int year, int yearday, int *pmonth, int *pday){
	int i; 
        int leap=0;
	if(year<0 || yearday>366 || yearday<=0){
		printf("ban nhap ko hop le\n");
		return 0;
	}
        if(year%4==0 && year%100!=0 || year%400==0)
                leap=1;
	if(yearday==366 && leap==0){
		printf("nam khong nhuan khong the co 366 ngay\n");
		return -1;
	}
	for(i=0;yearday>daytab[leap][i];i++)
		yearday-=daytab[leap][i];
	*pmonth=i;
	*pday=yearday;
	return 0;
}
void main(){
	int a,b,c,d;
	a=day_of_year(400,2,29);
	printf("%d\n",a);
	a=month_day(400,366,&c,&d);
	printf("ngay %d, thang %d\n",d,c);
}
