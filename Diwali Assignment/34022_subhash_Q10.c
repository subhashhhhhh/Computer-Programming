#include<stdio.h>
int main()
{
    printf("Subhash Gottumukkala (34022)\n");
	int roll_number,mark;
    char name;
    printf("Enter the roll number of student: ");
    scanf("%d", &roll_number);
    printf("\nEnter the name of student: ");
    scanf("%s", &name);
	printf("\nEnter the total mark of student: ");
	scanf("%d",&mark);
	if(mark>95&&mark<=100)
	{
		printf("\nGrade Details");
        printf("\n%d %s %d A+", roll_number,&name,mark);
	}
	else if(mark>90&&mark<=95)
	{
		printf("\nGrade Details");
        printf("\n%d %s %d A", roll_number,&name,mark);
	}
	else if(mark>80&&mark<91)
	{
		printf("\nGrade Details");
        printf("\n%d %s %d B", roll_number,&name,mark);
	}
	else if(mark>70&&mark<81)
	{
		printf("\nGrade Details");
        printf("\n%d %s %d C", roll_number,&name,mark);
	}
	else if(mark>60&&mark<71)
	{
		printf("\nGrade Details");
        printf("\n%d %s %d D", roll_number,&name,mark);
	}
	else if(mark>49&&mark<61)
	{
		printf("\nGrade Details");
        printf("\n%d %s %d E", roll_number,&name,mark);
	}
	else if(mark>=0&&mark<50)
	{
		printf("\nGrade Details");
        printf("\n%d %s %d F", roll_number,&name,mark);
	}
	else
	{
		printf("Invalid Mark");
	}
	return 0;
}