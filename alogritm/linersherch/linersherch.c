#include <stdio.h>

int main(void){
	int nmb[] = {0,4,2,5,7,6,8};
	for (int i = 0; i < 7; i++){
		if (nmb[i] == 5){
			printf("found in %i\n", i + 1);
			return 0;
		}
	}
	return 1;
	printf("not found");
}

