#include<stdio.h>
int main(){
	struct Student{
		char fullName[50];
		int age;
		char phoneNumber[50]; 
	}; 
	struct Student user; 
	printf("Moi ban nhap vao ho ten sinh vien: ");
	fgets(user.fullName,sizeof(user.fullName),stdin);
	printf("Moi ban nhap vao tuoi sinh vien: ");
	scanf("%d",&user.age);
	fflush(stdin);
	printf("Moi ban nhap vao so dien thoai sinh vien: ");
	fgets(user.phoneNumber,sizeof(user.phoneNumber),stdin);
	printf("Ho ten sinh vien la: %s\n",user.fullName);
	printf("Tuoi cua sinh vien la: %d\n",user.age);
	printf("So dien thoai sinh vien la: %s\n",user.phoneNumber); 
	return 0;
}
