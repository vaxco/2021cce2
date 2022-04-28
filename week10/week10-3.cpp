#include <stdio.h>
#include <string.h>
///char name[100][30],tempName[30];
///int grade[100];
class Student{
public:
    char name[30];
    int grade;
};
Student student[100];
int main()
{
    FILE * fin =fopen("input.txt","r");
    int N;

    fscanf(fin, "%d", &N);
    printf("Åª¨ìN¬O: %d\n",N);

    for(int i=0;i<20;i++){
        fscanf(fin,"%s %d",student[i].name,&student[i].grade);
    }

    for(int k=0;k<N-1;k++){
        for(int i=0;i<N-1;i++){
            	if(student[i].grade<student[i+1].grade){
                    Student temp=student[i];
                    student[i]=student[i+1];
                    student[i+1]=temp;
            }
        }
    }
    for(int i=0;i<20;i++){
        printf("%s %d\n",student[i].name,student[i].grade);
    }
}

