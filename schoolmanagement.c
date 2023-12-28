// Library files

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int ch;

    while(1){
        system("cls");
        printf(":--------------SCHOOL MANAGEMENT------------:");
        printf("1. Take Admission\n");
        printf("2. Student Info\n");
        printf("3. Search\n");
        printf("4. Modify\n");
        printf("5. Delete\n");
        printf("6. Sort\n");
        printf("0. Exit\n\n");
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
    }
}
