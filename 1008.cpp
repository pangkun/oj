#include<stdio.h>
int main(){
	int N,floor,sum,last;
	while(scanf("%d",&N)&&N!=0){
		sum=0;
		last=0;
		while(N--){
			scanf("%d",&floor);
			if(floor>last)
				sum+=5+(floor-last)*6;
			else
				sum+=5+(last-floor)*4;
			last=floor;	
		}
		printf("%d\n",sum);
	}
	return 0;
}
