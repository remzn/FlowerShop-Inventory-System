#include<stdio.h>
//Enes Ramazan Akdamar 201911002
int totalcash=0;
int stcred=0,stcpink=0,stcwhite=0,stcyellow=0,stcblack=0;
int pricered=5,pricepink=6,pricewhite=7,priceyellow=8,priceblack=20;
void printMainMenu(void);
void printStockInformation(void);
void updateStocks(void);
void updatePrices(void);
void printProductPrices(void);
void printProducts(void);
void sell(void);
int stockControl(int productStockInfo,int numberOfRequested);
int calculateBill(int numberOfRequested,int productPrice);
void addMoney(int rftbill);
void printCashInfo(void);
int main(void){
	printMainMenu();
	return(0);
}
void printCashInfo(void){
	printf("Current cash information : %d TL\n",totalcash);
	printMainMenu();
}
void addMoney(int rftbill){
	printf("Add %d TL to cash register.\n",rftbill);
	totalcash+=rftbill;
}
int calculateBill(int numberOfRequested,int productPrice){
	int a;
	a=numberOfRequested*productPrice;
	printf("%d*%d=%d.\n",numberOfRequested,productPrice,numberOfRequested*productPrice);
	return(a);
}
int stockControl(int productStockInfo,int numberOfRequested){
	if(numberOfRequested<=productStockInfo){
		return(1);
	}
	else{
		return(0);
	}
}
void sell(void){
int a,b,c=1,d;	
while(c==1){
printf("Select product : ");
scanf("%d",&a);
switch(a){
		case 1:
			printf("\nEnter how many Red Rose products are requested : ");
			scanf("%d",&b);
			if(stockControl(stcred,b)==1){
			d=calculateBill(pricered,b);
			addMoney(d);
			stcred-=b; 	
			}
			else if(stockControl(stcred,b)==0){
			printf("SORRY…  Red Rose product is out of stock.\n");	
			}
			break;
		case 2:
			printf("\nEnter how many Pink Rose products are requested : ");
			scanf("%d",&b);
			if(stockControl(stcpink,b)==1){
			d=calculateBill(pricepink,b);
			addMoney(d);
			stcpink-=b; 	
			}
			else if(stockControl(stcpink,b)==0){
			printf("SORRY…  Pink Rose product is out of stock.\n");
			}
			break;
		case 3:
			printf("\nEnter how many White Rose products are requested  :");
			scanf("%d",&b);
			if(stockControl(stcwhite,b)==1){
			d=calculateBill(pricewhite,b);
			addMoney(d);
			stcwhite-=b; 	
			}
			else if(stockControl(stcwhite,b)==0){
			printf("SORRY…  White Rose product is out of stock.\n");	
			}
			break;
		case 4:
			printf("\nEnter how many Yellow Rose products are requested :");
			scanf("%d",&b);
			if(stockControl(stcyellow,b)==1){
			d=calculateBill(priceyellow,b);
			addMoney(d);
			stcyellow-=b; 	
			}
			else if(stockControl(stcyellow,b)==0){
			printf("SORRY…  Yellow Rose product is out of stock.\n");	
			}
			break;
		case 5:
			printf("\nEnter how many Black Rose products are requested :");
			scanf("%d",&b);
			if(stockControl(stcblack,b)==1){
			d=calculateBill(priceblack,b);
			addMoney(d);
			stcblack-=b; 	
			}
			else if(stockControl(stcblack,b)==0){
			printf("SORRY…  Black Rose product is out of stock.\n");	
			}
			break;
		default :printf("Error! Please enter a defined value.\n");
				
							
}
printProducts();
	printf("\nOPERATIONS :\n\n1. Continue selling\n2. Return main menu\nSelect your operation : ");
	scanf("%d",&c);
	if(c==1){
	printProducts();
	}
	else if(c==2){
		printMainMenu();
		}
	else{
		printf("Error! Please enter a defined value.\n");
		printMainMenu();
	}	
	}
	
}
void printProducts(void){
printf("\nProducts\n\n1. Red Rose - %d TL - (%d)\n2. Pink Rose - %d TL - (%d)\n3. White Rose - %d TL - (%d)\n4. Yellow Rose - %d TL - (%d)\n5. Black Rose - %d TL - (%d)\n",pricered,stcred,pricepink,stcpink,pricewhite,stcwhite,priceyellow,stcyellow,priceblack,stcblack);	
} 
void printProductPrices(void){
	printf("\nPrices:\n\n1.Red Rose : %d TL\n2. Pink Rose : %d TL\n3. White Rose : %d TL\n4. Yellow Rose : %d TL\n5. Black Rose : %d TL\n",pricered,pricepink,pricewhite,priceyellow,priceblack);
}
void updatePrices(void){
int a,b,c=1;	
while(c==1){
printf("Select product :");
scanf("%d",&a);
switch(a){
		case 1:
			printf("\nEnter new price for Red Rose product :");
			scanf("%d",&b);
			pricered=b;
			break;
		case 2:
			printf("\nEnter new price for Pink Rose product :");
			scanf("%d",&b);
			pricepink=b;
			break;
		case 3:
			printf("\nEnter new price for White Rose product :");
			scanf("%d",&b);
			pricewhite=b;
			break;
		case 4:
			printf("\nEnter new price for Yellow Rose product :");
			scanf("%d",&b);
			priceyellow=b;
			break;
		case 5:
			printf("\nEnter new price for Black Rose product :");
			scanf("%d",&b);
			priceblack=b;
			break;
		default :
			printf("Error! Please enter a defined value.\n");
			break;
							
}
printProductPrices();
	printf("\nOPERATIONS :\n\n1. Continue update prices\n2. Return main menu\nSelect your operation : ");
	scanf("%d",&c);
	if(c==2){
		printMainMenu();
		}
	}
} 
void updateStocks(void){
	int a,b,c=1;	
	while(c==1){
	printf("Select product: ");
	scanf("%d",&a);
	switch(a){
		case 1:
			printf("\nEnter stock for Red Rose product :");
			scanf("%d",&b);
			stcred+=b;
			break;
		case 2:
			printf("\nEnter stock for Pink Rose product :");
			scanf("%d",&b);
			stcpink+=b;
			break;
		case 3:
			printf("\nEnter stock for White Rose product :");
			scanf("%d",&b);
			stcwhite+=b;
			break;
		case 4:
			printf("\nEnter stock for Yellow Rose product :");
			scanf("%d",&b);
			stcyellow+=b;
			break;
		case 5:
			printf("\nEnter stock for Black Rose product :");
			scanf("%d",&b);
			stcblack+=b;
			break;
		default :
		printf("\nError! Please enter a defined value.\n");
		break;					
		}
	printStockInformation();
	printf("\nOPERATIONS :\n\n\n1. Continue update stock\n2. Return main menu\nSelect your operation :");
	scanf("%d",&c);
	if(c==2){
		printMainMenu();
		}
	}
}
void  printStockInformation(void){
printf("\nCurrent Stock Information :\n\n1. Red Rose : %d\n2. Pink Rose : %d\n3. White Rose : %d\n4. Yellow Rose : %d\n5. Black Rose : %d\n",stcred,stcpink,stcwhite,stcyellow,stcblack);	
}
void printMainMenu(void){
	int a;
	int b=1;
	while(b==1)
	{
	
	
	printf("OPERATIONS :\n1. Stock Info\n2. Update Stocks\n3. Update Prices\n4. Sell\n5. Current cash info\n6. Quit\n");
	printf("Select your operation :");
	scanf("%d",&a);
	if(a==1){
		printStockInformation();
	}
	else if(a==2){
		printStockInformation();
		updateStocks(); 
	}
	else if(a==3){
		printProductPrices();
		updatePrices();
	}
	else if(a==4){
		printProducts();
		sell();
	}
	else if(a==5){
		printCashInfo();
	}
	else if(a==6){
		printf("\nBye!!!");
		break;
	}
	else{
		printf("Undefined code\n");
		printf("Enter one to see the menu again.\n");
		scanf("%d",&b);
		
		
		
	}
}
	
}
