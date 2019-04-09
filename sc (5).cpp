#include<stdio.h>
int main()
{
	float pfstnm=0.008;
	float pfsmd=0.02;
	float ans;
	float m=0.0000001;
	float page;
	float eff_asses=0.0000002;
	ans=((0.7*0.02)+(0.3*0.008));
	ans=ans-1;
	page=1/ans;
	printf("%.7f",page);
	
}
