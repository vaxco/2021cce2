#include <stdio.h>
#include <vector>
#include <algorithm>
///char name[100][30],tempName[30];
///int grade[100];
class Student{
public:
    char name[30];
    int grade;
};
bool compare(Student a,Student b){
    return (a.grade>b.grade);
}
int main()
{
    FILE * fin =fopen("input.txt","r");
    int N;
    fscanf(fin, "%d", &N);

    std::vector<Student> student(20);
    for(int i=0;i<20;i++){
        fscanf(fin,"%s %d",student[i].name,&student[i].grade);
    }

        std::sort(student.begin(),student.end(),compare);

    for(int i=0;i<20;i++){
        printf("%s %d\n",student[i].name,student[i].grade);
    }
}


