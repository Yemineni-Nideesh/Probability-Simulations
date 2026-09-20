#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand((unsigned int)time(NULL));
    int total=10000000;
    long long int sum=0;
    int min=1;
    int max=10000;
    for(int i=0;i<total;i++){
        int random_number = (rand() % (max - min + 1)) + min;
        if(random_number%2){
            sum=sum+100;
        }
        else{
            sum=sum-50;
        }
    }
    printf("%lf  ",1.0*sum/total);
}
