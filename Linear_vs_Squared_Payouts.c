#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand((unsigned int)time(NULL));
    int total=10000000;
    long long int sum=0;
    int min=1;
    int max=60000;
    //You are given to roll a die and will be paid the number which the die lands on
     for(int i=0;i<total;i++){
        int random_number = (rand() % (max - min + 1)) + min;
        if(random_number%6==1){
            sum=sum+1;
        }
        else if(random_number%6==2){
            sum=sum+2;
        }
        else if(random_number%6==3){
            sum=sum+3;
        }
        else if(random_number%6==4){
            sum=sum+4;
        }
        else if(random_number%6==5){
            sum=sum+5;
        }
        else{
            sum=sum+6;
        }
    }
        printf("%lf  ",1.0*sum/total);
    //Or you are given an other option, you need to pay a $4 first to roll a die and will be paid the square of the number the die lands on
    sum=0;
    for(int i=0;i<total;i++){
        sum=sum-4;
        int random_number = (rand() % (max - min + 1)) + min;
        if(random_number%6==1){
            sum=sum+1;
        }
        else if(random_number%6==2){
            sum=sum+4;
        }
        else if(random_number%6==3){
            sum=sum+9;
        }
        else if(random_number%6==4){
            sum=sum+16;
        }
        else if(random_number%6==5){
            sum=sum+25;
        }
        else{
            sum=sum+36;
        }
    }
    printf("%lf  ",1.0*sum/total);
    //So it is mathematically very favourable to pay $4 and take the square, than just simply rolling the die and take whatever number it lands on.
}
