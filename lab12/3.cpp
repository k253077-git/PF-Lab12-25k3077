#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int n,i,j;
	printf("Enter size: ");
	scanf("%d",&n);
	getchar();
	
	char **str=(char **)malloc(n * sizeof(char *));	
	if(str==NULL){
		printf("Memory Allocation Failed");
	}
	
	for(i=0;i<n;i++){
		char temp[100];
			printf("Enter string %d ",i+1);
		fgets(temp,sizeof(temp),stdin);
		temp[strcspn(temp,"\n")]='\0';
		
		str[i]=(char*)malloc((strlen(temp)+1)* sizeof(char*));   // specific memoery
		strcpy(str[i],temp);
	}
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(str[i],str[j])>0){
				char *temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	printf("Sorted string\n");
	for(i=0;i<n;i++){
		printf("%s\n",str[i]);
		free(str[i]);
	}
	free(str);
	
}
