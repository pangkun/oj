#include<stdio.h>
int factorial(int n){
	int k=1;
	for(int i=1;i<=n;i++)
		k*=i;
	return k;
}
int main(){
	double n=0;
	printf("n e\n- -----------\n");
	for(int i=0;i<10;i++){
		printf("%d ",i);
		n+=1.0/factorial(i);
		if(i<2)
			printf("%.0lf\n",n);
		else if(i==2)
			printf("%.1lf\n",n);
		else
			printf("%.9lf\n",n);
	}
	return 0;
} 
