#include <stdio.h>
//Declaring the struct
struct Person{
	char name[50];
	int age;
	char cellphone[10];
	float weight;
	float height;
};

int main(){
	//Using the struct
	struct Person person1;
	printf("Please enter your name\n");
	scanf("%s",person1.name);
	printf("Please enter your age\n");
	scanf("%d",&person1.age);

	person1.weight = 80;
	person1.height = 1.80;
	return 0;
}
