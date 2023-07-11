#include<stdio.h>
void main(){
int j,i,n1,n2;

printf("Enter array A size:");
scanf("%d",&n1);

int a[j],c[j];

printf("Enter array A element:\n");
for(j=0;j<n1;j++) {
	printf("a[%d]=",j++);
	scanf("%d",&a[j]);
	c[j]=a[j];
}
   i=j;
 printf("Enter array B size:");
scanf("%d",&n2);
int b[j];
printf("Enter array B element:\n");
 
 for(j=0;j<n2;j++){
	printf("a[%d]=",j);
	scanf("%d",&a[j]);
	c[j]=b[j];
	i++;
}
printf("\nArray C is : \n");
for(j=0;j<i;j++) {
printf("%d",c[j]);
}

}

