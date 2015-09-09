#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Student{
	int id;
	char name[20];
}student;
student *get_data();
void display_data(student *st);
int main(int argc, char **argv)
{

	student *st[4] = { NULL };
	
	for (int i = 0; i < 5; i++){
		st[i] = get_data();
	}

	for (int i = 0; i < 5; i++){
		display_data(st[i]);
	}
	
	return 0;
}
student *get_data(){
	student *ss;
	char name[20];
	ss = malloc(sizeof(student));
	printf("age\n");
	scanf_s("%d", &ss->id, sizeof(ss->id));
	printf("name\n");
	scanf_s("%s", name, sizeof(name));
	strcpy_s(&ss->name,20, name);
	return ss;
}
void display_data(student *st){
	printf("나이: %d\n", st->id);
	printf("이름: %s\n", st->name);
}