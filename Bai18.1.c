#include<stdio.h>
int main(){
	struct Student{
		char fullName[50];
		int age;
		char phoneNumber[50]; 
	}; 
	struct Student user={"Nguyen Manh Hung",18,"0123456789"};
	printf("Ho ten sinh vien la: %s\n",user.fullName);
	printf("Tuoi cua sinh vien la: %d\n",user.age);
	printf("So dien thoai sinh vien la: %s\n",user.phoneNumber); 
	return 0; 
} 
