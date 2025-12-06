/*
Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

void writeStudentRecords(const char *filename, struct Student students[], int count) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        fprintf(file, "%s %d %d\n", students[i].name, students[i].roll, students[i].marks);
    }
    fclose(file);
}

void readStudentRecords(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }
    struct Student student;
    while (fscanf(file, "%s %d %d", student.name, &student.roll, &student.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", student.name, student.roll, student.marks);
    }
    fclose(file);
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter Name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter Roll number of student %d: ", i + 1);
        scanf("%d", &students[i].roll);
        printf("Enter Marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
        printf("\n");
    }
    const char *filename = "students.txt";
    writeStudentRecords(filename, students, n);
    printf("\nStudent Records:\n");
    readStudentRecords(filename);
    return 0;
}
