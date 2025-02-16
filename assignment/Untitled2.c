#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

char ch[10][130]={"Buddha Airlines","Yeti Airlines","Tara Airlines","Shree Airlines","Simrik Airlines"};
void airlines();




int main()
{
    int num ;

    printf("   ==========  MAIN MENU  ==========\n\n"); 
printf("   [1] View Airlines List\n\n"); 
printf("   [2] Ticket Booking\n\n"); 
printf("   [3] Cancel Booking\n\n"); 
printf("   [4] Status of Airlines \n\n"); 
printf("   [5] Exit\n\n");
printf("   =================================\n"); 
printf("   ENTER YOUR CHOICE: "); 
scanf("%d",&num); 
switch(num) 
{ 
case 1: 
airlines();//for list of airlines 
break; 
// case 2: 
// booking();//for booking the tickets 
// break; 
// case 3: 
// cancel(); //for cancelling booking
// break; 
// case 4: 
// status(); //for checking status of airlines
// break; 
// case 5:
// exit();
// break;
default:
printf("Invalid input");
} 

while(num != 5); 
system("CLS"); 
printf("\n\n=====================================================\n"); 
printf("  THANK YOU FOR USING THIS AIRLINE TICKET BOOKING SYSTEM"); 
printf("\n=====================================================\n"); 
printf("    By Group 5 from BCT081 (Anuska Acharya, Nitu Purbey, Prakriti Subedi, Sulohana Subedi)   \n\n\n"); 


return 0; 
}



void airlines() 
{ 
system("cls"); 
printf("\n\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"); 
printf("\t\t\t\t\t\t\t AIRLINE TICKET BOOKING SYSTEM"); 
printf("\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n"); 
printf("   ==========  AIRLINES LIST  =========== \n\n"); 
printf("   [1]  =>  %s\n\n",ch[0]); 
printf("   [2]  =>  %s\n\n",ch[1]); 
printf("   [3]  =>  %s\n\n",ch[2]); 
printf("   [4]  =>  %s\n\n",ch[3]); 
printf("   [5]  =>  %s\n\n",ch[4]); 

}

