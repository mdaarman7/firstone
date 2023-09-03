# include<stdio.h>
# include<windows.h>
 
struct reservationName
	{
		char name[100];
		long long int phone;
		char address[100];
		int roomNumber;
		char checkin[25];
		char checkout[25];
		
	}reservationArray[100], reservationVariable,keep[100];
void roominput()
{
	
}
int main()
{
	char a=219, roomChoice;
	FILE *ptr1;
	int i=0, value=0, choice=0,RoomType;
	
	// Loading Code
	
	printf("\n\n\n\n\n\n\n\n\n");                  
	printf("\t\t\t\t\t\t\t");
	printf("Please Wait........\n");
	printf("\t\t\t\t\t\t");
	for(i=0; i<=30; i++)
	{
		printf("%c",a);
		//delay(50);
	}
	printf("\n\n\n\n\n\n\t\t");
	system("pause");
	system("cls");
	
	// Hotel Information
	flag:
	printf("\n");
	printf("\n\t\t                                 --------------------------------------------------");
	printf("\n\t\t                                         HOTEL RESERVATION SYSTEM ");
	printf("\n\t\t                                 --------------------------------------------------");
	printf("\n\n\n\n\n\n\n");
	printf("\n\t\t                                            ------------------------------");
	printf("\n\t\t                                            |         1. Data            |");
	printf("\n\t\t                                            ------------------------------");
	printf("\n\t\t                                            |         2. Reservation     |");
	printf("\n\t\t                                            ------------------------------");
	printf("\n\t\t                                            |         3. Cancellation    |");
	printf("\n\t\t                                            ------------------------------");
	printf("\n\t\t                                            |         4. Information     |");
	printf("\n\t\t                                            ------------------------------");
	printf("\n\n\n\n\n\n                         ");
	printf("\t\t");
	printf("Enter Your Choice: ");
	scanf("%d", &choice);
	system("cls");
	if(choice<1 || choice>4)
	{
		printf("\n You Entered Wrong Choice...... Please Enter your Choice again!");
		//delay(100);
		system("cls");
		goto flag;
	}
	switch(choice)
	{
		case 1:
			printf("\n\t\t\t\t\t\t\t First Paragraph (Introduction) ");
			printf("\n\n\n\t\t\t\t\t\t\t Second Paragraph (Introduction) ");
			printf("\n\n\n\n\t\t\t\t\t\t\t Third Paragraph (Introduction) ");
			printf("\n\n\n\n\t\t\t\t\t\t\t Fourth Paragraph (Location and other details) ");
			printf("\n\n\n\n\n\t\t\t\t ");
			system("pause");
			goto flag;
		break;
		case 2:
			ptr1 =fopen("FileFirstName.DAT","a+");
			if(ptr1==NULL)
			{
				printf("\n File Not found");
				exit(0);
			}
			flag1:
			// Scope for Filling Customers Detail
			do
			{
				printf("- - - - - Room Type- - - - -");
	            printf("\n1. AC(Air Conditioner) Room");
	            printf("\n2. Deluxe Room\n");
	            scanf("%d",&RoomType);
	            switch(RoomType)
				{
	            	case 1:
		                fflush(stdin);
						printf("\n Enter Your Name: ");
						gets(reservationVariable.name);
						printf("\n Enter Your Phone Number: ");
						scanf("%lld", &reservationVariable.phone);
						fflush(stdin);
						printf("\n Enter Your Address: ");
						gets(reservationVariable.address);
						printf("\n Enter how many room do you want to Reserve: ");
						scanf("%d", &reservationVariable.roomNumber);
						// Writing Data to the File
						fflush(stdin);
						printf("\n Enter checkin Date: ");
						gets(reservationVariable.checkin);
						printf("\n Enter checkout Date: ");
						gets(reservationVariable.checkout);
						
						break;
	           		case 2:
		                fflush(stdin);
						printf("\n Enter Your Name: ");
						gets(reservationVariable.name);
						printf("\n Enter Your Phone Number: ");
						scanf("%lld", &reservationVariable.phone);
						fflush(stdin);
						printf("\n Enter Your Address: ");
						gets(reservationVariable.address);
						printf("\n Enter how many room do you want to Reserve: ");
						scanf("%d", &reservationVariable.roomNumber);
						fflush(stdin);
						printf("\n Enter checkin Date: ");
						gets(reservationVariable.checkin);
						printf("\n Enter checkout Date: ");
						gets(reservationVariable.checkout);
						

					break;
				}
						printf("\n Reservation Successful.");
						// Writing Data to the File
						fwrite(&reservationVariable,sizeof(reservationVariable),1,ptr1);
						fflush(stdin);
						// Asking for more Reservarion	 
						printf("\n Do you want to Reserve more Room...... If Yes press Y");
						scanf("%c", &roomChoice);
				}
			while(roomChoice=='Y'|| roomChoice=='y');
				goto flag;
	            
	    break;
		case 4:
			for(i=0;i<=5;i++)
			{
				fread(&keep[i],sizeof(reservationVariable),1,ptr1);
						printf("\n Name: ");
						puts(reservationVariable.name);
						printf("\n Your Phone Number: %lld", reservationVariable.phone);
						printf("\n Your Address: ");
						puts(reservationVariable.address);
						printf("\n Room You Reserved: %d", &reservationVariable.roomNumber);
						printf("\n Your Checkin Date: ");
						puts(reservationVariable.checkin);
						printf("\n Enter checkout Date: ");
						puts(reservationVariable.checkout);
			}
/*			printf("\n");
			printf("\n\t\t                                 --------------------------------------------------");
			printf("\n\t\t\t                                         HOTEL ROOM DETAILS");
			printf("\n\t\t                                 --------------------------------------------------");
			printf("\n\n\n\n\n\n\n");
			printf("\n\t            ------------------------------------------------------------------------------------------------------------");
			printf("\n\t            |          Name            |          Room Type     |          No. Of Room    |          No. of Days     |");
			printf("\n\t            -----------------------------------------------------------------------------------------------------------");
//loop ma halnu parxa .
			printf("\n\t            |          				   |						|						  |							 |");
			printf("\n\t            -----------------------------------------------------------------------------------------------------------");
			printf("\n\t            |          				   |						|						  |							 |");
			printf("\n\t            -----------------------------------------------------------------------------------------------------------");
			printf("\n\t            |          				   |						|						  |							 |");
			printf("\n\t            -----------------------------------------------------------------------------------------------------------");
			printf("\n\t            |          				   |						|						  |							 |");
			printf("\n\t            -----------------------------------------------------------------------------------------------------------");					*/
		break; 
        default:
            exit(0);
        break;
	}
			
		
	
	return 0;
}
