#include<stdio.h>
#include<string.h>
int main(){
	int N,max,k,mark;
	char a[1000][20];
	while(scanf("%d",&N)!=EOF&&N){
		for(int i=0;i<N;i++)
			scanf("%s",a[i]);
		max=0;
		for(int i=0;i<N;i++){
			k=0;
			for(int j=i+1;j<N;j++)
				if(strcmp(a[i],a[j])==0)
					k++;
			if(k>max){
					max=k;
					mark=i;
				}
		}
		printf("%s\n",a[mark]);
	}
	return 0;
}
