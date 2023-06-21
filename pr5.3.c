#include<stdio.h>
void main(){
	int p;
	int d;

	int a[4][4];

printf("Enter the numbers: \n");
 for(p=0;p<=2;p++){
 	for(d=0;d<=2;d++){
 		printf("Enter a[%d][%d]: ",p,d);
 		scanf("%d",&a[p][d]);
	 }
}
for(p=0;p<=2;p++){
	for(d=0;d<=2;d++){
		if(a[p][d]%2==0){
			printf("The even number: %d\n",a[p][d]);
		}else{
			printf("The odd number: %d\n",a[p][d]);
		}
	}
}
}
