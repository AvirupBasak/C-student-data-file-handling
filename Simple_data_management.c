/*Write a c Programe to take in puts of n numbers of students and print into the file. After this read the content of file and print 
in the terminal.
Take input of student given contents. the contents are given bellow :-
Name,roll,cgpa */

#include<stdio.h>
#include<stdint.h>
#include<string.h>

struct studentinformation{
    char name[20];
    int roll;
    float cgpa;
}stu[100];


void take_inputfile(){
    int i,n;
    printf("Enter how many data you want to store = ");
    scanf("%d",&n);
    getchar(); // To consume the newline character left by scanf
    for(i=0;i<n;i++){
        printf("Entering student number %d data -\n",i+1);
        printf("Enter Student name - \n");
        // Using fgets to read string input with spaces
        fgets(stu[i].name,sizeof(stu[i].name), stdin);
        stu[i].name[strcspn(stu[i].name, "\n")] = '\0'; // Remove newline character if present, 0 is just the integer zero, but in this context, assigning 0 to a char element means putting a null terminator there.
        printf("Enter Student ROLL - \n");
        scanf("%d",&stu[i].roll);
        printf("Enter Student CGPA - \n");
        scanf("%f",&stu[i].cgpa);
        getchar();
    }
    FILE*fptr;
    fptr=fopen("Studentdata.txt","w");
    for(i=0;i<n;i++){
        fprintf(fptr,"Student number %d data -\n",i+1);
        fprintf(fptr,"Student name - %s\n",stu[i].name);
        fprintf(fptr,"Student Roll - %d\n",stu[i].roll);
        fprintf(fptr,"Student CGPA - %.2f\n",stu[i].cgpa);
    }
    fclose(fptr);
}

void print_file(){
    FILE*fptr;
    fptr=fopen("Studentdata.txt","r");
    char ch;
    ch = fgetc(fptr);
    while(ch != EOF){
        printf("%c",ch);
        ch = fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
}

int main(){
    take_inputfile();
    printf("Your entered data's are -> \n");
    print_file();
    return 0;
}