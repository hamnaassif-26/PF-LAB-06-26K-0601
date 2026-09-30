#include <stdio.h>
int main()
{
	int contain_num,count,cargo_type,track_code,weight,remainder,final_remainder;
	
	printf("Enter Number of Containers: ");
	scanf("%d",&contain_num);
	
	for(count = 1; count <= contain_num; count++)
	{
		printf("======The Coastal Freight Container Scanner======\n\n");
		printf("===Container %d===\n\n",count);
		
		printf("Weight (kgs): ");
		scanf("%d",&weight);
		
		printf("==Cargo Type== \n");
		printf("1. General Goods\n");
		printf("2. Hazardous Goods\n");
		printf("3. Refrigerated Goods\n");
		printf("Select Type:");
		scanf("%d",&cargo_type);
		
		remainder = weight % 97;
		final_remainder = remainder % 100;
		
		printf("===TRACKING CODE===\n");
		printf("===    %d    ===\n",final_remainder);
		
		switch(cargo_type)
		{
			case 1:
			if(weight<=20000)
			{
				printf("General Goods can be loaded\n\n");
			}
			else
			{
				printf("General Goods can not be loaded\n\n");
			}
			break;
			
			case 2:
			if(weight<=15000 && count % 2 != 0)
			{
				printf("Hazardous Goods can be loaded\n\n");
			}
			else
			{
				printf("Hazardous Goods can not be loaded\n\n");
			}
			break;
			
			case 3: 
			if(weight<=18000)
			{
				printf("Refrigerated goods can be loaded\n\n");
			}
			else
			{
				printf("Refrigerated goods can not be loaded.\n\n");
			}
			break;
			
			default:
			printf("Invalid cargo type\n\n");
			
		}
	}
	return 0;
}
