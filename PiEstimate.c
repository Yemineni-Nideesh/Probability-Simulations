#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand((unsigned int)time(NULL));
    int total=10000000;
    int inside=0;
    for(int i=0;i<total;i++){
        double x = (double)rand() / RAND_MAX; 
        double y = (double)rand() / RAND_MAX;
        if((x*x+y*y)<=1){
            inside++;
        }
    }
    printf("%lf  ",4.0*inside/total);
}
