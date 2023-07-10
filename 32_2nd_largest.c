#include <stdio.h>
void array(int arr[], int limit){
	int i,largest=arr[0],second_l,small=arr[0],second_s,third_l;
	for (i=1;i<limit;i++){
		if(arr[i]>largest){
			third_l=second_l;
			second_l=largest;
			largest=arr[i];
		}else if(arr[i]>second_l){
			third_l = second_l;
			second_l = arr[i];
		}else if(arr[i]>third_l){
			third_l = arr[i];
		}

		if(arr[i]<small){
			second_s=small;
			small = arr[i];
		}else if(arr[i]<second_s){
			second_s = arr[i];
		}
	}printf("second largest = %d\n",second_l);
	printf("second smallest = %d\n",second_s);
	printf("third largest = %d",third_l);

}