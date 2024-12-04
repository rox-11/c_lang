#include <stdio.h>


void test(int age ){
	int month = age * 12;
	int day = age * 365;
	int hour = age * 24 * 30 * 12;
	printf("your leaving about %i month, %i day, %i hour \n ",month,day,hour);



}

int main(void){
	printf("this tool is conting your age : put your age \n");
	int age = 18;
	test(age);
}


