#include<stdio.h>
int main(){
	int T,N,sum,s,a,start,end,temp,max;
	scanf("%d",&T);
	for(int k=1;k<=T;k++){
		sum=0;
		s=1;
		end=1;
		max=-1001;
		temp=0;
		scanf("%d",&N);
		while(N--){
			scanf("%d",&a);
			sum+=a;
			if(sum>max){
				start=s;
				max=sum;
				end=start+temp;					
			}
			temp++;
			if(sum<0){
				s+=temp;
				sum=0;
				temp=0;
			}			
		}
		printf("Case %d:\n%d %d %d\n",k,max,start,end);
		if(k!=T)
			printf("\n");
	}
	return 0;
}
