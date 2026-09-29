#include <stdio.h>
int main()
{
	int light =1;
	int heater = 2;
	int ac = 4;
	int cctv = 8;
	int sum=0;
	int num;
	int operation;
	
	printf("Enter your current appliance value to continue (-1 is exit): ");
	scanf("%d",&num);
	
	while(num != -1)
	{
		printf("====The Hillcrest Apartments Smart Utility Panel====\n\n");
		
		printf("Enter Operation\n");
		printf("1. turn on \n");
		printf("2. turn off\n");
		printf("3. Flip the switch\n");
		printf("4. Toggle the switch\n");
		printf("Select choice: ");
		scanf("%d",&operation);
		
		switch(operation)
		{
			case 1: // on
			sum = sum | heater;
			printf("The heater is ON\n");
			break;
			
			case 2:
			sum = sum & ac;
			printf("The ac is off\n");
			break;
			
			case 3:
			sum = sum ^ light;
			printf("The lights switch is changed\n");
			break;
			
			case 4:
			sum = sum & ~cctv;
			printf("CCTV function reported back\n");
			break;
			
			default:
			printf("Invalid number entered\n");
		}
		printf("New value is: %d\n",sum);
		if((sum&ac) && (sum&heater))
		{
			printf("Yes... Both ac and heater are On!\n");
		}
		else
		{
			printf("they are not on\n");
		}
		return 1;
	}
	
}
