#include<stdio.h>

main(){
	int i,n, sum = 0;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;n--){
		
		sum = sum + n;
	}
	printf("%d",sum);
}
