#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand((unsigned int)time(NULL));
    int total=10000000;
    long long int sum=0;
    int min=1;
    int max=10000;
    //take $500
    for(int i=0;i<total;i++){
        sum=sum+500;
    }
    printf("%lf  ",1.0*sum/total);
    //or flip a coin, if it lands on head you get $1200, tail you get nothing
    sum=0;
    for(int i=0;i<total;i++){
        int random_number = (rand() % (max - min + 1)) + min;
        if(random_number%2){
            sum=sum+1200;
        }
    }
    printf("%lf  ",1.0*sum/total);
}
//playing this game for large number of times, then it's best to choose strategy 2, as it mathematically favourable.