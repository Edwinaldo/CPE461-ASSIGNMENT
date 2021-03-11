#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>

#define MAX_NAMELENGTH 19
#define NO_OF_COURSES 100

//this program calculates the the  CGPA for a student 5-point grading system
void initialize(char course[NO_OF_COURSES][MAX_NAMELENGTH]);
int main(){
    char course[NO_OF_COURSES][MAX_NAMELENGTH];
    initialize(course);
    getch();
    return 0;
}

void initialize(char course[NO_OF_COURSES][MAX_NAMELENGTH])
{
    printf("This program calculates the  CGPA for a student\r\n");
    printf("How many courses do you offer?  \r\n");
    int size=0;

    int i=0;
    int score, k, TP, b;//declaration TP=total  points, CL= credit load
    scanf("%d",&size);
    int CL[size];
    printf("enter your course code:  \r\n");
	for( int i = 0; i < size; i++)
	{
    scanf("%s", &course[i]);
	}
    int total = 0;
    for(int i = 0; i<size; i++){
        printf("enter the credit load for %s: ", course[i]);
        scanf("%d", &CL[i]);
        total += CL[i];
    }


	for (int i = 0; i < (size); i++)
	{

		printf("Enter your score for %s eg. 100,49, etc:    ", course[i]);
		scanf("%d", &score);

		if (score > 100)
		{
			printf("Error that is out of range! .....\n");
			i--;
			continue;
		}

		else if (score >= 70)
		{
			b = 5;
			printf("A\n");
		}
		else if (score >= 60)
		{
			b = 4;
			printf("B\n");
		}
		else if (score >= 50)
		{
			b = 3;
			printf("C\n");
		}
		else if (score >= 45)
		{
			b = 2;
			printf("D\n");
		}
		else
		{
			b = 0;
			printf("F\n");
		}

		TP += CL[i] * b;

	}

	printf("Your CGPA is %.4f Congratulations!!! ", TP / (float)total);
                return 0;
}

