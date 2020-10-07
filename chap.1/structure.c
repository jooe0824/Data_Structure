// struct {
//     char name[10];
//     int grade;
//     char major[20];
// } Student;

// strcpy(student.name, "Juju");
// student.grade = 3;
// strcpy(student.major, "computer science");

// Student Lee; //error

// typedef struct Student
// {
//     char name[10];
//     int grade;
//     char major[20];
// };
// struct Student kim,lee;

// int student_equal(struct Student Juju, struct Student Lee)
// {
//     if (strcmp(Juju.name, Lee.name))
//         return FALSE;
//     if (Juju.grade != Lee.grade)
//         return FALSE;
//     return TRUE;

// }

#include <stdio.h>
#include <string.h>

typedef struct Grade_num{
    int grade;
};

typedef struct Student{
    char name[20];
    struct Grade_num grade;
};

void main(){
    struct Student Juju;
    strcpy(Juju.name, "juju");
    Juju.grade.grade = 3;

    printf("%s\n", Juju.name);
    printf("%d\n", Juju.grade.grade);
}