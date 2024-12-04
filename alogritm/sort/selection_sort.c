#include <stdio.h>

int main(void){

	int a[7] = {4,6,7,2,8,3,1}; 

	for (int i = 0; i < 7; i++){
		for (int j = a[i]; j < 7; j++)
			if (j>a[i+1]){
				printf("%i",j);
			}
	}
}
