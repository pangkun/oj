#include<stdio.h>
#include<string.h>
int main(){
	int T,a,b,c=0,i,la,lb,max;
	char A[1000],B[1000],C[1001];
	scanf("%d",&T);
	for(int k=1;k<=T;k++){
		scanf("%s %s",A,B);
		la=strlen(A);
		lb=strlen(B);
		max=la>lb?la:lb;
		for(i=0;i<max;i++){
			if(i>=la){
				a=0;
			}else{
				a=A[la-i-1]-48;
			}
			if(i>=lb){
				b=0;
			}else{
				b=B[lb-i-1]-48;
			}
			C[max-i-1]=(a+b+c)%10+48;
			c=(a+b+c)/10;
		}
		printf("Case %d:\n%s + %s = ",k,A,B);
		if(c==1)
			printf("1");
		for(i=0;i<max;i++)
			printf("%c",C[i]);
		if(k!=T)
			printf("\n\n");
		else
			printf("\n");
	}
	return 0;
}
