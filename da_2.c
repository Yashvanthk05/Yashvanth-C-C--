#include<stdio.h> //importing standard input output library
#include<stdlib.h> //importing standard library
#include<string.h> //importing string library
struct EmployeeInfo{ //creating structure with name 'EmployeeInfo'
    int employeeid; //declaring integer variable 'employeeid'
    char name[20]; //declaring char variable 'name' of length 20
    char department[20]; //declaring char variable 'department' of length 20
    float salary; //declaring float variable 'salary' 
    char location[20]; //declaring char variable 'location' of length 20
    union AdditionalInfo{ //declaring embedded union 'AdditionalInfo'
        struct{ //declaring embedded structure engineering department additional info
            char programminglang[20]; //declaring char variable programminglang of length 20
            char softwaredev[20]; //declaring char variable softwaredev of length 20
        }engaddinfo;
        struct{ //declaring embedded structure market department additional info
            char targetaud[20]; //declaring char varible targetaud of length 20
            char marketingstrat[20];
        }marketaddinfo;
        struct{ //declaring embedded structure finance department additional info
            char expertise[20]; //declaring char variable expertise of length 20
        }financeaddinfo;
    }addinfo;
};
void display(struct EmployeeInfo employee[],struct EmployeeInfo *empptr[],int engcount[],int eng1count[],int marketcount[],int market1count[],int financecount[],int n);
/*creating union within the struct because user gives only one department at a time to a person so we need one department's additional info at one runtime*/
int main(){
    int n; //variable to store no. of employees
    printf("Enter the Number of Employee Records to be Stored: ");
    scanf("%d",&n);getchar(); //input for no. of employees
    int engcount[n]={},marketcount[n]={},financecount[n]={},eng1count[n]={},market1count[n]={}; //declaring integer varible for the purpose of printing the additional if they got stored
    struct EmployeeInfo employee[n],*empptr[n]; //calling the EmployeeInfo struct by normal object and pointer object
    for(int i=0;i<n;i++){ //printing n employee's details
        empptr[i]=&employee[i]; //Giving the Object Pointer Normal Object's Address
        printf("Enter the Employee Name: ");scanf("%[^\n]",empptr[i]->name);getchar(); //input for employee name,getchar removes newline character
        printf("Enter the Employee ID: ");scanf("%d",&empptr[i]->employeeid);getchar(); //input for employee id,getchar removes newline character
        printf("Enter the Employee Salary: ");scanf("%f",&empptr[i]->salary);getchar(); //input for employee salary,getchar removes newline character
        printf("Enter the Employee Department: ");scanf("%[^\n]",empptr[i]->department);getchar(); //⁡input for employee department,getchar removes newline character
        printf("Enter the Employee Location: ");scanf("%[^\n]",empptr[i]->location);getchar(); //input for employee location,getchar removes newline character
        // [^\n] gets input till newline character appears (similar to fgets)
        if(strcmp(employee[i].department,"Engineering")==0){ //condition to get additional info if it is engineering department
            engcount[i]++; //increasing condition by 1
            printf("Enter the Programming Language the Employee specialize in: ");
            scanf("%[^\n]",empptr[i]->addinfo.engaddinfo.programminglang);getchar(); //input for programming language,getchar removes newline character
            if((strcmp(employee[i].location,"United States")==0)||(strcmp(empptr[i]->location,"Canada")==0)){ //checking whether employee location is United states or canada
                eng1count[i]++; //increasing condition by 1
                printf("Enter the Employee Software Development Type: ");scanf("%[^\n]",empptr[i]->addinfo.engaddinfo.softwaredev);getchar(); //input for software development,getchar removes newline character
            }
        }
        else if(strcmp(employee[i].department,"Marketing")==0){ //condition to get additional info if it is marketing department
            marketcount[i]++; //increasing condition by 1
            printf("Enter the Employee Target Audience: ");scanf("%[^\n]",empptr[i]->addinfo.marketaddinfo.targetaud);getchar(); //input for target audience,getchar removes newline character
            if(strcmp(employee[i].location,"Europe")==0){ //checking whether employee location is Europe
                market1count[i]++; //increasing condition by 1
                printf("Enter the Employee Marketing Stratergy: ");scanf("%[^\n]",empptr[i]->addinfo.marketaddinfo.marketingstrat);getchar(); //input for marketing stratergy,getchar removes newline character
            }
        }
        else if(strcmp(employee[i].department,"Finance")==0){ //condition to get additional info if it is finance department
            financecount[i]++; //increasing condition by 1
            printf("Enter the Employee Area of Expertise: ");scanf("%[^\n]",empptr[i]->addinfo.financeaddinfo.expertise);getchar(); //input for area of expertise
        }
    }
    display(employee,empptr,engcount,eng1count,marketcount,market1count,financecount,n);
}
void display(struct EmployeeInfo employee[],struct EmployeeInfo *empptr[],int engcount[],int eng1count[],int marketcount[],int market1count[],int financecount[],int n){
    for(int i=0;i<n;i++){ //Iterating Through 'n' employee's details
        printf("\n<----------------------------------------->\n");
        printf("Printing the Details Using Dot(.) Operator\n"); //printing employee details using dot operator
        printf("<----------------------------------------->\n");
        printf("Employee ID: %d\n",employee[i].employeeid); //printing employee id
        printf("Employee Name: %s\n",employee[i].name); //printing employee name
        printf("Employee Salary: %0.2f\n",employee[i].salary); //printing employee salary
        printf("Employee Department: %s\n",employee[i].department); //printing employee department
        printf("Employee Location: %s\n",employee[i].location); //printing employee location
        if(engcount[i]>0){ //if programming language is inputted then it should be printed condition
            printf("Employee Specialised Programming Language: %s\n",employee[i].addinfo.engaddinfo.programminglang); //printing employee programming language
            if(eng1count[i]>0){ //if software development is inputted then it should be printed condition
                printf("Employee Software Development Type: %s\n",employee[i].addinfo.engaddinfo.softwaredev); //printing employee software development
            }
        }
        else if(marketcount[i]>0){ //if target audience is inputted then it should be printed condition
            printf("Employee Target Audience: %s\n",employee[i].addinfo.marketaddinfo.targetaud); //printing Employee's Target Audience
            if(market1count[i]>0){ //if marketing stratergy is inputted then it should be printed condition
                printf("Employee Marketing Stratergy: %s\n",employee[i].addinfo.marketaddinfo.marketingstrat); //printing Employee's marketing stratergy
            }
        }
        else if(financecount[i]>0){ //if area of expertise is inputted then it should be printed condition
            printf("Employee Area of Expertise: %s\n",employee[i].addinfo.financeaddinfo.expertise); //printing area of expertise
        }
        printf("\n<----------------------------------------->\n");
        printf("Printing the Details Using Arrow(->) Operator\n"); //printing Employee's detail using dot operator
        printf("<----------------------------------------->\n");
        printf("Employee ID: %d\n",empptr[i]->employeeid); //printing employee id
        printf("Employee Name: %s\n",empptr[i]->name); //printing employee name
        printf("Employee Salary: %0.2f\n",empptr[i]->salary); //printing employee salary
        printf("Employee Department: %s\n",empptr[i]->department); //printing employee department
        printf("Employee Location: %s\n",empptr[i]->location); //printing employee location
        if(engcount[i]>0){ //if programming language is inputted then it should be printed condition
            printf("Employee Specialised Programming Language: %s\n",empptr[i]->addinfo.engaddinfo.programminglang); //printing employee programming language
            if(eng1count[i]>0){ //if software development is inputted then it should be printed condition
                printf("Employee Software Development Type: %s\n",empptr[i]->addinfo.engaddinfo.softwaredev); //printing employee software development
            }
        }
        else if(marketcount[i]>0){ //if target audience is inputted then it should be printed condition
            printf("Employee Target Audience: %s\n",empptr[i]->addinfo.marketaddinfo.targetaud); //printing Employee's Target Audience
            if(market1count[i]>0){ //if marketing stratergy is inputted then it should be printed condition
                printf("Employee Marketing Stratergy: %s\n",empptr[i]->addinfo.marketaddinfo.marketingstrat); //printing Employee's marketing stratergy
            }
        }
        else if(financecount[i]>0){ //if area of expertise is inputted then it should be printed condition
            printf("Employee Area of Expertise: %s\n",empptr[i]->addinfo.financeaddinfo.expertise); //printing area of expertise
        }
    }
    printf("Thank You!!!\n"); //Printing Final Message
}