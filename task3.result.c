#include <stdio.h>
int main()
{
	int attend,count,m1,m2,m3,avg,choice;
	const char *Result;
	
	printf("Todays Attendence: ");
	scanf("%d",&attend);
	
	for(count=1 ; count<=attend ; count++)
	{
		printf("\n======THE SUNDALE SCHOOL REPORT CARD GENERATOR\n\n");
		printf("====Roll no: %d====",count);
		printf("\n");
		
		printf("Enter Physics marks (out of 100): ");
		scanf("%d",&m1);
		printf("Enter Computer marks (out of 100): ");
		scanf("%d",&m2);
		printf("Enter Mathematics marks (out of 100):  ");
		scanf("%d",&m3);
		
		while(getchar() != '\n'); //"Keep reading and throwing away characters one by one until you consume that leftover Enter key (\n)." This leaves the buffer completely empty and clean for the next student.
		
		avg = (m1+m2+m3)/3;
		choice = avg/10;
		
		switch(choice)
		{
			case 10: //100/10 = 10 
				printf("Grade: A+\n");
				break;
			case 9: // if an average is from 90 - 99 , division by 10 gives 9 so grade A
				printf("Grade A+\n");
				break;
			case 8: 
				printf("Grade A\n");
				break;
			case 7: 
				printf("Grade B\n");
				break;
			case 6:
				printf("Grade C\n");
				break;
			case 5:
				printf("Grade F\n");
				break;
			default:
				printf("Academic Warning!!\n");		
		}
		
		if (m1 > 100 || m1 < 0 || m2 > 100 || m2 < 0 || m3 > 100 || m3 < 0) 
		{
			printf("\nError: Marks cannot be greater than 100 or less than 0!\n");
			printf("Skipping to next student...\n");
			continue; // this will skip the entire loop
	    }
	    
		Result = (avg>=60 && m1>=40 && m2>=40 && m3>=40) ? "PASSED" : "FAILED";
		
		printf("Average of 3 Subject Marks: %d\n\n",avg);
		printf("Result = %s\n\n",Result);
		
	}
	return 0;
}
