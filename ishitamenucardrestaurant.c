#include<stdio.h>
void main()
{
	printf("\t\t\t\t\t\tWelcome to XYZ restaurant");
	printf("\n\n\t\t\t\t\t\tMENU CARD");
	int choice, quantity, total=0, ans, yes;
	printf("\n\n\t\t\t\t\t\tChoices for yours\n\n\tPRODUCT\t\t\tPRICE\n\n1:Milk shakes\t\t\tRs.100\n\n2:Coffee\t\t\tRs.50\n\n3:Tea\t\t\t\tRs.30\n\n4:Juices\t\t\tRs.180\n\n5:Ice-creams\t\t\tRs.220\n\nEnter Choice:-");
	scanf("%d" ,&choice);
	switch(choice)
	{
		case 1:
		     printf("Milk shake selected! \nPLEASE ENTER QUANTITY:-");
		     scanf("%d" ,&quantity);
		     total=quantity*100;
		     printf("Total amount for pay: %d", total);
		     break;
		case 2:
			printf("Coffee selected! \nPLEASE ENTER QUANTITY:-");
			scanf("%d" ,&quantity);
			total=quantity*50;
			printf("Total amount for pay: %d" ,total);
			break;
		case 3:
			printf("Tea selected! \nPLEASE ENTER QUANTITY:-");
			scanf("%d" ,&quantity);
			total=quantity*30;
			printf("Total amount for pay: %d" ,total);
			break;
		case 4:
			printf("Juices selected! \nPLEASE ENTER QUANTITY:-");
			scanf("%d" ,&quantity);
			total=quantity*180;
			printf("Total amount for pay: %d" ,total);
			break;
		case 5:
			printf("Ice-cream selected! \nPLEASE ENTER QUANTITY:-");
			scanf("%d" ,&quantity);
			total=quantity*220;
			printf("Total amount for pay: %d" ,total);
			break;
		default:
			printf("Invalid Input...We are extremely sorry for this.....");
			break;
	}
	
}
