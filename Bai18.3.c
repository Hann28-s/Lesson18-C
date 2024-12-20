#include<stdio.h>
int main(){
	struct Student{
		char fullName[50];
		int age;
		char phone[50]; 
	}; 
    struct Student user;
    for(int i=0;i<5;i++){
    	printf("Sinh vien thu %d.\n",i+1);
		printf("Moi ban nhap ho ten sinh vien: ");
		fgets(user.fullName,sizeof(user.fullName),stdin);
		printf("Moi ban nhap tuoi cua sinh vien: ");
		scanf("%d",&user.age);
		fflush(stdin);
		printf("Moi ban nhap vao so dien thoai sinh vien: ",i);
		fgets(user.phone,sizeof(user.phone),stdin);
}
    printf("\nThong tin cac sinh vien.\n");
    for(int i=0;i<5;i++){
    	printf("Sinh vien thu %d.\n",i+1);
		printf("Ho ten sinh vien: %s\n",user.fullName);
		fflush(stdin);
		printf("Tuoi sinh vien:%d \n",user.age);
		printf("So dien thoai sinh vien:%s \n",user.phone);
	}
	return 0; 
} 
