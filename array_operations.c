
#include<stdio.h>
#include <stdlib.h>


int insert_at_beging(int arr[], int size){
	int data, i;
	printf("Enter the data: ");
	scanf("%d", &data);
	
	for(i=size-1; i>=0; i--){
		arr[i+1] = arr[i];
	}
	arr[0] = data;
	size++;
	return size;
}
int insert_at_specific_position(int arr[], int size)
{
	int pos, i, data;
		printf("Enter the position: ");
	scanf("%d", &pos);
	if(pos>size){
		printf("Invalid position!");
	}else{
	
	printf("Enter the data: ");
	scanf("%d", &data);
	for(i=size-1; i>pos-1; i--){
		arr[i+1] = arr[i];
	}
	arr[pos-1]=data;
  	size++;
	}
	return size;
}
	int insert_at_end(int arr[], int size){
		int i, data;
		printf("Enter the data");
		scanf("%d", &data);
		size++;
		arr[size-1] = data;
		return size;
	}
	void display(int arr[],int size){
		int i;
		printf("\nThe elements of the array are:\n");
		for(i = 0; i<size; i++){
			printf("%d", arr[i]);
			printf("\n");
		}
	}
	int deletion_from_begining(int arr[], int size){
		int i;
		if(size == 0){
			printf("Underflow");
		}
		for(i=0; i<size; i++){
			arr[i]=arr[i+1];
		}
		size--;
		return size;
	}
	
	int deletion_from_specific_position(int arr[], int size){
		int i, pos;
		printf("Enter the position: ");
		scanf("%d", &pos);
		if(pos<0 || pos>size){
			printf("Position Does not exist!");
		}
		for(i=pos-1; i<= size-1; i++){
			arr[i]=arr[i+1];
		}
		size--;
		return size;
	}
	
	int deletion_from_end(int arr[], int size){
		if(size<=0){
			printf("Underflow Exiting the program....\n");
		}
		size--;
		return size;
	}
	
int main(){
	int arr[10], size, choice, i;
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	if(size == 0){
		printf("Wrong input Exiting the program....\n");
		exit(0);
	}
	printf("Enter the elements of the array: ");
	for(i = 0; i<size; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("The elements of the array are:\n");
	for(i = 0; i<size; i++){
		printf("%d", arr[i]);
		printf("\n");
	}
	
	do{
	printf("\n------ MENU ------\n");
	printf("1. Insert elements in the beginig.\n");
	printf("2. Insert elements in the specific position.\n");
	printf("3. Insert elements at the end.\n");
	printf("4. Delete the 1st element.\n");
	printf("5. Delete from your given position.\n");
	printf("6. Delete the last element.\n");
	printf("0. exit\n");
		
	printf("Enter your choice: ");
	scanf("%d", &choice);
	
	switch(choice){
	case 1: 
	size = insert_at_beging(arr, size);
	break;
	case 2:
    size = insert_at_specific_position(arr, size);
    break;
    case 3:
	size = insert_at_end(arr,size);
	break;
	case 4: 
	size = deletion_from_begining(arr, size);
	break;
	case 5: 
	size = deletion_from_specific_position(arr, size);
	break;
	case 6: 
	size = deletion_from_end(arr, size);
	break;
	default : printf("You entered a wrong choice");
	case 0:
	printf("Exiting the program.....\n");
	exit(0);

	}
	
	display(arr,size);
}while(choice !=0);
	return 0;
	
}
