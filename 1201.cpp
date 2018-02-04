#include<stdio.h>
int isLeap(int year){
	if((year%4==0&&year%100!=0)||year%400==0)
		return 1;
	return 0;
}
int main(){
	int T,year,sum,month,day;
	scanf("%d",&T);
	while(T--){
		scanf("%d-%d-%d",&year,&month,&day);
		sum=0;
		if(month==2&&day==29)
			printf("-1\n");
		else{
			if(month<=2)
				for(int i=year;i<=year+17;i++)
					if(isLeap(i))
						sum+=366;
					else
						sum+=365;
			else
				for(int i=year+1;i<=year+18;i++)
					if(isLeap(i))
						sum+=366;
					else
						sum+=365;
			printf("%d\n",sum);
		}
	}
	return 0;
} 
