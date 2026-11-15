/*
 * PRACTICAL 13(b): Write a C Program to Calculate Total and Percentage marks of a student using structure.
 * AIM: Not separately stated in the manual.
 * ALGORITHM: Not separately stated in the manual; define student structure; read roll number, name and three subject marks; calculate total and percentage; display student details, total and percentage.
 * FLOWCHART: Start -> Read student details and marks -> Calculate total -> Calculate percentage -> Display details and results -> Stop.
 * SAMPLE INPUT: RollNo, name and marks: 12 rama 30 40 50
 * EXPECTED OUTPUT: rollno=12; Name=rama; m1=30; m2=40; m3=50; total=120; per=40.000000
 */

#include <stdio.h>
struct Student{int roll;char name[50];float m1,m2,m3;};
int main(void){struct Student s;float total,percentage;printf("Enter roll number and name: ");if(scanf("%d%49s",&s.roll,s.name)!=2)return 1;printf("Enter marks in three subjects: ");if(scanf("%f%f%f",&s.m1,&s.m2,&s.m3)!=3)return 1;if(s.m1<0||s.m1>100||s.m2<0||s.m2>100||s.m3<0||s.m3>100)return 1;total=s.m1+s.m2+s.m3;percentage=total/3.0f;printf("Roll No: %d\nName: %s\nTotal = %.2f\nPercentage = %.2f%%\n",s.roll,s.name,total,percentage);return 0;}