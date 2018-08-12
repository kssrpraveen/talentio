#include<stdio.h>
int main(){
	int i=1,j=1,k=1,n;
	scanf("%d",&n);
	while(i<=n){
		while(j<=i){
			printf("%d ",k);
			j++;
			k++;
		}j=1;
		i++;
		printf("\n");
	}

	return 0;
}
