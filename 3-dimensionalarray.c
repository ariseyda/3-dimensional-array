#include<stdio.h>

//Assume that there are 3 students and they are taking 2 different courses. 
//As two exams are given for each courses, use 3-dimensional array to create the table that consists the grades of students. 
//Later on ask the user which student’s grades should be showed on the console. 

int main(){
	
	int array[3][2][2]={{  {  {57} , {88}  }  ,   {   {45} , {66} }    } , {  {  {24} , {98}  }  ,   {   {95} , {63} }    } , {  {  {77} , {39}  }  ,   {   {75} , {65} }    }}	;
	
	int n,i,j,k;
	printf("Which student's grades would you like to see?(1th,2th or 3th?)");
	scanf("%d",&n);
	
	printf("First grade of the first lesson of %dth student:%d\n",n,array[n-1][0][0]);
	printf("Second grade of the first lesson of %dth student:%d\n",n,array[n-1][0][1]);
	printf("First grade of the second lesson of %dth student:%d\n",n,array[n-1][1][0]);
	printf("Second grade of the second lesson of %dth student:%d\n",n,array[n-1][1][1]);
	
	
	return 0;
}
