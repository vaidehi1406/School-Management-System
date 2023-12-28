// Library files

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct student{
    char nam[30];
    char cl[10];
    int rl;
    char date[12];
}s;

int main(){
    int ch;

    while(1){
        system("cls");
        printf(":--------------SCHOOL MANAGEMENT------------:\n\n");
        printf("1. Take Admission\n");
        printf("2. Student Info\n");
        printf("3. Search\n");
        printf("4. Modify\n");
        printf("5. Delete\n");
        printf("6. Sort\n");
        printf("0. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
      
        switch(ch)
        {
            case 0:
                exit(0);
            case 1:
                add();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:
                modify();
                break;
            case 5:
                delete();
                break;
            case 6:
                sort();
                break;    
        }
        printf("/nPress any key to continue.....");
        getch();
    }
    return 0;
}

// Function to add a student's information
void add(){
   
   char myDate[12];
   time_t t=time(NULL);
   struct tm tm = *localtime(&t);
   sprintf(myDate, "%02d/%02d/%d", tm.tm_mon +1, tm.tm_year + 1900);
    printf("%s",myDate);
}

// Function to display all student's information
void display(){
    int i;
}

void search(){

}

void modify(){
    int i;
}

void delete(){
    int i;
}

void sort(){
    int i;
}
