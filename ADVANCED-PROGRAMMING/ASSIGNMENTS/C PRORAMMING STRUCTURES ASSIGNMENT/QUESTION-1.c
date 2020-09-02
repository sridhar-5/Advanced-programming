#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

struct student {
	int rollno;
	char name[150];
	float sem1;
	float sem2;
	float cgpa;
};

int main()
{
	int n,i;
	printf("please enter the no of students in the class : ");
	scanf("%d",&n);
	struct student s[n];
	for (i = 0;i < n; i++)
	{
		printf("please enter the roll no of student : ");
		scanf("%d",&s[i].rollno);
		printf("\n please enter the name of the student : ");
		scanf("%s",&s[i].name);
		printf("\n please enter the semester-1 grade : ");
		scanf("%f",&s[i].sem1);
		printf("\n please enter the semester-2 garde : ");
		scanf("%f",&s[i].sem2);	
	}
	for (i = 0; i < n; i++)
	{
		s[i].cgpa = (s[i].sem1 + s[i].sem2)/2 ;
	}
	
	printf("ROLL-NO \t \tNAME \t \tSEMESTER-1 \t \tSEMESTER-2 \t \tCGPA");
	for (i = 0; i < n;i++)
	{
		
		printf("\n %d \t \t \t%s \t \t%.2f \t \t \t%.2f \t \t \t%.2f",s[i].rollno,s[i].name,s[i].sem1,s[i].sem2,s[i].cgpa);
	}
	
}
