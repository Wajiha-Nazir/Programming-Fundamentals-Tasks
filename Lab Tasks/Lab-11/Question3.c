#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_EMPLOYEES 100

typedef struct {
    int id;
    char name[50];
    char department[20];
    char designation[20];
    float salary;
    int joinDay, joinMonth, joinYear;
    char phone[15];
    char email[50];
} Employee;

Employee employees[MAX_EMPLOYEES];
int employeeCount=0;

void addEmployee();
void displayEmployee(Employee e);
void departmentStats();
int experience(Employee e);
void promotionEligibility();
void searchEmployees();

int main(){
    int choice, i;
    do{
        printf("\n--- Employee Record System ---\n");
        printf("1.Add Employee\n2.Display All\n3.Department Stats\n4.Promotion Eligibility\n5.Search\n0.Exit\n");
        printf("Enter choice: "); scanf("%d",&choice);
        switch(choice){
            case 1: addEmployee(); break;
            case 2: for(i=0;i<employeeCount;i++) displayEmployee(employees[i]); break;
            case 3: departmentStats(); break;
            case 4: promotionEligibility(); break;
            case 5: searchEmployees(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n"); break;
        }
    }while(choice!=0);
    return 0;
}

void addEmployee(){
    if(employeeCount>=MAX_EMPLOYEES){ printf("Max employees reached!\n"); return;}
    Employee e;
    e.id = employeeCount+1;
    printf("Enter name: "); getchar(); fgets(e.name,50,stdin); e.name[strcspn(e.name,"\n")]=0;
    printf("Department (IT/HR/Finance/Marketing/Operations): "); scanf("%s",e.department);
    printf("Designation (Intern/Junior/Senior/Manager/Director): "); scanf("%s",e.designation);
    printf("Salary: "); scanf("%f",&e.salary);
    printf("Joining Date (DD MM YYYY): "); scanf("%d %d %d",&e.joinDay,&e.joinMonth,&e.joinYear);
    printf("Phone: "); scanf("%s",e.phone);
    printf("Email: "); scanf("%s",e.email);
    employees[employeeCount++]=e;
    printf("Employee added successfully!\n");
}

void displayEmployee(Employee e){
    printf("ID:%d, Name:%s, Dept:%s, Designation:%s, Salary:%.2f, Joined:%02d/%02d/%04d, Phone:%s, Email:%s, Exp:%d yrs\n",
           e.id,e.name,e.department,e.designation,e.salary,e.joinDay,e.joinMonth,e.joinYear,e.phone,e.email,experience(e));
}

int experience(Employee e){
    time_t t=time(NULL); struct tm tm=*localtime(&t);
    int years = tm.tm_year+1900 - e.joinYear;
    if(tm.tm_mon+1<e.joinMonth || (tm.tm_mon+1==e.joinMonth && tm.tm_mday<e.joinDay)) years--;
    return years;
}

void departmentStats(){
	int i;
    if(employeeCount==0){ printf("No employees.\n"); return;}
    char dept[20];
    printf("Enter department: "); scanf("%s",dept);
    int count=0; float total=0;
    for(i=0;i<employeeCount;i++){
        if(strcmp(employees[i].department,dept)==0){ total+=employees[i].salary; count++; }
    }
    if(count==0) {printf("No employees in %s.\n",dept); return;}
    printf("Department: %s, Employees:%d, Avg Salary: %.2f\n",dept,count,total/count);
}

void promotionEligibility(){
	int i;
    if(employeeCount==0){ printf("No employees.\n"); return;}
    printf("Employees eligible for promotion (>3 years):\n");
    for(i=0;i<employeeCount;i++)
        if(experience(employees[i])>3) displayEmployee(employees[i]);
}

void searchEmployees(){
	int i;
    if(employeeCount==0){ printf("No employees.\n"); return;}
    int choice;
    printf("Search by 1.Department 2.Designation 3.Experience: "); scanf("%d",&choice);
    if(choice==1){ char dept[20]; printf("Enter department: "); scanf("%s",dept);
        for(i=0;i<employeeCount;i++) if(strcmp(employees[i].department,dept)==0) displayEmployee(employees[i]); }
    else if(choice==2){ char des[20]; printf("Enter designation: "); scanf("%s",des);
        for(i=0;i<employeeCount;i++) if(strcmp(employees[i].designation,des)==0) displayEmployee(employees[i]); }
    else if(choice==3){ int yrs; printf("Enter experience in years: "); scanf("%d",&yrs);
        for(i=0;i<employeeCount;i++) if(experience(employees[i])>=yrs) displayEmployee(employees[i]); }
    else printf("Invalid choice!\n");
}

