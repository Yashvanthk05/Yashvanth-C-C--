#include<stdio.h>
int main(){
   float scores[8];
    for(int i=0;i<8;i++){
        printf("Enter the Score by Judge %d: ",i+1);
        scanf("%f",&scores[i]);
    }
    float maxscore=scores[0],minscore=scores[0];
    int maxindex=0,minindex=0;
    for(int i=0;i<8;i++){
        if(maxscore<scores[i]){
            maxscore=scores[i];
            maxindex=i;
        }
        if(minscore>scores[i]){
            minscore=scores[i];
            minindex=i;
        }
    }
    printf("Maximum Score Awarded: %0.1f\nMinimum Score Awarded: %0.1f\n",maxscore,minscore);
    scores[maxindex]=0;
    scores[minindex]=0;
    float totalscore=0;
    for(int i=0;i<8;i++){
        totalscore+=scores[i];
    }
    printf("Total Score Awarded: %0.1f",totalscore);
    return 0;
}