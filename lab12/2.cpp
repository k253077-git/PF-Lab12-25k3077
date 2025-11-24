#include <stdio.h>
#include <stdlib.h>

int main(){
	int *arr;
	int n;
	printf("Enter the size: ");
	scanf("%d",&n);
	
	arr=(int *)malloc(n*sizeof(int));
	if(arr==NULL){
		printf("Memory allocation failed");
	}
	printf("Enter %d elements of array:\n",n);
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	int newsize=2*n;
	arr=(int *)realloc(arr,newsize);
	
	printf("Enter %d more new elements:\n",n);
	for(int i=n;i<newsize;i++){
		scanf("%d",&arr[i]);
	}
//	updated array
    for(int i=0;i<newsize;i++){
    	printf("%d ",arr[i]);
	}
free(arr);
	
	
}
