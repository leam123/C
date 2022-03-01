#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//SABTA LANG NINYO KUNG KASABOT MO......
typedef struct{
	char name[50];
	int idNum;
	float score[3];
	float total;
}Student;
//array - 3 students
void total(Student s[]){
	int i, j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			s[i].total += s[i].score[j];
		}
	//	s[i].total = s[i].score[0] + s[i].score[1] + s[i].score[2];
	}
}
void display(Student s[]){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<1;j++){
			printf("\nName: %s\nid: %d\n: %.2f\n: %.2f\n: %.2f\n: %.2f\n",s[i].name,s[i].idNum,s[i].score[j],s[i].score[j+1],s[i].score[j+2],s[i].total);
		}	
	//	printf("\nName: %s\nid: %d\n: %.2f\n: %.2f\n: %.2f\n: %.2f\n",s[i].name,s[i].idNum,s[i].score[0],s[i].score[1],s[i].score[2],s[i].total);
	}	
}
// 1 student ra ni DILI MO GANAAAA ANGGGG TOOOTAAALLLLL!!!!!! WAAAAAAAAAAHHHHHHHHHH
/*void total1(Student s){
	s.total = s.score[0] + s.score[1] + s.score[2];
}
void display1(Student s){
	printf("\n1 student ra ni\nName: %s\nIdNum: %d\n: %d\n: %d\n: %d\n: %.2f\n",s.name,s.idNum,s.score[0],s.score[1],s.score[2],s.total);
}*/
int main(){
	int i,j;
	Student s[3] = {{"Pooh",1678,{16,45,45},0.0},{"Piglet",1680,{17,45,46},0.0},{"Tiger",1679,{17,44,43},0.0}};
	//Student stu= {"Pooh",1678,{16,45,45},0.0};
	//printf("Array of students ni.....");
	total(s);
	//display(s);
	printf("\nName: %s\nid: %d\n: %.2f\n: %.2f\n: %.2f\n: %.2f\n",s[2].name,s[2].idNum,s[2].score[0],s[2].score[1],s[2].score[2],s[2].total);
	//total1(stu);
	//display1(stu);
	return 0;
}
