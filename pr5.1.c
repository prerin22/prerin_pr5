#include<stdio.h>
void main(){
	int b;
	int p;
	int a[p];
printf("Enter the lenght of array : ");
scanf("%d",&b);

printf("Enter the number of A: \n");
   for(p=0;p<b;p++){
   	  printf(" a[%d]: ",p);
   	  scanf("%d",&a[p]);
   }
printf("Negative numbers from Array: ");
 for(p=0;p<b;p++){
	if(a[p]<0){
		printf("a[%d]=%d\n",p,a[p]);
	}
 }
}
