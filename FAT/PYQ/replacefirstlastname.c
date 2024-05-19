#include<stdio.h>
#include<string.h>
void reverse_name(char *name){
    char *s=strchr(name,' ');
    char firstname[20];
    char lastname[20];
    strncpy(firstname,name,s-name);
    strcpy(lastname,s+1);
    strcpy(name,lastname);
    strcat(name,", ");
    strcat(name,firstname);
}
int main(){
    char name[20];
    printf("Enter the Name: ");
    scanf("%[^\n]s",&name);
    reverse_name(name);
    printf("%s",name);
    return 0;
}