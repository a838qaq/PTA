#include<stdio.h>
int main(){
    int score;
    scanf("%d", &score);
    if(score < 0 || score > 100){
        printf("The score is out of range!");
    }
    if(score >= 0 && score < 60){
        printf("E");
    }
    if(score >= 60 && score < 70){
        printf("D");
    }
    if(score >= 70 && score < 80){
        printf("C");
    }
    if(score >= 80 && score < 90){
        printf("B");
    }
    if(score >= 90 && score <= 100){
        printf("A");
    }
    return 0;
}