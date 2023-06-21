#include<stdio.h>
void main(){
	int i;
	int j;
	int a[4][4];
	int b;
printf("Enter the numbers : \n");
 for(i=0;i<=2;i++){
 	for(j=0;j<=2;j++){
 		printf("a[%d][%d]: ",i,j);
 		scanf("%d",&a[i][j]);
 		b=a[i][j];
	 }
 }
 printf("The largest number of array: \n");
  for(i=0;i<=2;i++){
    for(j=0;j<=2;j++){
  		if(b>a[i][j]){
  			
		}
    }
  }
  printf("%d ",b);
}
	  
