#include<stdio.h>
#include<math.h>
#include<string.h>
struct ball{
    char color[10];
    float diameter;
    float weight;
};
void findVolume(struct ball b){
    printf("Volume of the Ball: %0.2f\n",(4/3)*M_PI*pow((b.diameter)/2,3));
}
void check(struct ball b){
    if((strcmp(b.color,"red")==0) && b.diameter<41){
        printf("The Ball Can Pass the Tunnel\n");
        findVolume(b);
    }
    else if((strcmp(b.color,"black")==0) && b.weight<3){
        printf("The Ball Can Pass the Tunnel\n");
        findVolume(b);
    }
    else if(b.diameter<100 && b.weight<100){
        printf("The Ball Can Pass the Tunnel\n");
        findVolume(b);
    }
    else{
        printf("The Ball Cannot Pass through the Tunnel");
    }
}
int main(){
    int n;
    printf("Enter the Numbers of Balls to be Passed: ");
    scanf("%d",&n);
    struct ball b[n];
    for(int i=0;i<n;i++){
        printf("Enter the Ball Color: ");
        scanf("%s",&b[i].color);
        printf("Enter the Ball Diameter: ");
        scanf("%f",&b[i].diameter);
        printf("Enter the Ball Weight: ");
        scanf("%d",&b[i].weight);
    }
    for(int i=0;i<n;i++){
        check(b[i]);
    }
    return 0;
}