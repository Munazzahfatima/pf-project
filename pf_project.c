                                        /*  ONLINE MOBILE SITE
                                        
                                          MEMBERS:
                                        
                                          >>Munazzah fatima 23p0005
                                          >>Fatiqa munir 23p0013
                                          
                                          PURPOSE:
                                          This C program implements a basic mobile phone shopping application. 
										  It allows users to browse and select different models of 
										  iPhones, Samsung, and Vivo, add them to a shopping cart, 
										  and view the total bill before checkout.
                                          */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define constants for array sizes
#define MAX_ITEMS 10
#define MAX_NAME_LENGTH 50

// Global arrays to store mobile details
char cart_names[MAX_ITEMS][MAX_NAME_LENGTH];
int cart_prices[MAX_ITEMS];
int cart_count = 0;
char choice;

// Function prototypes
int phones();
void display_shopping_cart();
void calculate_total_bill();



void continue_shopping(){
	 char choice;
        printf("\nDo you want to continue shopping? (Y/N): \n");
        scanf(" %c", &choice);
    if(choice == 'Y' || choice == 'y'){
    	printf("\n\n\n WE HAVE OTHER OPTIONS TOO !! CHECK !! \n\n\n");
    	phones();// Show other options
	}
    
    else if(choice == 'N' || choice == 'n'){
    	printf("\n\n\nView your cart and also check your total :)\n\n\n");
	
    	phones() ;
		}
	else
	printf("\n\nwrong input :(\n\n");
}

// Define similar functions for other Samsung models (6,7,8,10,11,12,13,14,15)
 void iphone_8()
{
	char choice;
     int price=122999;
	printf("__________________________________________________________________________________\n");
	printf("|                                                                                 |\n");
	printf("|IPHONE 8     Price: 122,999     RAM: 4GB      ROM: 256GB       Battery: 3349mAh  |\n");
	printf("|_________________________________________________________________________________|\n\n");
	printf("\n\n\n ADD TO CART?(Y/N): ");

scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "iPhone 8");
    cart_prices[cart_count] = 122999;
    cart_count++;
    continue_shopping();
}
else if(choice=='n'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();
}
}

void iphone_10()
{

	printf("__________________________________________________________________________________\n");
	printf("|                                                                                 |\n");
	printf("|IPHONE 10     Price: 120,999     RAM: 4GB      ROM: 256GB      Battery: 2716mAh  |\n");
	printf("|_________________________________________________________________________________|\n");

	printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "iPhone 10");
    cart_prices[cart_count] = 120999;
    cart_count++;
    continue_shopping();
}
else if(choice=='n'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();
}
}
void iphone_7()
{
	printf("__________________________________________________________________________________\n");
	printf("|                                                                                 |\n");
	printf("|IPHONE 7     Price: 72,899     RAM: 4GB      ROM: 128GB      Battery: 1960mAh    |\n");
	printf("|_________________________________________________________________________________|\n");
		printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "iPhone 7");
    cart_prices[cart_count] =72899;
    cart_count++;
    continue_shopping();
}
else if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();
}
}
void iphone_11()
{

	printf("_____________________________________________________________________________________\n");
	printf("|                                                                                    |\n");
	printf("|IPHONE 11     Price: 144,999      RAM: 4GB       ROM: 512GB      Battery: 31109mAh  |\n");
	printf("|____________________________________________________________________________________|\n");
	printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "iPhone 11");
    cart_prices[cart_count] = 144999;
    cart_count++;
    continue_shopping();
}
else if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();
}
}
void iphone_6()
{
	
	printf("__________________________________________________________________________________\n");
	printf("|                                                                                 |\n");
	printf("|IPHONE 6     Price: 54,899     RAM: 4GB      ROM: 128GB      Battery: 1809mAh    |\n");
	printf("|_________________________________________________________________________________|\n");
		printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "iPhone 6");
    cart_prices[cart_count] = 54899;
    cart_count++;
    continue_shopping();
}
else if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();// Show other options
}
}
void iphone_14()
{

	printf("__________________________________________________________________________________\n");
	printf("|                                                                                 |\n");
	printf("|IPHONE 14     Price: 464,999     RAM: 4GB      ROM: 256GB      Battery: 3279mAh  |\n");
	printf("|_________________________________________________________________________________|\n");
		printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "iPhone 14");
    cart_prices[cart_count] = 464999;
    cart_count++;
    continue_shopping();
}
else if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();
}
}
void iphone_12()
{
	
	printf("__________________________________________________________________________________\n");
	printf("|                                                                                 |\n");
	printf("|IPHONE 12     Price: 179,999     RAM: 4GB      ROM: 128GB      Battery: 2815mAh  |\n");
	printf("|_________________________________________________________________________________|\n");
		printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "iPhone 12");
    cart_prices[cart_count] = 179999;
    cart_count++;
    continue_shopping();
}
else if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();
}
}
void iphone_15()
{

	printf("__________________________________________________________________________________\n");
	printf("|                                                                                 |\n");
	printf("|IPHONE 15     Price: 572,999     RAM: 6GB      ROM: 512GB      Battery: 3349mAh  |\n");
	printf("|_________________________________________________________________________________|\n\n");
		printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "iPhone 15");
    cart_prices[cart_count] = 572999;
    cart_count++;
    continue_shopping();
}
if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();
}
}
void iphone_13()
{
	printf("_________________________________________________________________________________\n");
	printf("|                                                                                |\n");
	printf("|IPHONE 13     Price: 472,999     RAM:6GB      ROM: 128GB      Battery: 3240mAh  |\n");
	printf("|________________________________________________________________________________|\n");
		printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "iPhone 13");
    cart_prices[cart_count] = 472999;
    cart_count++;
    continue_shopping();
}
if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();
}
}

 void iphone(){
 	printf("____________________________________________\n");
    printf("|                iPhone Models              |\n");
    printf("|-------------------------------------------|\n");
    printf("|                IPHONE 6                   |\n");
    printf("|                IPHONE 7                   |\n");
    printf("|                IPHONE 8                   |\n");
    printf("|                IPHONE 10                  |\n");
    printf("|                IPHONE 11                  |\n");
 	printf("|                IPHONE 12                  |\n");
 	printf("|                IPHONE 13                  |\n");
 	printf("|                IPHONE 14                  |\n");
 	printf("|                IPHONE 15                  |\n");
    printf("|___________________________________________|\n");
    
    printf("\n Enter the model to Learn more \n");
int modelnumber;
    scanf(" %d",&modelnumber);
        switch (modelnumber) {
            case 6:
                iphone_6();
                break;
            case 7:
                iphone_7();
                break;
            case 8:
                iphone_8();
                break;
            case 10:
                iphone_10();
                break;
            case 11:
                iphone_11();
                break;
            case 12:
                iphone_12();
                break;
            case 13:
                iphone_13();
                break;
            case 14:
                iphone_14();
                break;
            case 15:
                iphone_15();
                break;
            default:
                printf("Invalid iPhone model number.\n");
        }
    }
    
 
 // Define similar functions for other Vivo models (Y02, Y03, Y17, Y21, Y22, Y27, Y36, Y55)
void vivo_y03()
{
	printf("_______________________________________________________________________________\n");
	printf("|                                                                              |\n");
	printf("|VIVO Y03     Price: 24,999     RAM: 4GB      ROM: 64GB      Battery: 5000mAh  |\n");
	printf("|______________________________________________________________________________|\n");
		printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "vivo y03");
    cart_prices[cart_count] = 24999;
    cart_count++;
    continue_shopping();
}
if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();
}
}
void vivo_y02()
{
	printf("_______________________________________________________________________________\n");
	printf("|                                                                              |\n");
	printf("|VIVO Y02     Price: 27,999     RAM: 3GB      ROM: 32GB      Battery: 5000mAh  |\n");
	printf("|______________________________________________________________________________|\n");
			printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "vivo y02");
    cart_prices[cart_count] = 27999;
    cart_count++;
    continue_shopping();
}
if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();
}
}
void vivo_y17()
{
	printf("_______________________________________________________________________________\n");
	printf("|                                                                              |\n");
	printf("|VIVO Y89     Price: 42,999     RAM: 4GB      ROM: 64GB      Battery: 5000mAh  |\n");
	printf("|______________________________________________________________________________|\n");
			printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "vivo y17");
    cart_prices[cart_count] = 42999;
    cart_count++;
    continue_shopping();
}
if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();
}
}


void vivo_y21()
{
	printf(" ______________________________________________________________________________\n");
	printf("|                                                                              |\n");
	printf("|VIVO Y21     Price: 53,999     RAM: 4GB      ROM: 128GB      Battery: 3260mAh |\n");
	printf("|______________________________________________________________________________|\n");
			printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "vivo y21");
    cart_prices[cart_count] = 53999;
    cart_count++;
    continue_shopping();
}
if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();
}
}
void vivo_y22()
{
	printf("_______________________________________________________________________________\n");
	printf("|                                                                              |\n");
	printf("|VIVO Y22     Price: 45,999     RAM: 8GB      ROM: 128GB      Battery: 5000mAh |\n");
	printf("|______________________________________________________________________________|\n");
			printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "vivo y22");
    cart_prices[cart_count] = 45999;
    cart_count++;
    continue_shopping();
}
if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();
}
}
void vivo_y27()
{
	printf("_______________________________________________________________________________\n");
	printf("|                                                                              |\n");
	printf("|VIVO Y27     Price: 47,999     RAM: 6GB      ROM: 128GB      Battery: 5000mAh |\n");
	printf("|______________________________________________________________________________|\n");
			printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "vivo y27");
    cart_prices[cart_count] = 47999;
    cart_count++;
    continue_shopping();
}
if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();
}
}
void vivo_y36()
{
	printf("______________________________________________________________________________\n");
	printf("|                                                                              |\n");
	printf("|VIVO Y36     Price: 54,999     RAM: 8GB      ROM: 256GB      Battery: 5000mAh |\n");
	printf("|______________________________________________________________________________|\n");
			printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "vivo y36");
    cart_prices[cart_count] = 54999;
    cart_count++;
    continue_shopping();
}
if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();
}
}

void vivo_y73()
{
	printf("_______________________________________________________________________________\n");
	printf("|                                                                              |\n");
	printf("|VIVO Y73     Price: 89,999     RAM: 8GB      ROM: 128GB      Battery: 4000mAh |\n");
	printf("|______________________________________________________________________________|\n");
			printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "vivo y73");
    cart_prices[cart_count]  = 89999;
    cart_count++;
    continue_shopping();
}
if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();
}
}
void vivo_y55()
{
	printf("_______________________________________________________________________________\n");
	printf("|                                                                              |\n");
	printf("|VIVO Y55    Price: 75,999      RAM: 8GB      ROM: 128GB      Battery: 5000mAh |\n");
	printf("|______________________________________________________________________________|\n");
			printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "vivo y55");
    cart_prices[cart_count] = 75999;
    cart_count++;
    continue_shopping();
}
if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();
}
}
 void vivo(){
 	printf("_______________________________________________\n");
    printf("|                 VIVO Phones                  |\n");
    printf("|----------------------------------------------|\n");
    printf("|                 VIVO Y-02                    |\n");
    printf("|                 VIVO Y-03                    |\n");
    printf("|                 VIVO Y-17                    |\n");
    printf("|                 VIVO Y-21                    |\n");
    printf("|                 VIVO Y-22                    |\n");
    printf("|                 VIVO Y-27                    |\n");
    printf("|                 VIVO Y-36                    |\n");
    printf("|                 VIVO Y-55                    |\n");
    printf("|                 VIVO Y-73                    |\n");
    printf("|______________________________________________|\n");
  
  
int modelnumber;
printf("\n Enter the Model Number to learn more \n");
scanf(" %d",&modelnumber);

    switch (modelnumber) {
        	 case 02:
                vivo_y02();
                break;
            case 03:
                vivo_y03();
                break;
            case 17:
                vivo_y17();
                break;
           case 21:
                vivo_y21();
                break;
            case 22:
                vivo_y22();
                break;
            case 27:
                vivo_y27();
                break;
            case 36: 
                vivo_y36();
                break;
            case 55:
                vivo_y55();
                break;
            case 73:
                vivo_y73();
                break;
        
            default:
                printf("Invalid VIVO model number:(\n");
        }
 }
 
 
// Define similar functions for other Samsung models (A05, A12, A32, A33, A54, A73, S22, S23)
    void  samsung_A04(){    
	 printf("____________________________________________________________________________________\n");
	 printf("|                                                                                   |\n");
	 printf("| SAMSUNG: A04       Price: Rs 35,499      RAM: 4G    ROM: 32GB    Battery: 5000mAh |\n");
     printf("|___________________________________________________________________________________|\n");
     		printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "samsung A04");
    cart_prices[cart_count] = 35499;
    cart_count++;
    continue_shopping();
}
if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();// Show other options
}
}
	void samsung_A05(){
	 printf("_____________________________________________________________________________________\n");
	 printf("|                                                                                    |\n");
	 printf("| SAMSUNG: A05       Price: Rs 43,999      RAM: 4G    ROM: 128GB   Battery: 5000mAh  |\n");
     printf("|____________________________________________________________________________________|\n");
         		printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "samsung A05");
    cart_prices[cart_count] = 43999;
    cart_count++;
    continue_shopping();
}
if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();// Show other options
}
}
	void samsung_A12(){
	 printf("_____________________________________________________________________________________\n");
	 printf("|                                                                                    |\n");
	 printf("| SAMSUNG: A12       Price: Rs 57,199      RAM: 4G    ROM: 128GB   Battery: 5000mAh  |\n");
     printf("|____________________________________________________________________________________|\n");
         		printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "samsung A04");
    cart_prices[cart_count] = 57199;
    cart_count++;
    continue_shopping();
}
if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();// Show other options
}
}
	void samsung_A32(){
	 printf("_____________________________________________________________________________________\n");
	 printf("|                                                                                    |\n");
	 printf("| SAMSUNG: A32       Price: Rs 79,999      RAM: 6G    ROM: 128GB   Battery: 5000mAh  |\n");
     printf("|____________________________________________________________________________________|\n");
         		printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "samsung A32");
    cart_prices[cart_count] = 79999;
    cart_count++;
    continue_shopping();
}
if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();// Show other options
}
}
    void samsung_A33(){
	 printf("______________________________________________________________________________________\n");
	 printf("|                                                                                     |\n");
	 printf("| SAMSUNG: A33       Price: Rs 100,999     RAM: 8G    ROM: 128GB   Battery: 5000mAh   |\n");
     printf("|_____________________________________________________________________________________|\n");
         		printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "samsung A33");
    cart_prices[cart_count] = 100999;
    cart_count++;
    continue_shopping();
}
if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();// Show other options
}
}   
	void samsung_A54(){
	 printf("_____________________________________________________________________________________\n");
	 printf("|                                                                                    |\n");
	 printf("| SAMSUNG: A54       Price: Rs 111,999     RAM: 8G    ROM: 256GB   Battery: 5000mAh  |\n");
     printf("|____________________________________________________________________________________|\n");
      		printf("\n\n\n ADD TO CART?(Y/N): ");
scanf( " %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "samsung A54");
    cart_prices[cart_count] = 111999;
    cart_count++;
    continue_shopping();
}
if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();// Show other options
}
}
	void samsung_A73(){
	 printf("______________________________________________________________________________________\n");
	 printf("|                                                                                     |\n");
	 printf("| SAMSUNG: A73       Price: Rs 171,499    RAM: 8G     ROM: 256GB    Battery: 5000mAh  |\n");
     printf("|_____________________________________________________________________________________|\n");
         		printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "samsung A73");
    cart_prices[cart_count] = 171499;
    cart_count++;
    continue_shopping();
}
if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();// Show other options
}
}
	void samsung_S22(){
	 printf("______________________________________________________________________________________\n");
	 printf("|                                                                                     |\n");
	 printf("| SAMSUNG: S22       Price: Rs 334,999    RAM: 12G     ROM: 256GB    Battery: 5000mAh |\n");
     printf("|_____________________________________________________________________________________|\n");
         		printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "samsung S22");
    cart_prices[cart_count] = 334999;
    cart_count++;
    continue_shopping();
}
if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();// Show other options
}
}
	void samsung_S23(){
	 printf("______________________________________________________________________________________\n");
	 printf("|                                                                                     |\n");
	 printf("| SAMSUNG: S23       Price: Rs 494,999    RAM: 12G     ROM: 256GB    Battery: 5000mAh |\n");
     printf("|_____________________________________________________________________________________|\n");
         		printf("\n\n\n ADD TO CART?(Y/N): ");
scanf(" %c",&choice);
if(choice=='Y'||choice=='y'){
		strcpy(cart_names[cart_count], "samsung S23");
    cart_prices[cart_count] = 494999;
    cart_count++;
    continue_shopping();
}
else if(choice=='N'||choice=='n'){
	printf("CHECK OTHER OPTIONS ");
	phones();
}
}
 void samsung(){
 	printf("_________________________________________________\n");
    printf("|                 SAMSUNG Phones                 |\n");
    printf("|------------------------------------------------|\n");
    printf("|                  SAMSUNG A04                   |\n");
    printf("|                  SAMSUNG A05                   |\n");
    printf("|                  SAMSUNG A12                   |\n");
    printf("|                  SAMSUNG A32                   |\n");
    printf("|                  SAMSUNG A33                   |\n");
    printf("|                  SAMSUNG A54                   |\n");
    printf("|                  SAMSUNG A73                   |\n");
    printf("|                  SAMSUNG S22                   |\n");
    printf("|                  SAMSUNG S23                   |\n");
    printf("|________________________________________________|\n");

    
int modelnumber;
printf("\n Enter the Model Number to learn more \n");
scanf(" %d",&modelnumber);

        switch (modelnumber) {
            case 04:
                samsung_A04();
                break;
            case 05:
                samsung_A05();
                break;
            case 12:
                samsung_A12();
                break;
            case 32:
                samsung_A32();
                break;
            case 33:
                samsung_A33();
                break;
            case 54:
                samsung_A54();
                break;
            case 73:
                samsung_A73();
                break;
            case 22:
                samsung_S22();
                break;
			case 23:
                samsung_S23();
                break;
				 
                
            default:
                printf("Invalid SAMSUNG model number:( \n");
        }
 }
int phones() {

    do {
        // Display mobile options and get user input
        printf("\n\t\t________________________________________");
        printf("\n\t\t > Press I to view IPONE Mobile Models.");
        printf("\n\t\t > Press V to view VIVO Mobile Models.  ");
        printf("\n\t\t > Press S to view SAMSUNG Mobile Models.");
        printf("\n\t\t > press C to display shopping cart      ");
        printf("\n\t\t > press B to display total bill     ");
        printf("\n\t\t > press Q to quit     ");
        printf("\n\t\t________________________________________\n\n");
        scanf(" %c", &choice);
        
        switch(choice) {
            case 'I':
            case 'i':
                iphone();
                break;
                
            case'V':
            case 'v':
           		vivo();
           		break;
           		
           	case'S':
            case 's':
           	    samsung();;
           		break;
				   	
           	case'c':
            case 'C':
           		display_shopping_cart();
           		break;
           	case'B':
            case 'b':
           		calculate_total_bill();
           		break;
           		
           	case'Q':
            case 'q':
           	printf("\n Exiting the program...\n");
           	return 0;
           	break;
           		
            default:
            	printf("\n wrong input");
            	break;
                
        }
}
while(0);
}

// Implement a function to display the shopping cart
void display_shopping_cart() {
    printf("\n\n\t\tYour Shopping Cart:\n");
    printf("\t\t--------------------------------\n");
    for(int i = 0; i < cart_count; i++) {
        printf("\t\t%s - Rs %d\n", cart_names[i], cart_prices[i]);
    }
    printf("\t\t--------------------------------\n");
    continue_shopping();
}

// Implement a function to calculate the total bill
void calculate_total_bill() {
    int total_bill = 0;
    for(int i = 0; i < cart_count; i++) {
        total_bill += cart_prices[i];
    }
      
    printf("\n\t\tTotal Bill: Rs %d\n", total_bill);
}



    

int main() {
    // Display welcome message and mobile options
    printf("\t\t\tC PROGRAM MOBILE SHOP");
    printf("\n\t\t________________________________________\n");
    printf("\n\t\t\t    WELCOME ");
    printf("\n\t\t\t      TO ");
    printf("\n\t\t\t   MOBILE SHOP");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t  BUY YOUR FAVOURIATE MOBILE!!!!!!!!!!   ");
    printf("\n\t\t________________________________________");
    
    // Call the phone function to start shopping
    phones();

    return 0;
}

