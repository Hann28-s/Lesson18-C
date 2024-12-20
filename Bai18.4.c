#include <stdio.h>
struct Student {
    int id;
    char name[100];
    int age;
    char phoneNumber[15];
} students[50]; 

int main() {
    char temp[100];
    int numStudents = 5; 
    for (int i = 0; i < numStudents; i++) {
        students[i].id = i + 1;
        printf("Nhap thong tin cho sinh vien thu %d:\n", i + 1);
        printf("Ho va ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Tuoi: ");
        fgets(temp, sizeof(temp), stdin);
        students[i].age = atoi(temp);
        printf("So dien thoai: ");
        fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);
    }
    printf("\nThong tin cac sinh vien:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Ho va ten: %s", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}
