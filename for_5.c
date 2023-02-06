#include<stdio.h>

main(){
	int i,n;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;){
		printf("%d\n",i);
		i=i+2;
	}
}
