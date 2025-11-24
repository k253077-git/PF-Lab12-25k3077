#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,*arr,i,total=0,net=0;
	printf("Enter number of days: ");
	scanf("%d",&n);
	
	arr=(int *)malloc(n*sizeof(int));
	printf("Enter %d sales:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		total+=arr[i];
	}
	printf("Total sales so far %d",total);
	
	int n2,ntotal=0;
	printf("\nenter new number of days: ");
	scanf("%d",&n2);
	arr=(int *)realloc(arr,n2*sizeof(int));
	
	if(n2>n){
		printf("Enter %d new sales\n",n2-n);
		for(i=n;i<n2;i++){
			scanf("%d",&arr[i]);
			ntotal+=arr[i];
		}
	}
     net=total+ntotal;
       printf("Total sales is %d",net);
}
