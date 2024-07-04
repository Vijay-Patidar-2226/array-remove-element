#include<stdio.h>
int main(){
	int n;
	printf("enter array  size :");
	scanf("%d",&n);
	
	int arr[10],key,index;
	
	for(int i=0;i<n;i++){
		printf("enter array element :");
		scanf("%d",&arr[i]);
	}
	
	printf("enter remove element :");
	scanf("%d",&key);
	
	index=n-1;
	for(int i=0;i<=index;i++){
		if(arr[i]==key){
			for(int j=i+1;j<=index;j++)
				arr[j-1]=arr[j];
			
			i--;
			index--;
		}	
	}
	printf("\n after remove array element %d",key);
	
	for(int i=0;i<n-1;i++){
		printf("\n remaining array element %d",arr[i]);
	}
}