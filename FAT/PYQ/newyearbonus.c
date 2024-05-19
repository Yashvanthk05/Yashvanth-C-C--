#include<stdio.h>
#include<string.h>

struct employee{
    char name[20];
    int empid;
    char doj[10];
};

int main(){
    int n;
    printf("Enter the Number of Employees: ");
    scanf("%d",&n);
    struct employee emp[n];
    int bonusamt[n];
    int density[n];
    int date,month,year;
    
    // Initialize bonusamt array to 0
    for (int i = 0; i < n; i++) {
        bonusamt[i] = 0;
    }

    for(int i=0;i<n;i++){
        printf("Enter the Employee Name: ");
        scanf("%s", emp[i].name);
        printf("Enter the Employee ID: ");
        scanf("%d", &emp[i].empid);
        printf("Enter the Date of Joining: ");
        scanf("%s", emp[i].doj);
        
        // Calculate year
        year = 0;
        for(int j=6;j<10;j++){
            year = (year * 10 + (emp[i].doj[j] - '0'));
        }
        
        // Calculate density
        density[i] = 0;
        for(int j=0;j<10;j++){
            if(emp[i].doj[j]!='/'){
                density[i]+=emp[i].doj[j] - '0';
            }
        }
        
        // Calculate bonusamt
        if(year<2001){
            bonusamt[i]=10000;
            if(density[i]==9){
                bonusamt[i]+=1000;
            }
        }
        else if(year>=2001 && year<2016){
            bonusamt[i]=6000;
            if(density[i]==9){
                bonusamt[i]+=1000;
            }
        }
        else if(year>=2016 && year<=2023){
            bonusamt[i]=4000;
            if(density[i]==9){
                bonusamt[i]+=1000;
            }
        }
    }
    
    // Print employee bonus amounts
    for(int i=0;i<n;i++){
        printf("Employee Name: %s  Bonus Amount: %d\n", emp[i].name, bonusamt[i]);
    }
    
    // Print employees grouped by density
    for(int i=1;i<13;i++){
        printf("Employees with Density %d are\n",i);
        for(int j=0;j<n;j++){
            if(density[j]==i){
                printf("%s %d\n",emp[j].name,bonusamt[j]);
            }
        }
    }
    return 0;
}
