#include <stdio.h>
int i, j, temp, array[100];
int main(){
	//prompt
	printf("Please type five integers (end with <Enter>): ");  
	
	//read the array
	for(i=0;i<5;i++) {
		scanf("%d", &array[i]);
	}
	
	//sort the numbers
	for(i=0;i<5;i++) {
		for(j=0;j<4;j++){
			if(array[j]>array[j+1]) {
				//swap numbers
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	
	//print out the sorted array
	printf("The sorted array is: ");
	for(i=0;i<5;i++){
		printf("%d ", array[i]);
	}
}