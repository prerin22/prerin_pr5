#include<stdio.h>
void main(){
	int i;
	int j;
	int b;
	int c;
	int d=0;
	int e=0;
	int a[3][3];
printf("Enter the elements: \n");
 for(i=0;i<=2;i++){
 	for(j=0;j<=2;j++){
 		printf("Enter a[%d][%d]: ",i,j);
 		scanf("%d",&a[i][j]);
	 }
 }
printf("Enter number: ");
scanf("%d",&b);
printf("Elements of n: ");
  for(j=0;j<=2;j++){
  	printf("%d , ",a[b][j]);
  	d+=a[b][j];
  }
  printf("\nThe ans is: %d",d);
  
printf("Enter number \n: ");
scanf("%d",&c);
printf("\nElements of n: ");
  for(i=0;i<=2;i++){
  	printf("%d , ",a[i][c]);
  	
	  e+=a[i][c];
  }
  printf("\nThe ans is: %d",e);
}
