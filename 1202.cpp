#include<stdio.h>
int getG(double p){
	if(p>=90)
		return 4;
	if(p>=80)
		return 3;
	if(p>=70)
		return 2;
	if(p>=60)
		return 1;
	return 0;
}
int main(){
	int N;
	double s,p,sum,ssum;
	while(scanf("%d",&N)!=EOF){
		sum=0;
		ssum=0;
		while(N--){
			scanf("%lf%lf",&s,&p);
			sum+=s*getG(p);
			if(p!=-1)
				ssum+=s;
		}
		if(ssum==0)
			printf("-1\n");
		else
			printf("%.2lf\n",sum/ssum);
	} 
	return 0;
}
