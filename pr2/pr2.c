#include<stdio.h>
void main()
{
	char grade,a ;
	int marks;
	
	printf("enter your marks:");
	scanf("%d",&marks);
	
	grade=(marks>=90 && marks<=100)?'a'
	:(marks>=80 && marks<90)?'b'
	:(marks>=70 && marks<80)?'c'
	:(marks>=60 && marks<70)?'d'
	:(marks>=50 && marks<60)?'e'	
    :'f';
    
	printf("your grade is %c ",grade);	
	switch(grade)
	{
	case'a':("excellent work: ");
	break;
	case'b':("well done: ");
	break;
	case'c':("good gob: ");
	break;
	case'd':("you passed:");
	break;		
	case'e':(":not better ");
	break;
	case'f':("sorry you failed: ");	
	break;					
	}
	
	if(grade=='a' || grade=='b' || grade=='c' || grade=='d' || grade!='e')
	{
		printf("you are eligible for the next level");	
	}
	else
	{
		printf("please try again next time");
	}
}