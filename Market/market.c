#include <stdio.h>

float market(float x, int y){
    
    return x * (100-y)/100;
    //return newprice;
}

int main(void){
     
    float price = market(400,50);
    printf("%.2f\n",price);

}