#include<conio.h>
#include<iostream>
#include<stdio.h>
#include <windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
using namespace std;
/*  black=0,
	dark_blue=1,
	dark_green=2,
	dark_aqua,dark_cyan=3,
	dark_red=4,
	dark_purple=5,dark_pink=5,dark_magenta=5,
	dark_yellow=6,
	dark_white=7,
	gray=8,
	blue=9,
	green=10,
	aqua=11,cyan=11,
	red=12,
	purple=13,pink=13,magenta=13,
	yellow=14,
	white=15*/
	
int cglotic,dglotic,eglotic,fglotic,gglotic;
char xglotic[10]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
char zglosan[100]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','S',' ',' ',' ',' ',' ',' ','L',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','L',' ',' ',' ',' ','S',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','S',' ',' ',' ',' ',L' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','L ',' ',' ',' ',' ',' ',' ',' ',' ',' ','L',' ','S',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
int bglosan=0,cglosan=0,gglosan,eglosan,wglosan,rglosan,w1glosan,r1glosan;
int globalgloquiz=0;
int tictactoe1(int);
int tictactoe2(int);
int player1(int);
int player2(int);
int quizgame(int,int);
int quizsymbol(int);

void setcolor(unsigned short color)                 //The function that is used to
{                                                   //set the colour
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon,color);
}
int main()
{
	int amain,bmain,cmain,greatchoice;
	setcolor (12);
	cout<<"\t\t     **********************************\n\n";
	cout<<"\t\t            WELCOME TO GAME STATION \n\n";
	cout<<"\t\t     **********************************\n";
	setcolor(6);
	cout<<"\n\n\n \t\t   CHOOSE THE GAME WHICH U WANT TO PLAY \n\n";
	setcolor(13);
	cout<<"\t\t   1.GUESSING GAME \n\n";
	cout<<"\t\t   2.TIC TAC TOE  \n\n";
	cout<<"\t\t   3.SNAKE AND LADDER  \n\n";
	cout<<"\t\t   4.QUIZ \n\n";
	cout<<"\t\t   5.PUZZLE \n\n";
	cout<<"\t\t   6.MAZE \n\n";
	setcolor(7);
	greatchoice=getch();
	system("cls");
	
	switch(greatchoice)
	{
		case '1':
		      {
   				int a10,b10,c10,d10,e10,w10=0;
				char z10;

		
		
		
			for(d10=1;d10<=5;d10++)
			{
				srand(time(NULL));
			 	b10=rand()%6+1;
				c10=rand()%6+1;
			setcolor (12);
			cout<<"\t\t-----------------------------------\n";
			cout<<"\t\t   WELCOME TO THE GUESSING GAME \n";
			cout<<"\t\t-----------------------------------\n\n";
			setcolor(7);
			cout<<"To win this game u have to get 5 points.\n";
			cout<<"By gussing the number... The number will vary from ";
			setcolor (13);
			cout<<"1 to 6\n\n";
			setcolor (7);
			cout<<"YOUR POINT : ";
			setcolor (10);
			cout<<w10<<"\n";
			setcolor (7);
			cout<<"\nThe random number created : ";
			setcolor(12);
			cout<<b10<<"\n";
			setcolor (7);
			loop101:cout<<"\nGuess the secret number \n";
			cout<<"IF U THINK ..\n";
			cout<<"The secret number is Greater than this number press 'H/h' \n";
			cout<<"The secret number is Lower than this number press 'L/l' \n\n\n";
			cin>>z10;
	

	
			if((z10=='L' || z10=='l') && c10<b10)
			{
				cout<<"U guessed it correct .... so awarded with 1 point\n";
				system ("pause");
				system ("cls");
			}
			else if((z10=='H' || z10=='h') && c10>b10)
			{
				cout<<"U guessed it correct .... so awarded with 1 point\n";
				system ("pause");
				system ("cls");
			}
			else if((z10=='L' || z10=='l' || z10=='H' || z10=='h') && c10==b10)
			{
				cout<<"Superb the numbers were equal..... so awarded with one point\n";
				system ("pause");
				system ("cls");
			}
			else if((z10=='L' || z10=='l') && c10>b10)
			{
				cout<<"Sorry u guessed it wrong.... so u loose\n";
				system ("pause");
				exit (0);
			}
			else if((z10=='H' || z10=='h') && c10<b10)
			{
				cout<<"Sorry u guessed it wrong.... so u loose\n";
				system ("pause");
				exit (0);
			}
			else 
			{
				cout<<"U have enter it wrong try again \n\n";
				goto loop101;
			}
			w10=w10+1;
			}
			cout<<"\n\n\n\t\t  HURRAY U WON THE GAME \n\n";
			cout<<"\t\t      PRESS ENTER TO EXIT ";
			getch();
			exit(0);
			// End of case 1
      		}
      		break;
      		
		case '2':
			  {
  			   	int a20,b20,c20,d20,e20,f20,g20;
				char z30=219;
  			   	setcolor(12);
  			   	cout<<"\t\t     **********************************\n\n";
				cout<<"\t\t          WELCOME TO TICTACTOWE GAME \n\n";
				cout<<"\t\t     **********************************\n\n\n";
				setcolor(11);
				cout<<"\tRULES TO PLAY THE GAME \n\n";
				//cout<<"\t1.READ THE OTHER RULES CAREFULLY\n";
				cout<<"\t1.Player 1 has been given the 'O' symbol.\n";
				cout<<"\t2.Player 2 has been given the 'X' symbol.\n";
				cout<<"\t3.U have to press the number which is suitable for the box \n\t  which u have thought to play upon.\n";
				cout<<"\t4.If u press the number in which there already exists a 'O' or 'X' \n\t  U miss ur chance and will be given to the other player.\n";
				cout<<"\t5.When u press the number the place will be occupied by ur symbol.\n";
				cout<<"\t6.When u make a combination of 3 u win.  \n";
				cout<<"\t7.Then the GAME ENDS.";
				cout<<"\n\n \t\t PRESS ENTER TO ENTER THE GAME \n";
				setcolor(7);
				getch();
				system("cls");
				cout<<"\t\t     **********************************\n\n";
				cout<<"\t\t          	 TICTACTOE GAME \n\n";
				cout<<"\t\t     **********************************\n\n\n";
				int glotech = 1;
				for(int i=0;i<=12;i++){
					if(i%4==0){
						for(int i=0;i<=19;i++){
							if(i==0){
								cout<<"\t\t\t    ";
							}else {
								cout<<z30;
							}
						}cout<<"\n";
					}else {
						if(i%4==1 || i%4==3){
							for(int i=0;i<4;i++){
								if(i==0){
									cout<<"\t\t\t    "<<z30;
								}else {
									cout<<"     "<<z30;
								}
							}cout<<"\n";
						}else if(i%4==2){
							for(int i=0;i<4;i++){
								if(i==0){
									cout<<"\t\t\t    "<<z30;   
								}else{
									cout<<"  "<<glotech++<<"  "<<z30;
								}
							}cout<<"\n";
						}
					}
				}cout<<"\n\n";
				/*
				
				cout<<"\t\t\t    "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"\n";
				cout<<"\t\t\t    "<<z30<<"  "<<"1"<<"  "<<z30<<"  "<<"2"<<"  "<<z30<<"  "<<"3"<<"  "<<z30<<"\n";
				cout<<"\t\t\t    "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"\n";
				cout<<"\t\t\t    "<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<"\n";
				cout<<"\t\t\t    "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"\n";
				cout<<"\t\t\t    "<<z30<<"  "<<"4"<<"  "<<z30<<"  "<<"5"<<"  "<<z30<<"  "<<"6"<<"  "<<z30<<"\n";
				cout<<"\t\t\t    "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"\n";
				cout<<"\t\t\t    "<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<"\n";
				cout<<"\t\t\t    "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"\n";
				
				cout<<"\t\t\t    "<<z30<<"  "<<"7"<<"  "<<z30<<"  "<<"8"<<"  "<<z30<<"  "<<"9"<<"  "<<z30<<"\n";
				
				cout<<"\t\t\t    "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"\n";
				cout<<"\t\t\t    "<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<"\n";
				cout<<"\n\n";*/
				for(b20=1;b20<=30;b20++)
				{
		
						if(b20%2!=0)
					{
							cout<<"Chance of Player "<<"1"<<",  ";
							cin>>c20;
							tictactoe1(c20);
					}
						if(b20%2==0)
					{
							cout<<"Chance of Player "<<"2"<<",  ";
							cin>>c20;
							tictactoe2(c20);
					}
		       } // end of for loop  	
		       } // end of case 2
		       break;
     	case '3':
   			  {
   			  	setcolor(12);
   			  	cout<<"\t\t     ****************************************\n\n";
				cout<<"\t\t          WELCOME TO SNAKE AND LADDER GAME \n\n";
				cout<<"\t\t     ****************************************\n\n\n";
				setcolor(6);
				cout<<"\tRULES TO PLAY THE GAME \n\n";
				//cout<<"\t1.READ THE OTHER RULES CAREFULLY\n";
				cout<<"\t1.Player 1 has been given the 'O' symbol.\n";
				cout<<"\t2.Player 2 has been given the 'X' symbol.\n";
				cout<<"\t3.When u press any key. The dice gives a random valuve.\n";
				cout<<"\t4.When u get 6 in the dice u get an additional chance to play.\n";
				cout<<"\t5.The players symbol moves that many boxes forward. \n";
				cout<<"\t6.When ur symbol hits a ladder (L) it moves forward by 10 boxes. \n";
				cout<<"\t7.When ur symbol hits a snake (S) it moves back by 10 boxes.\n";
				cout<<"\t8.When u reach 100 or more than 100 u win. \n";
				cout<<"\t9.The player who reaches it first is considered as the winner.\n";
				cout<<"\t10.Then the GAME ENDS.";
				cout<<"\n\n \t\t PRESS ENTER TO ENTER THE GAME \n";
				setcolor(7);
				getch();
				system("cls");
				
  			   int a30,b30,c30,d30,f30,p30;
				// system ("color 10");
			//	 system ("color 03");
				 cout<<"\t\t\t      TRY YOUR LUCK\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[100]<<" | "<<zglosan[99]<<" | "<<zglosan[98]<<" | "<<zglosan[97]<<" | "<<zglosan[96]<<" | "<<zglosan[95]<<" | "<<zglosan[94]<<" | "<<zglosan[93]<<" | "<<zglosan[92]<<" | "<<zglosan[91]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[81]<<" | "<<zglosan[82]<<" | "<<zglosan[83]<<" | "<<zglosan[84]<<" | "<<zglosan[85]<<" | "<<zglosan[86]<<" | "<<zglosan[87]<<" | "<<zglosan[88]<<" | "<<zglosan[89]<<" | "<<zglosan[90]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[80]<<" | "<<zglosan[79]<<" | "<<zglosan[78]<<" | "<<zglosan[77]<<" | "<<zglosan[76]<<" | "<<zglosan[75]<<" | "<<zglosan[74]<<" | "<<zglosan[73]<<" | "<<zglosan[72]<<" | "<<zglosan[71]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[61]<<" | "<<zglosan[62]<<" | "<<zglosan[63]<<" | "<<zglosan[64]<<" | "<<zglosan[65]<<" | "<<zglosan[66]<<" | "<<zglosan[67]<<" | "<<zglosan[68]<<" | "<<zglosan[69]<<" | "<<zglosan[70]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[60]<<" | "<<zglosan[59]<<" | "<<zglosan[58]<<" | "<<zglosan[57]<<" | "<<zglosan[56]<<" | "<<zglosan[55]<<" | "<<zglosan[54]<<" | "<<zglosan[53]<<" | "<<zglosan[52]<<" | "<<zglosan[51]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[41]<<" | "<<zglosan[42]<<" | "<<zglosan[43]<<" | "<<zglosan[44]<<" | "<<zglosan[45]<<" | "<<zglosan[46]<<" | "<<zglosan[47]<<" | "<<zglosan[48]<<" | "<<zglosan[49]<<" | "<<zglosan[50]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[40]<<" | "<<zglosan[39]<<" | "<<zglosan[38]<<" | "<<zglosan[37]<<" | "<<zglosan[36]<<" | "<<zglosan[35]<<" | "<<zglosan[34]<<" | "<<zglosan[33]<<" | "<<zglosan[32]<<" | "<<zglosan[31]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[21]<<" | "<<zglosan[22]<<" | "<<zglosan[23]<<" | "<<zglosan[24]<<" | "<<zglosan[25]<<" | "<<zglosan[26]<<" | "<<zglosan[27]<<" | "<<zglosan[28]<<" | "<<zglosan[29]<<" | "<<zglosan[30]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[20]<<" | "<<zglosan[19]<<" | "<<zglosan[18]<<" | "<<zglosan[17]<<" | "<<zglosan[16]<<" | "<<zglosan[15]<<" | "<<zglosan[14]<<" | "<<zglosan[13]<<" | "<<zglosan[12]<<" | "<<zglosan[11]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[1]<<" | "<<zglosan[2]<<" | "<<zglosan[3]<<" | "<<zglosan[4]<<" | "<<zglosan[5]<<" | "<<zglosan[6]<<" | "<<zglosan[7]<<" | "<<zglosan[8]<<" | "<<zglosan[9]<<" | "<<zglosan[10]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 for(b30=0;;b30++)
				 {
					
					if(b30%2==0)
					{
						loop10:cout<<"Chance of player, 1 "<<"NOW ROLL"<<"\n";
						if (zglosan[eglosan]=='O')
						zglosan[eglosan]=' ';
						getch();
						srand(time(NULL));
						p30=rand()%6+1;
						//system ( "color 02" );
						switch(p30)
				 	{
							 case 1:cout<<"\t\t ------- \n";
									  cout<<"\t\t|       |\n";
									  cout<<"\t\t|   *   |\n";
									  cout<<"\t\t|       |\n";
									  cout<<"\t\t -------\n";
									  break;
						  
							 case 2:cout<<"\t\t ------- \n";
									  cout<<"\t\t|*      |\n";
									  cout<<"\t\t|       |\n";
									  cout<<"\t\t|      *|\n";
									  cout<<"\t\t -------\n";
									  break;
							 case 3:cout<<"\t\t ------- \n";
									  cout<<"\t\t| *     |\n";
									  cout<<"\t\t|   *   |\n";
									  cout<<"\t\t|     * |\n";
									  cout<<"\t\t -------\n";
									  break;
							 case 4:cout<<"\t\t ------- \n";
									  cout<<"\t\t|*     *|\n";
									  cout<<"\t\t|       |\n";
									  cout<<"\t\t|*     *|\n";
									  cout<<"\t\t -------\n";
									  break;
							 case 5:cout<<"\t\t ------- \n";
									  cout<<"\t\t|*     *|\n";
									  cout<<"\t\t|   *   |\n";
									  cout<<"\t\t|*     *|\n";
									  cout<<"\t\t -------\n";
									  break;
							 case 6:cout<<"\t\t ------- \n";
									  cout<<"\t\t|*     *|\n";
									  cout<<"\t\t|*     *|\n";
									  cout<<"\t\t|*     *|\n";
									  cout<<"\t\t -------\n";
									  break;
									  }
									system("pause");
									player1(p30);
								    	if(p30==6)
									  {
									  cout<<"\t    TRY ONCE MORE .. ";
									   goto loop10;
									  }
									 
									 }
				 
		 
					if(b30%2!=0)
						 {
							loop1:cout<<"Chance of player, 2 "<<"NOW ROLL"<<"\n";
							if (zglosan[gglosan]=='X')
							zglosan[gglosan]=' ';
							getch();
							srand(time(NULL));
							d30=rand()%6+1;
						//	system ("color 02");
						switch(d30)
						 {
							 case 1:cout<<"\t\t ------- \n";
									  cout<<"\t\t|       |\n";
									  cout<<"\t\t|   *   |\n";
									  cout<<"\t\t|       |\n";
									  cout<<"\t\t -------\n";
									  break;
						  
							 case 2:cout<<"\t\t ------- \n";
									  cout<<"\t\t|*      |\n";
									  cout<<"\t\t|       |\n";
									  cout<<"\t\t|      *|\n";
									  cout<<"\t\t -------\n";
									  break;
							 case 3:cout<<"\t\t ------- \n";
									  cout<<"\t\t| *     |\n";
									  cout<<"\t\t|   *   |\n";
									  cout<<"\t\t|     * |\n";
									  cout<<"\t\t -------\n";
									  break;
							 case 4:cout<<"\t\t ------- \n";
									  cout<<"\t\t|*     *|\n";
									  cout<<"\t\t|       |\n";
									  cout<<"\t\t|*     *|\n";
									  cout<<"\t\t -------\n";
									  break;
							 case 5:cout<<"\t\t ------- \n";
									  cout<<"\t\t|*     *|\n";
									  cout<<"\t\t|   *   |\n";
									  cout<<"\t\t|*     *|\n";
									  cout<<"\t\t -------\n";
									  break;
							 case 6:cout<<"\t\t ------- \n";
									  cout<<"\t\t|*     *|\n";
									  cout<<"\t\t|*     *|\n";
									  cout<<"\t\t|*     *|\n";
									  cout<<"\t\t -------\n";
									  break;
						 }
						  
									  system("pause");
								      player2(d30);
										if(d30==6)
								    	{
									  			cout<<"\t    TRY ONCE MORE .. ";
									  			goto loop1;
										  }
										

	 				     }

	 				}	
	
				      break;	 //break; 
			       case '4':{
                               int a,b,c,d,e,f,g=5,z[100]={1,1,1,1,1,1,1,1,1,1,1,1,1,1};
                                cout<<"\t\t     *********************************\n\n";
                                cout<<"\t\t         WELCOME TO THE QUIZ GAME \n\n";
                              	cout<<"\t\t     *********************************\n";
                                cout<<"\n\n\n\t\t    1.U will be Given 5 questions to answer.\n ";
                                cout<<"\t\t    2.For each right answer u get 1 point.\n";
                                cout<<"\t\t    3.There are a total of 15 questions from\n\t\t    that 5 questions will be picked up randomly.\n";
                                cout<<"\t\t    4.PRESS ENTER TO MOVE FORWARD.\n";
                              	getch(); system("cls");
	
	for(c=1;c<=g;c++)
	{                srand(time(NULL));
	                 a=rand()%15+1;
	                 switch(a)
	                 {
                             case 1: if(z[1]==1)
                                     {
                                     quizsymbol(c);
                                     cout<<"\n\n\t\t"<<"  When was Jana-gana-mana first sung? \n\n"; 
                                     cout<<"\t\t1) 1911\t\t2) 1947\n\t\t3) 1950\t\t4) 1951\n\n";
                                     b=getch();
                                                                     
                                     quizgame(b,a); z[1]++;
                                     }
                                     else 
                                     g++;
                                     break;
                             case 2: if(z[2]==1)
                                     {
                                     quizsymbol(c);
                                     cout<<"\n\n\t\t"<<"  How many hours is IST ahead of Greenwich Mean Time? \n\n"; 
                                     cout<<"\t\t1) 4.5 Hours\t\t2) 5 Hours\n\t\t3) 5.5 Hours\t\t4) 6 Hours\n\n";
                                     b=getch();
                                     
                                     quizgame(b,a); z[2]++;
                                     }
                                     else 
                                     g++;
                                     break;
                             case 3: if(z[3]==1)
                                     {
                                     quizsymbol(c);
                                     cout<<"\n\n\t\t"<<"  What is the official currency of Sweden? \n\n"; 
                                     cout<<"\t\t1) Swedish Dollar\t\t2) Swiss France\n\t\t3) Swedish Krona\t\t4) Euro\n\n";
                                     b=getch();
                                    
                                     quizgame(b,a); z[3]++;
                                     }
                                     else 
                                     g++;
                                     break;
                             case 4: if(z[4]==1)
                                     {
                                     quizsymbol(c);
                                     cout<<"\n\n\t\t"<<"  Which country uses the currency Dirham? \n\n"; 
                                     cout<<"\t\t1) Libya\t\t2) UAE\n\t\t3) Kuwait\t\t4) Saudi Arabia\n\n";
                                     b=getch();
                                     
                                     quizgame(b,a); z[4]++;
                                     }
                                     else 
                                     g++;
                                     break;
                             case 5: if(z[5]==1)
                                     {
                                     quizsymbol(c);
                                     cout<<"\n\n\t\t"<<"  The Euro is not used in which of the following countries? \n\n"; 
                                     cout<<"\t\t1) Germany\t\t2) Italy\n\t\t3) France\t\t4) Norway\n\n";
                                     b=getch();
                                     
                                     quizgame(b,a); z[5]++;
                                     }
                                     else 
                                     g++;
                                     break;
                             case 6: if(z[6]==1)
                                     {
                                     quizsymbol(c);
                                     cout<<"\n\n\t\t"<<"  Which state has its State Tree as the Almond? \n\n"; 
                                     cout<<"\t\t1) Himachal Pradesh\t\t2) Goa\n\t\t3) Jammu and Kashmir\t\t4) Arunachal Pradesh\n\n";
                                     b=getch();
                                     
                                     quizgame(b,a); z[6]++;
                                     }
                                     else 
                                     g++;
                                     break;
                             case 7: if(z[7]==1)
                                     {
                                     quizsymbol(c);
                                     cout<<"\n\n\t\t"<<"  In what state are the Elephant Falls located? \n\n"; 
                                     cout<<"\t\t1) Mizoram\t\t2) Orissa\n\t\t3) Manipur\t\t4) Meghalaya\n\n";
                                     b=getch();
                                    
                                     quizgame(b,a); z[7]++;
                                     }
                                     else 
                                     g++;
                                     break;
                             case 8: if(z[8]==1)
                                     {
                                     quizsymbol(c);
                                     cout<<"\n\n\t\t"<<"  Abdul Kalam was elected as president in which year? \n\n"; 
                                     cout<<"\t\t1) 1986\t\t2) 1992\n\t\t3) 1996\t\t4) 2002\n\n";
                                     b=getch();
                                      
                                     quizgame(b,a); z[8]++;
                                     }
                                     else 
                                     g++;
                                     break;
                             case 9: if(z[9]==1)
                                     {
                                     quizsymbol(c);
                                     cout<<"\n\n\t\t"<<"  The 13th Prime Minister of India was \n\n"; 
                                     cout<<"\t\t1) Atal Bihari Vajpayee\t\t2) I.K. Gujral\n\t\t3) Dr. Manmohan Singh\t\t4)  P. V. NARASIMHA RAO\n\n";
                                     b=getch();
                                    
                                     quizgame(b,a); z[9]++;
                                     }
                                     else 
                                     g++;
                                     break;
                            case 10: if(z[10]==1)
                                     {
                                     quizsymbol(c);
                                     cout<<"\n\n\t\t"<<"  Who assassinated Mahatma Gandhi? \n\n"; 
                                     cout<<"\t\t1) Karamchand\t\t2) Nathuram Godse\n\t\t3) Ashfaquallah Khan\t\t4)  None of the Above\n\n";
                                     b=getch();
                                    
                                     quizgame(b,a); z[10]++;
                                     }
                                     else 
                                     g++;
                                     break;
                            case 11: if(z[11]==1)
                                     {
                                     quizsymbol(c);
                                     cout<<"\n\n\t\t"<<"  Who was the first Indian in space? \n\n"; 
                                     cout<<"\t\t1)  Vikram Ambalal\t\t2) Ravish Malhotra\n\t\t3) Rakesh Sharma\t\t4)  Nagapathi Bhat\n\n";
                                     b=getch();
                                    
                                     quizgame(b,a); z[11]++;
                                     }
                                     else 
                                     g++;
                                     break;
                            case 12: if(z[12]==1)
                                     {
                                     quizsymbol(c);
                                     cout<<"\n\n\t\t"<<"  Who is the founder of Infosys Technologies? \n\n"; 
                                     cout<<"\t\t1) N.R. Narayana Murthy\t\t2) TK Kurien\n\t\t3) Azim Premji\t\t4)  Suresh Vaswani\n\n";
                                     b=getch();
                                    
                                     quizgame(b,a); z[12]++;
                                     }
                                     else 
                                     g++;
                                     break;
                            case 13: if(z[13]==1)
                                     {
                                     quizsymbol(c);
                                     cout<<"\n\n\t\t"<<"  What is part of a database that holds only one type of information? \n\n"; 
                                     cout<<"\t\t1) Report\t\t2) Field\n\t\t3) Record\t\t4) File\n\n";
                                     b=getch();
                                    
                                     quizgame(b,a); z[13]++;
                                     }
                                     else 
                                     g++;
                                     break;
                            case 14: if(z[14]==1)
                                     {
                                     quizsymbol(c);
                                     cout<<"\n\n\t\t"<<" In which decade with the first transatlantic radio broadcast occur? \n\n"; 
                                     cout<<"\t\t1) 1850s\t\t2) 1860s\n\t\t3) 1870s\t\t4) 1900s\n\n";
                                     b=getch();
                                    
                                     quizgame(b,a); z[14]++;
                                     }
                                     else 
                                     g++;
                                     break;
                            case 15: if(z[15]==1)
                                     {
                                     quizsymbol(c);
                                     cout<<"\n\n\t\t"<<" '.MPG' extension refers usually to what kind of file? \n\n"; 
                                     cout<<"\t\t1) WordPerfect Document file\t\t2) MS Office document\n\t\t3) Animation/movie file\t\t4) Image file\n\n";
                                     b=getch();
                                    
                                     quizgame(b,a); z[15]++;
                                     }
                                     else 
                                     g++;
                                     break;
                                    
                                    
                            
                             
                                  
                                     
                      }
                      
                      
                       }//end of for loop
                       
                       cout<<"\n\n\n\n\n\n\n\t\t\tYOUR SCORE IS "<<globalgloquiz<<" OUT OF 5";
                  getch();
                  exit(0);
   
                        }// end of case 4
                        break;
                        
                        case '5':{
                        			 cout<<"\t\t     *********************************\n\n";
                                	cout<<"\t\t         WELCOME TO THE QUIZ GAME \n\n";
                              		cout<<"\t\t     *********************************\n";
                                	cout<<"\n\n\n\t\t    1.There are total 16 boxes\n";
                                	cout<<"\t\t    2.In which the alphabets from A to O are jumbbled\n";
                                	cout<<"\t\t    3.U have to use arrow keys to navigate\n";
                                	cout<<"\t\t    4.By doing this u must bring all alphabets sequence \n\t\t    wise from A to O from 1 to 15\n";
                                	cout<<"\t\t    5.When u do this u WON\n";
                                	cout<<"\t\t    6.Press Enter to continue\n";
                              		getch(); system("cls");
                              		
                              			int a,b,c,d,e,f;
	int a20,b20,c20,ch120,ch220=0;
	
	int a1,b1,c1,d1,f1=1,num1=16,g1;
	char ch[17]={' ','A','B','C','D','E','F','G','H','I','J','K','L','M','N',' ','O'};
	char ch1[17]={' ','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O',' '};
	int abc[10000]={' ',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,00,0,0,0,0,0,0,0,00,0,0,0,0,0,0,0,00,0,0,0,0,0,0
	,0,00,0,0,0,0,0,0,0,00,0,0,0,0,0,0,0,00,0,0,0,0,0,0,0,00,0,0,0,0,0,0,0,00,0,0,0,0,0,0,0,0};
	
	srand(time(NULL));
	for(c1=1;c1<=num1;c1++)
	{
		d1=rand()%16+1;
	    if(abc[d1]==0)
		{
			ch[d1]=ch1[f1];
			f1++;
			abc[d1]=1;
		}	
		else 
		num1++;
	}
	cout<<"\t\t\t     WELCOME TO PUZZLE";
    cout<<"\n\n";
    cout<<"\t\t     ------- ------- ------- -------  \n";
    cout<<"\t\t    |       |       |       |       |  \n";
	cout<<"\t\t    |   "<<ch[1]<<"   |   "<<ch[2]<<"   |   "<<ch[3]<<"   |   "<<ch[4]<<"   |    \n"; 
	cout<<"\t\t    |       |       |       |       | \n"; 
	cout<<"\t\t    ------- ------- ------- -------  \n";
	cout<<"\t\t    |       |       |       |       |  \n";
	cout<<"\t\t    |   "<<ch[5]<<"   |   "<<ch[6]<<"   |   "<<ch[7]<<"   |   "<<ch[8]<<"   |    \n"; 
	cout<<"\t\t    |       |       |       |       | \n";
	cout<<"\t\t     ------- ------- ------- -------    \n";
    cout<<"\t\t    |       |       |       |       |   \n";
	cout<<"\t\t    |   "<<ch[9]<<"   |   "<<ch[10]<<"   |   "<<ch[11]<<"   |   "<<ch[12]<<"   |    \n"; 
	cout<<"\t\t    |       |       |       |       | \n"; 
	cout<<"\t\t     ------- ------- ------- -------   \n";
	cout<<"\t\t    |       |       |       |       |  \n";
	cout<<"\t\t    |   "<<ch[13]<<"   |   "<<ch[14]<<"   |   "<<ch[15]<<"   |   "<<ch[16]<<"   |    \n"; 
	cout<<"\t\t    |       |       |       |       |  \n";
	cout<<"\t\t     ------- ------- ------- -------    \n";
	
		for(b20=1;;b20++)	
	{
		
		for(a20=1;a20<=16;a20++)
		{
			if(ch[a20]==' ')
			{
					loop:ch120 = getch(); 
					ch220 = 0;
	
					if (ch120 == 0xE0) // a scroll key was pressed
					{
						ch220 = getch();
		
					}
					if(ch220==72)
					{
						if(a20+4<=16)
						{ch[a20]=ch[a20+4];
						ch[a20+4]=' ';
						break;}
						
					}
					else if(ch220==80)
					{
						if(a20-4>=1)
						{ch[a20]=ch[a20-4];
						ch[a20-4]=' ';
						break;}
					}
					else if(ch220==75)
					{
						if(a20==4 || a20==8 || a20==12 || a20==16)
						{
						goto loop;}
						else 
						{
							ch[a20]=ch[a20+1];
							ch[a20+1]=' ';
							break;
						}
					}
					else if(ch220==77)
					{
						if(a20==1 || a20==5 || a20==9 || a20==13)
						{
						goto loop;}
						else
						{
							ch[a20]=ch[a20-1];
							ch[a20-1]=' ';
							break;
						}
					}
					
					else 
					{
						cout<<"not possible";
					}
			}
		}
		
		system("cls");

	cout<<"\t\t\t     WELCOME TO PUZZLE";
    cout<<"\n\n";
    cout<<"\t\t     ------- ------- ------- -------  \n";
    cout<<"\t\t    |       |       |       |       |  \n";
	cout<<"\t\t    |   "<<ch[1]<<"   |   "<<ch[2]<<"   |   "<<ch[3]<<"   |   "<<ch[4]<<"   |    \n"; 
	cout<<"\t\t    |       |       |       |       | \n"; 
	cout<<"\t\t    ------- ------- ------- -------  \n";
	cout<<"\t\t    |       |       |       |       |  \n";
	cout<<"\t\t    |   "<<ch[5]<<"   |   "<<ch[6]<<"   |   "<<ch[7]<<"   |   "<<ch[8]<<"   |    \n"; 
	cout<<"\t\t    |       |       |       |       | \n";
	cout<<"\t\t     ------- ------- ------- -------    \n";
    cout<<"\t\t    |       |       |       |       |   \n";
	cout<<"\t\t    |   "<<ch[9]<<"   |   "<<ch[10]<<"   |   "<<ch[11]<<"   |   "<<ch[12]<<"   |    \n"; 
	cout<<"\t\t    |       |       |       |       | \n"; 
	cout<<"\t\t     ------- ------- ------- -------   \n";
	cout<<"\t\t    |       |       |       |       |  \n";
	cout<<"\t\t    |   "<<ch[13]<<"   |   "<<ch[14]<<"   |   "<<ch[15]<<"   |   "<<ch[16]<<"   |    \n"; 
	cout<<"\t\t    |       |       |       |       |  \n";
	cout<<"\t\t     ------- ------- ------- -------    \n";
	if(ch[1]=='A' && ch[2]=='B' && ch[3]=='C' && ch[4]=='D' && ch[5]=='E' && ch[6]=='F' && ch[7]=='G' && ch[8]=='H' && ch[9]=='I' && ch[10]=='J' && ch[11]=='K' && ch[12]=='L' && ch[13]=='M' && ch[14]=='N' && ch[15]=='O' && ch[16]==' ' )
	{
		cout<<"U WON THE GAME\n";
		getch(); exit(0);
	}
		}}
     
   			  }//End of 5th switch
   			  break;
   			  
   			  		case '6':{	
						 			setcolor(12);	
   			  						cout<<"\t\t     *********************************\n\n";
                                	cout<<"\t\t         WELCOME TO THE MAZE GAME \n\n";
                              		cout<<"\t\t     *********************************\n";
                                	cout<<"\n\n\n\t    1.There is a Grid of 600 boxes in which u can move.\n";
                                	cout<<"\t    2.For player 1 'B' The controls are 'k' to move down\n\t     'i' to move up, 'j' to move left and 'l' to move right. \n";
                                	cout<<"\t    3.For player 2 'A' The controls are 's' to move down\n\t     'w' to move up, 'a' to move left and 'd' to move right. \n";
                                	cout<<"\t    4.By pressing these buttons u must tackle the moving faces.\n";
                                	cout<<"\t    5.If you hit the moving faces u will be shiffted backward.\n";
                                	cout<<"\t    6.The one who reaches the door at the end .. WINS THE GAME. \n";
                                	cout<<"\t    7.Press enter to start the game.\n";
                                	cout<<"\t    8.The number of loops will be shown in the bottom.\n";
                                	cout<<"\t    9.You must finish the game in 1200 loops.\n";
                                	cout<<"\t    10.If no one has reached the door within 1200 loops the game \n\t   will be considered as a draw match.\n";
                                	cout<<"\t    11.Press 'e' to exit the game. \n";
                                	setcolor(7);
                              		getch(); system("cls");
                              		
		  			   			int a,c,d,e=61,f=31,g,h,ch120,ch220=0,i1=30,j1=4,k1=10,l,m,n=15,o=15,b1,v10=14,v2=256,v3=77,v4=589,v5=572,v6=110,v7=114,v8=354,v9=112,v11=4,v12=10,v13=310,v14=14,loope;
							unsigned long int b;
							char z[1000],x,y; 
							char choice;
	for(a=0;a<=599;a++)
	{
		if(a%30==0)
		cout<<"\n\t";
		
		z[a]=' ';
		cout<<" "<<z[a];
	}
	for(loope=0;loope<=590;loope=loope+30)
	z[loope]=67;
	
	for(loope=29;loope<=599;loope=loope+30)
	z[loope]=67;
	
	for(loope=0;loope<=29;loope++)
	z[loope]=67;
	
	for(loope=570;loope<=599;loope++)
	z[loope]=67;
	
	z[e]='A';
	z[f]='B';
	z[80]=67;z[110]=67;z[140]=67;z[170]=67;z[200]=67;z[7]=67;z[67]=67;z[97]=67;
	z[127]=67;z[157]=67;z[187]=67;z[217]=67;z[247]=67;z[277]=67;z[307]=67;z[337]=67;
	z[367]=67;z[397]=67;
	z[3]=67;z[33]=67;z[63]=67;z[93]=67;z[123]=67;z[153]=67;z[183]=67;z[213]=67;z[243]=67;
	z[273]=67;z[303]=67;z[333]=67;z[363]=67;z[393]=67;z[423]=67;z[453]=67;z[483]=67;z[543]=67;
	z[573]=67;
	z[276]=67;z[125]=67;z[126]=67;z[275]=67;z[335]=67;z[365]=67;z[395]=67;z[425]=67;
	z[456]=67;z[455]=67;z[457]=67;z[398]=67;z[399]=67;z[429]=67;z[459]=67;z[489]=67;
	z[519]=67;z[549]=67;z[579]=67;
	z[71]=67;z[99]=67;z[98]=67;z[102]=67;z[132]=67;z[188]=67;z[101]=67;z[222]=67;
	z[252]=67;z[192]=67;z[162]=67;z[161]=67;z[251]=67;z[189]=67;z[219]=67;z[249]=67;
	z[277]=67;z[279]=67;z[309]=67;
	z[341]=67;z[311]=67;z[282]=67;z[371]=67;z[401]=67;z[431]=67;z[461]=67;z[491]=67;z[521]=67;
	z[553]=67;z[433]=67;z[463]=67;z[493]=67;z[523]=67;z[403]=67;z[373]=67;z[343]=67;
	z[315]=67;z[345]=67;z[344]=67;z[253]=67;z[256]=67;z[285]=67;z[165]=67;z[166]=67;
	z[196]=67;z[226]=67;z[223]=67;z[103]=67;z[136]=67;z[106]=67;
	z[76]=67;z[78]=67;z[108]=67;z[138]=67;z[168]=67;z[198]=67;z[228]=67;z[258]=67;
	z[497]=67;z[498]=67;z[468]=67;z[438]=67;
	z[408]=67;z[378]=67;z[348]=67;z[318]=67;z[288]=67;z[495]=67;z[525]=67;z[141]=67;
	z[171]=67;z[201]=67;z[231]=67;z[261]=67;z[291]=67;z[321]=67;z[351]=67;z[381]=67;
	z[140]=' ';z[110]=' ';z[170]=' ';z[200]=' ';
	z[80]=' ';z[411]=67;z[441]=67;z[471]=67;z[501]=67;z[531]=67;z[561]=67;z[80]=67;
	z[81]=67;z[26]=67;
	z[56]=67;z[86]=67;z[116]=67;z[146]=67;z[176]=67;z[206]=67;z[236]=67;z[266]=67;
	z[296]=67;z[326]=67;
	z[356]=67;z[386]=67;z[416]=67;z[446]=67;z[476]=67;z[506]=67;z[536]=67;
	//z[183]=67;
	z[84]=67;z[205]=67;z[143]=67;z[113]=67;z[173]=67;z[203]=67;z[293]=67;
	z[323]=67;z[353]=67;z[295]=67;z[505]=67;z[503]=67;z[383]=67;
	z[413]=67;z[443]=67;z[235]=67;z[533]=67;z[58]=178;
	z[41]=67; z[48]=67; z[412]=67;z[114]=67;
	
	
	for(b=0;b<=100000;b++)
	{
		if(b==1200)
		{
			loop152:cout<<"\n It is a draw match\n";
			cout<<"Press 'e' to exit.\n";
			choice=getch();
			if(choice=='e')
			exit(0);
			else
			goto loop152;
			
		}
		if(kbhit())
		{
			//ch120 = getch(); 
					ch220 = 0;
					/*if (ch120 == 0xE0) // a scroll key was pressed
					{
						ch220 = getch();
						
		
					}*/
					ch220=getch();
					
					
					if(ch220==119 && e-30>=1)
					{
						if(z[e-30]!=67)
						{z[e-30]='A';
						z[e]=' ';
						e=e-30;}
						Sleep(40);
					}
					else if(ch220==105 && f-30>=1)
					{
						if(z[f-30]!=67)
						{z[f-30]='B';
						z[f]=' ';
						f=f-30;}
					}
					
					if(ch220==115 && e+30<=599)
					{
						if(z[e+30]!=67)
						{z[e+30]='A';
						z[e]=' ';
						e=e+30;}
						Sleep(40);
					}
					else if(ch220==107 && f+30<=599)
					{
						if(z[f+30]!=67)
						{z[f+30]='B';
						z[f]=' ';
						f=f+30;}
					}
					
					if(ch220==97 && e-1>=1 )
					{
						if(z[e-1]!=67)
						{z[e-1]='A';
						z[e]=' ';
						e=e-1;}
						Sleep(40);
					}
					else if(ch220==106 && e-1>=1 )
					{
						if(z[f-1]!=67)
						{z[f-1]='B';
						z[f]=' ';
						f=f-1;}
					}
					
					if(ch220==100 && e+1<=599 )
					{
						if(z[e+1]!=67)
						{z[e+1]='A';
						z[e]=' ';
						e=e+1;}
						Sleep(40);
					}
					else if(ch220==108 && e+1<=599 )
					{
						if(z[f+1]!=67)
						{z[f+1]='B';
						z[f]=' ';
						f=f+1;}
					}
					else 
					cout<<"";
		
					
		}
		
	
		if(v2!=526)
		{
			v2=v2+30;
			if(z[v2+30]=='A' || z[v2]=='A')
			{
				z[31]='A'; e=46; z[46]='A'; z[31]=' ';
			}
			if(z[v2+30]=='B' || z[v2]=='B')
			{
				z[61]='B'; f=46;  z[46]='B'; z[61]=' ';
			}
			z[v2+30]=1;
		}
		else 
		v2=256;
		
		if(v3!=407)
		{
			v3=v3+30;
			if(z[v3+30]=='A' || z[v3]=='A')
			{
				z[31]='A'; e=46; z[46]='A'; z[31]=' ';
			}
			if(z[v3+30]=='B' || z[v3]=='B')
			{
				z[61]='B'; f=46;  z[46]='B'; z[61]=' ';
			}
			z[v3+30]=1;
		}
		else 
		v3=77;
		
		if(v4!=79)
		{
			v4=v4-30;
			if(z[v4-30]=='A' || z[v4]=='A')
			{
				z[31]='A'; e=554; z[554]='A'; z[31]=' ';
			}
			if(z[v4-30]=='B' || z[v4]=='B')
			{
				z[61]='B'; f=554;  z[554]='B'; z[61]=' ';
			}
			z[v4-30]=1;
		}
		else 
		v4=589;
		
		if(v5!=62)
		{
			v5=v5-30;
			if(z[v5-30]=='A' || z[v5]=='A')
			{
				z[31]='A'; e=31; z[31]='A';
			}
			if(z[v5-30]=='B' || z[v5]=='B')
			{
				z[61]='B'; f=61; z[61]='B'; 
			}
			z[v5-30]=1;
		}
		else 
		v5=572;
		
		if(v6!=470)
		{
			v6=v6+30;
			if(z[v6+30]=='A' || z[v6]=='A')
			{
				z[31]='A'; e=554; z[554]='A'; z[31]=' ';
			}
			if(z[v6+30]=='B' || z[v6]=='B')
			{
				z[61]='B'; f=554;  z[554]='B'; z[61]=' ';
			}
			z[v6+30]=1;
		}
		else 
		v6=110;
		
		if(v7!=354)
		{
			v7=v7+30;
			if(z[v7+30]=='A' || z[v7]=='A')
			{
				z[31]='A'; e=50; z[50]='A'; z[31]=' ';
			}
			if(z[v7+30]=='B' || z[v7]=='B')
			{
				z[61]='B'; f=50; z[50]='B'; z[61]=' ';
			}
			z[v7+30]=1;
		}
		else 
		v7=114;
		
		if(v8!=534)
		{
			v8=v8+30;
			if(z[v8+30]=='A' || z[v8]=='A')
			{
				z[31]='A'; e=50; z[50]='A'; z[31]=' ';
			}
			if(z[v8+30]=='B' || z[v8]=='B')
			{
				z[61]='B';  f=50; z[50]='B'; z[61]=' ';
			}
			z[v8+30]=1;
		}
		else 
		v8=354;
		
		if(v9!=292)
		{
			v9=v9+30;
			if(z[v9+30]=='A' || z[v9]=='A')
			{
				z[31]='A'; e=50; z[50]='A'; z[31]=' ';
			}
			if(z[v9+30]=='B' || z[v9]=='B')
			{
				z[61]='B'; f=50; z[50]='B'; z[61]=' ';
			}
			z[v9+30]=1;
		}
		else 
		v9=112;
		
		if(v11!=514)
		{
			v11=v11+30;
			if(z[v11+30]=='A' || z[v11]=='A')
			{
				z[31]='A'; e=548; z[548]='A'; z[31]=' ';
			}
			if(z[v11+30]=='B' || z[v11]=='B')
			{
				z[61]='B';  f=548; z[548]='B'; z[61]=' ';
			}
			z[v11+30]=1;
		}
		else 
		v11=4;
		
		if(v12!=460)
		{
			v12=v12+30;
			if(z[v12+30]=='A' || z[v12]=='A')
			{
				z[31]='A'; e=38; z[38]='A'; z[31]=' ';
			}
			if(z[v12+30]=='B' || z[v12]=='B')
			{
				z[61]='B'; f=61; z[38]='B'; z[61]=' ';
			}
			z[v12+30]=1;
		}
		else 
		v12=10;
	
		
		if(v14!=254)
		{
			v14=v14+30;
			if(z[v14+30]=='A' || z[v14]=='A')
			{
				z[31]='A'; e=552; z[552]='A'; z[31]=' ';
			}
			if(z[v14+30]=='B' || z[v14]=='B')
			{
				z[61]='B'; f=61; z[552]='B'; z[61]=' ';
			}
			z[v14+30]=1;
		}
		else 
		v14=14;		
	
		
		system("cls");
		
		for(g=0;g<=599;g++)
		{
		if(g%30==0)
		cout<<"\n\t";
		
		
		cout<<" "<<z[g];
		}
	
	//	z[k1+30]=' ';
	//	z[v1+30]=' ';
		z[v2+30]=' ';
		z[v3+30]=' ';
		z[v4-30]=' ';
		z[v5-30]=' ';
		z[v6+30]=' ';
		z[v7+30]=' ';
		z[v8+30]=' ';
		z[v9+30]=' ';
		z[v11+30]=' ';
		z[v12+30]=' ';
		z[v13+30]=' ';
		z[v14+30]=' ';
		
		if(z[58]=='A')
		{
			cout<<"\n\n"<<"A won the game\n";
			cout<<"YOU FINISHED THE GAME IN "<<b<<" LOOPS\n";
			cout<<"Press 'e' to exit\n";
			choice=getch();
			if(choice=='e')
			exit(0);
		}
		if(z[58]=='B')
		{
			cout<<"\n\n"<<"B won the game\n";
			cout<<"YOU FINISHED THE GAME IN "<<b<<" LOOPS\n";
			cout<<"Press 'e' to exit\n";
			choice=getch();
			if(choice=='e')
			exit(0);
		}
		z[142]=67;
		cout<<b;
	}
		  			   		}//end of 6th switch
		  			   		break;
                        
				default: exit(0);
  			  } 
  			
	
	
	getch();
	
}


// start of the function of tictactoe player 1
int tictactoe1(int atic1)
{
    system("cls");
	if(xglotic[atic1]==' ')
	xglotic[atic1]='O';
	else 
	{
    cout<<"U tried to cheat so chance cut";
    }
    char z30=219;
    //xglotic[1]='A';xglotic[2]='A';xglotic[3]='A';xglotic[4]='A';xglotic[5]='A';xglotic[6]='A';xglotic[7]='A';xglotic[8]='A';xglotic[9]='A';
		
	cout<<"    TIC TAC TOE GAME \n\n";
	cout<<"   "<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<"                 "<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<"\n";
	
	cout<<"   "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"                 "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"\n";
	cout<<"   "<<z30<<"  "<<xglotic[1]<<"  "<<z30<<"  "<<xglotic[2]<<"  "<<z30<<"  "<<xglotic[3]<<"  "<<z30<<"		       "<<z30<<"  1  "<<z30<<"  2  "<<z30<<"  3  "<<z30<<"\n";
	cout<<"   "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"                 "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"\n";
	cout<<"   "<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<"                 "<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<"\n";
	cout<<"   "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"                 "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"\n";
	cout<<"   "<<z30<<"  "<<xglotic[4]<<"  "<<z30<<"  "<<xglotic[5]<<"  "<<z30<<"  "<<xglotic[6]<<"  "<<z30<<"		       "<<z30<<"  4  "<<z30<<"  5  "<<z30<<"  6  "<<z30<<"\n";
	cout<<"   "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"                 "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"\n";
	cout<<"   "<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<"                 "<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<"\n";
	cout<<"   "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"                 "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"\n";
	cout<<"   "<<z30<<"  "<<xglotic[7]<<"  "<<z30<<"  "<<xglotic[8]<<"  "<<z30<<"  "<<xglotic[9]<<"  "<<z30<<"		       "<<z30<<"  7  "<<z30<<"  8  "<<z30<<"  9  "<<z30<<"\n";
	cout<<"   "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"                 "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"\n";
	
	cout<<"   "<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<"                 "<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<"\n";
	cout<<"\n\n"; 
	/*int glotech = 0;
	for(int i=0;i<=12;i++){
					if(i%4==0){
						for(int i=0;i<=19;i++){
							if(i==0){
								cout<<"\t\t\t    ";
							}else {
								cout<<z30;
							}
						}cout<<"\n";
					}else {
						if(i%4==1 || i%4==3){
							for(int i=0;i<4;i++){
								if(i==0){
									cout<<"\t\t\t    "<<z30;
								}else {
									cout<<"     "<<z30;
								}
							}cout<<"\n";
						}else if(i%4==2){
							for(int i=0;i<4;i++){
								if(i==0){
									cout<<"\t\t\t    "<<z30;   
								}else{
									cout<<"  "<<xglotic[glotech++]<<"  "<<z30;
								}
							}cout<<"\n";
						}
					}
				}cout<<"\n\n";*/
	if(xglotic[1]=='O' && xglotic[2]=='O' && xglotic[3]=='O')
	{
			cout<<"Player 1 wins \n";
			system("PAUSE");
			exit(0);
	}
	else if(xglotic[4]=='O' && xglotic[5]=='O' && xglotic[6]=='O')
	{
		cout<<"Player 1 wins \n";
        system("PAUSE");
        	exit(0);
	}
	else if(xglotic[7]=='O' && xglotic[8]=='O' && xglotic[9]=='O')
	{
		cout<<"Player 1 wins \n";
 		system("PAUSE");
 			exit(0);
	}
	else if(xglotic[1]=='O' && xglotic[4]=='O' && xglotic[7]=='O')
	{
		cout<<"Player 1 wins \n";
		system("PAUSE");
			exit(0);
	}
	else if(xglotic[2]=='O' && xglotic[5]=='O' && xglotic[8]=='O')
	{
		cout<<"Player 1 wins \n";
		system("PAUSE");
			exit(0);
	}
	else if(xglotic[3]=='O' && xglotic[6]=='O' && xglotic[9]=='O')
	{
		cout<<"Player 1 wins \n";
		system("PAUSE");
			exit(0);
	}
	else if(xglotic[1]=='O' && xglotic[5]=='O' && xglotic[9]=='O')
	{
		cout<<"Player 1 wins \n";
		system("PAUSE");
			exit(0);
	}
	else if(xglotic[3]=='O' && xglotic[5]=='O' && xglotic[7]=='O')
	{
		cout<<"Player 1 wins \n";
		system("PAUSE");
			exit(0);
	}
	else 
	cout<<"";
	if(xglotic[1]!=' ' && xglotic[2]!=' ' && xglotic[3]!=' ' && xglotic[4]!=' ' && xglotic[5]!=' ' && xglotic[6]!=' ' && xglotic[7]!=' ' && xglotic[8]!=' ' && xglotic[9]!=' ')
	{
	     cout<<"IT IS A DRAW \n";
	     getch();
	     exit(0);
	}
	
}
// start of the function of tictactoe player 2

int tictactoe2(int atic2)
{
    system("cls");
    
	if(xglotic[atic2]==' ')
	xglotic[atic2]='X';
	else
    { 
    
    cout<<"U tried to cheat so chance cut";
    
    }
    char z30=219;
	cout<<"    TIC TAC TOE GAME \n\n";
	
	cout<<"   "<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<"                 "<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<"\n";
	
	cout<<"   "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"                 "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"\n";
	cout<<"   "<<z30<<"  "<<xglotic[1]<<"  "<<z30<<"  "<<xglotic[2]<<"  "<<z30<<"  "<<xglotic[3]<<"  "<<z30<<"		       "<<z30<<"  1  "<<z30<<"  2  "<<z30<<"  3  "<<z30<<"\n";
	cout<<"   "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"                 "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"\n";
	cout<<"   "<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<"                 "<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<"\n";
	cout<<"   "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"                 "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"\n";
	cout<<"   "<<z30<<"  "<<xglotic[4]<<"  "<<z30<<"  "<<xglotic[5]<<"  "<<z30<<"  "<<xglotic[6]<<"  "<<z30<<"		       "<<z30<<"  4  "<<z30<<"  5  "<<z30<<"  6  "<<z30<<"\n";
	cout<<"   "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"                 "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"\n";
	cout<<"   "<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<"                 "<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<"\n";
	cout<<"   "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"                 "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"\n";
	cout<<"   "<<z30<<"  "<<xglotic[7]<<"  "<<z30<<"  "<<xglotic[8]<<"  "<<z30<<"  "<<xglotic[9]<<"  "<<z30<<"		       "<<z30<<"  7  "<<z30<<"  8  "<<z30<<"  9  "<<z30<<"\n";
	cout<<"   "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"                 "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"\n";
	
	cout<<"   "<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<"                 "<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<"\n";
	cout<<"\n\n"; 
	if(xglotic[1]=='X' && xglotic[2]=='X' && xglotic[3]=='X')
	{
			cout<<"Player 2 wins \n";
			system("PAUSE");
			
			exit(0);
	}
	else if(xglotic[4]=='X' && xglotic[5]=='X' && xglotic[6]=='X')
	{
		cout<<"Player 2 wins \n";
        system("PAUSE");
        
        	exit(0);
	}
	else if(xglotic[7]=='X' && xglotic[8]=='X' && xglotic[9]=='X')
	{
		cout<<"Player 2 wins \n";
 		system("PAUSE");
 		
 			exit(0);
	}
	else if(xglotic[1]=='X' && xglotic[4]=='X' && xglotic[7]=='X')
	{
		cout<<"Player 2 wins \n";
		system("PAUSE");
		
			exit(0);
	}
	else if(xglotic[2]=='X' && xglotic[5]=='X' && xglotic[8]=='X')
	{
		cout<<"Player 2 wins \n";
		system("PAUSE");
		
			exit(0);
	}
	else if(xglotic[3]=='X' && xglotic[6]=='X' && xglotic[9]=='X')
	{
		cout<<"Player 2 wins \n";
		system("PAUSE");
		
			exit(0);
	}
	else if(xglotic[1]=='X' && xglotic[5]=='X' && xglotic[9]=='X')
	{
		cout<<"Player 2 wins \n";
		system("PAUSE");
		
			exit(0);
	}
	else if(xglotic[3]=='X' && xglotic[5]=='X' && xglotic[7]=='X')
	{
		cout<<"Player 2 wins \n";
		system("PAUSE");
		
			exit(0);
	}
	else 
	cout<<"";
	if(xglotic[1]!=' ' && xglotic[2]!=' ' && xglotic[3]!=' ' && xglotic[4]!=' ' && xglotic[5]!=' ' && xglotic[6]!=' ' && xglotic[7]!=' ' && xglotic[8]!=' ' && xglotic[9]!=' ')
	{
	     cout<<"IT IS A DRAW \n";
	     getch();
	     
	     exit(0);
	}
}

int player1(int dsan1)
{
	 int ysan1,asan1,fsan1,ksan1,msan1,nsan1=0,osan1=0,qsan1=0;


	 bglosan=bglosan+dsan1;
	 
	 eglosan=bglosan;
	 
	 if(zglosan[bglosan]=='L')
	 {
	 	
		  qsan1=bglosan;
		  bglosan=bglosan+10;
		  
		  }
	 if(zglosan[bglosan]=='S')
	 {
	 	rglosan=bglosan;
					  osan1=bglosan;
					  bglosan=bglosan-10;
}
	 
	 zglosan[bglosan]='O';
	 



	 if(bglosan>=100)
	 {
		cout<<"PLAYER 1 WINS\n";
		getch();
		
		exit(0);
	 }

	for(ysan1=1;ysan1<=dsan1;ysan1++)
	{




			    loop:cout<<"\t\t\t      TRY YOUR LUCK\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[100]<<" | "<<zglosan[99]<<" | "<<zglosan[98]<<" | "<<zglosan[97]<<" | "<<zglosan[96]<<" | "<<zglosan[95]<<" | "<<zglosan[94]<<" | "<<zglosan[93]<<" | "<<zglosan[92]<<" | "<<zglosan[91]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[81]<<" | "<<zglosan[82]<<" | "<<zglosan[83]<<" | "<<zglosan[84]<<" | "<<zglosan[85]<<" | "<<zglosan[86]<<" | "<<zglosan[87]<<" | "<<zglosan[88]<<" | "<<zglosan[89]<<" | "<<zglosan[90]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[80]<<" | "<<zglosan[79]<<" | "<<zglosan[78]<<" | "<<zglosan[77]<<" | "<<zglosan[76]<<" | "<<zglosan[75]<<" | "<<zglosan[74]<<" | "<<zglosan[73]<<" | "<<zglosan[72]<<" | "<<zglosan[71]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[61]<<" | "<<zglosan[62]<<" | "<<zglosan[63]<<" | "<<zglosan[64]<<" | "<<zglosan[65]<<" | "<<zglosan[66]<<" | "<<zglosan[67]<<" | "<<zglosan[68]<<" | "<<zglosan[69]<<" | "<<zglosan[70]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[60]<<" | "<<zglosan[59]<<" | "<<zglosan[58]<<" | "<<zglosan[57]<<" | "<<zglosan[56]<<" | "<<zglosan[55]<<" | "<<zglosan[54]<<" | "<<zglosan[53]<<" | "<<zglosan[52]<<" | "<<zglosan[51]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[41]<<" | "<<zglosan[42]<<" | "<<zglosan[43]<<" | "<<zglosan[44]<<" | "<<zglosan[45]<<" | "<<zglosan[46]<<" | "<<zglosan[47]<<" | "<<zglosan[48]<<" | "<<zglosan[49]<<" | "<<zglosan[50]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[40]<<" | "<<zglosan[39]<<" | "<<zglosan[38]<<" | "<<zglosan[37]<<" | "<<zglosan[36]<<" | "<<zglosan[35]<<" | "<<zglosan[34]<<" | "<<zglosan[33]<<" | "<<zglosan[32]<<" | "<<zglosan[31]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[21]<<" | "<<zglosan[22]<<" | "<<zglosan[23]<<" | "<<zglosan[24]<<" | "<<zglosan[25]<<" | "<<zglosan[26]<<" | "<<zglosan[27]<<" | "<<zglosan[28]<<" | "<<zglosan[29]<<" | "<<zglosan[30]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[20]<<" | "<<zglosan[19]<<" | "<<zglosan[18]<<" | "<<zglosan[17]<<" | "<<zglosan[16]<<" | "<<zglosan[15]<<" | "<<zglosan[14]<<" | "<<zglosan[13]<<" | "<<zglosan[12]<<" | "<<zglosan[11]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[1]<<" | "<<zglosan[2]<<" | "<<zglosan[3]<<" | "<<zglosan[4]<<" | "<<zglosan[5]<<" | "<<zglosan[6]<<" | "<<zglosan[7]<<" | "<<zglosan[8]<<" | "<<zglosan[9]<<" | "<<zglosan[10]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
	if(dsan1==1)
	{
		system("cls");
				cout<<"\t\t\t      TRY YOUR LUCK\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[100]<<" | "<<zglosan[99]<<" | "<<zglosan[98]<<" | "<<zglosan[97]<<" | "<<zglosan[96]<<" | "<<zglosan[95]<<" | "<<zglosan[94]<<" | "<<zglosan[93]<<" | "<<zglosan[92]<<" | "<<zglosan[91]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[81]<<" | "<<zglosan[82]<<" | "<<zglosan[83]<<" | "<<zglosan[84]<<" | "<<zglosan[85]<<" | "<<zglosan[86]<<" | "<<zglosan[87]<<" | "<<zglosan[88]<<" | "<<zglosan[89]<<" | "<<zglosan[90]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[80]<<" | "<<zglosan[79]<<" | "<<zglosan[78]<<" | "<<zglosan[77]<<" | "<<zglosan[76]<<" | "<<zglosan[75]<<" | "<<zglosan[74]<<" | "<<zglosan[73]<<" | "<<zglosan[72]<<" | "<<zglosan[71]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[61]<<" | "<<zglosan[62]<<" | "<<zglosan[63]<<" | "<<zglosan[64]<<" | "<<zglosan[65]<<" | "<<zglosan[66]<<" | "<<zglosan[67]<<" | "<<zglosan[68]<<" | "<<zglosan[69]<<" | "<<zglosan[70]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[60]<<" | "<<zglosan[59]<<" | "<<zglosan[58]<<" | "<<zglosan[57]<<" | "<<zglosan[56]<<" | "<<zglosan[55]<<" | "<<zglosan[54]<<" | "<<zglosan[53]<<" | "<<zglosan[52]<<" | "<<zglosan[51]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[41]<<" | "<<zglosan[42]<<" | "<<zglosan[43]<<" | "<<zglosan[44]<<" | "<<zglosan[45]<<" | "<<zglosan[46]<<" | "<<zglosan[47]<<" | "<<zglosan[48]<<" | "<<zglosan[49]<<" | "<<zglosan[50]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[40]<<" | "<<zglosan[39]<<" | "<<zglosan[38]<<" | "<<zglosan[37]<<" | "<<zglosan[36]<<" | "<<zglosan[35]<<" | "<<zglosan[34]<<" | "<<zglosan[33]<<" | "<<zglosan[32]<<" | "<<zglosan[31]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[21]<<" | "<<zglosan[22]<<" | "<<zglosan[23]<<" | "<<zglosan[24]<<" | "<<zglosan[25]<<" | "<<zglosan[26]<<" | "<<zglosan[27]<<" | "<<zglosan[28]<<" | "<<zglosan[29]<<" | "<<zglosan[30]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[20]<<" | "<<zglosan[19]<<" | "<<zglosan[18]<<" | "<<zglosan[17]<<" | "<<zglosan[16]<<" | "<<zglosan[15]<<" | "<<zglosan[14]<<" | "<<zglosan[13]<<" | "<<zglosan[12]<<" | "<<zglosan[11]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[1]<<" | "<<zglosan[2]<<" | "<<zglosan[3]<<" | "<<zglosan[4]<<" | "<<zglosan[5]<<" | "<<zglosan[6]<<" | "<<zglosan[7]<<" | "<<zglosan[8]<<" | "<<zglosan[9]<<" | "<<zglosan[10]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
	}
	 if(ysan1!=dsan1) 
     system("cls");
	 

	 }
	 
	 if(zglosan[osan1]=='S')
	 zglosan[bglosan]=' ';
	 if(zglosan[qsan1]=='L')
	 zglosan[bglosan]=' ';



 }
 
 int player2(int dsan2)
{
	int ysan2,asan2,osan2=0,qsan2=0;



	 cglosan=cglosan+dsan2;
	 
	 gglosan=cglosan;
	 
	 if(zglosan[cglosan]=='L')
	 {
	 	w1glosan=cglosan;
	 	
	 qsan2=cglosan;
	 
	 cglosan=cglosan+10;
	 }
	 if(zglosan[cglosan]=='S')
	 {
	 	r1glosan=cglosan;
					  osan2=cglosan;
					  cglosan=cglosan-10;
}
	 zglosan[cglosan]='X';
	 if(cglosan>=100)
	 {
		cout<<"PLAYER 2 WINS\n";
		getch();
		
		exit(0);
	 }
	 
	for(ysan2=1;ysan2<=dsan2;ysan2++)
	{



			     cout<<"\t\t\t      TRY YOUR LUCK\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[100]<<" | "<<zglosan[99]<<" | "<<zglosan[98]<<" | "<<zglosan[97]<<" | "<<zglosan[96]<<" | "<<zglosan[95]<<" | "<<zglosan[94]<<" | "<<zglosan[93]<<" | "<<zglosan[92]<<" | "<<zglosan[91]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[81]<<" | "<<zglosan[82]<<" | "<<zglosan[83]<<" | "<<zglosan[84]<<" | "<<zglosan[85]<<" | "<<zglosan[86]<<" | "<<zglosan[87]<<" | "<<zglosan[88]<<" | "<<zglosan[89]<<" | "<<zglosan[90]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[80]<<" | "<<zglosan[79]<<" | "<<zglosan[78]<<" | "<<zglosan[77]<<" | "<<zglosan[76]<<" | "<<zglosan[75]<<" | "<<zglosan[74]<<" | "<<zglosan[73]<<" | "<<zglosan[72]<<" | "<<zglosan[71]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[61]<<" | "<<zglosan[62]<<" | "<<zglosan[63]<<" | "<<zglosan[64]<<" | "<<zglosan[65]<<" | "<<zglosan[66]<<" | "<<zglosan[67]<<" | "<<zglosan[68]<<" | "<<zglosan[69]<<" | "<<zglosan[70]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[60]<<" | "<<zglosan[59]<<" | "<<zglosan[58]<<" | "<<zglosan[57]<<" | "<<zglosan[56]<<" | "<<zglosan[55]<<" | "<<zglosan[54]<<" | "<<zglosan[53]<<" | "<<zglosan[52]<<" | "<<zglosan[51]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[41]<<" | "<<zglosan[42]<<" | "<<zglosan[43]<<" | "<<zglosan[44]<<" | "<<zglosan[45]<<" | "<<zglosan[46]<<" | "<<zglosan[47]<<" | "<<zglosan[48]<<" | "<<zglosan[49]<<" | "<<zglosan[50]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[40]<<" | "<<zglosan[39]<<" | "<<zglosan[38]<<" | "<<zglosan[37]<<" | "<<zglosan[36]<<" | "<<zglosan[35]<<" | "<<zglosan[34]<<" | "<<zglosan[33]<<" | "<<zglosan[32]<<" | "<<zglosan[31]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[21]<<" | "<<zglosan[22]<<" | "<<zglosan[23]<<" | "<<zglosan[24]<<" | "<<zglosan[25]<<" | "<<zglosan[26]<<" | "<<zglosan[27]<<" | "<<zglosan[28]<<" | "<<zglosan[29]<<" | "<<zglosan[30]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[20]<<" | "<<zglosan[19]<<" | "<<zglosan[18]<<" | "<<zglosan[17]<<" | "<<zglosan[16]<<" | "<<zglosan[15]<<" | "<<zglosan[14]<<" | "<<zglosan[13]<<" | "<<zglosan[12]<<" | "<<zglosan[11]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[1]<<" | "<<zglosan[2]<<" | "<<zglosan[3]<<" | "<<zglosan[4]<<" | "<<zglosan[5]<<" | "<<zglosan[6]<<" | "<<zglosan[7]<<" | "<<zglosan[8]<<" | "<<zglosan[9]<<" | "<<zglosan[10]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
	 if(dsan2==1)
	 {
	 	system("cls");
 		cout<<"\t\t\t      TRY YOUR LUCK\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[100]<<" | "<<zglosan[99]<<" | "<<zglosan[98]<<" | "<<zglosan[97]<<" | "<<zglosan[96]<<" | "<<zglosan[95]<<" | "<<zglosan[94]<<" | "<<zglosan[93]<<" | "<<zglosan[92]<<" | "<<zglosan[91]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[81]<<" | "<<zglosan[82]<<" | "<<zglosan[83]<<" | "<<zglosan[84]<<" | "<<zglosan[85]<<" | "<<zglosan[86]<<" | "<<zglosan[87]<<" | "<<zglosan[88]<<" | "<<zglosan[89]<<" | "<<zglosan[90]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[80]<<" | "<<zglosan[79]<<" | "<<zglosan[78]<<" | "<<zglosan[77]<<" | "<<zglosan[76]<<" | "<<zglosan[75]<<" | "<<zglosan[74]<<" | "<<zglosan[73]<<" | "<<zglosan[72]<<" | "<<zglosan[71]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[61]<<" | "<<zglosan[62]<<" | "<<zglosan[63]<<" | "<<zglosan[64]<<" | "<<zglosan[65]<<" | "<<zglosan[66]<<" | "<<zglosan[67]<<" | "<<zglosan[68]<<" | "<<zglosan[69]<<" | "<<zglosan[70]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[60]<<" | "<<zglosan[59]<<" | "<<zglosan[58]<<" | "<<zglosan[57]<<" | "<<zglosan[56]<<" | "<<zglosan[55]<<" | "<<zglosan[54]<<" | "<<zglosan[53]<<" | "<<zglosan[52]<<" | "<<zglosan[51]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[41]<<" | "<<zglosan[42]<<" | "<<zglosan[43]<<" | "<<zglosan[44]<<" | "<<zglosan[45]<<" | "<<zglosan[46]<<" | "<<zglosan[47]<<" | "<<zglosan[48]<<" | "<<zglosan[49]<<" | "<<zglosan[50]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[40]<<" | "<<zglosan[39]<<" | "<<zglosan[38]<<" | "<<zglosan[37]<<" | "<<zglosan[36]<<" | "<<zglosan[35]<<" | "<<zglosan[34]<<" | "<<zglosan[33]<<" | "<<zglosan[32]<<" | "<<zglosan[31]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[21]<<" | "<<zglosan[22]<<" | "<<zglosan[23]<<" | "<<zglosan[24]<<" | "<<zglosan[25]<<" | "<<zglosan[26]<<" | "<<zglosan[27]<<" | "<<zglosan[28]<<" | "<<zglosan[29]<<" | "<<zglosan[30]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[20]<<" | "<<zglosan[19]<<" | "<<zglosan[18]<<" | "<<zglosan[17]<<" | "<<zglosan[16]<<" | "<<zglosan[15]<<" | "<<zglosan[14]<<" | "<<zglosan[13]<<" | "<<zglosan[12]<<" | "<<zglosan[11]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
				 cout<<"\t\t| "<<zglosan[1]<<" | "<<zglosan[2]<<" | "<<zglosan[3]<<" | "<<zglosan[4]<<" | "<<zglosan[5]<<" | "<<zglosan[6]<<" | "<<zglosan[7]<<" | "<<zglosan[8]<<" | "<<zglosan[9]<<" | "<<zglosan[10]<<" |\n";
				 cout<<"\t\t ---------------------------------------\n";
 	
 	}
 	
 	
	 
	 
	 			 
	 if(ysan2!=dsan2)
	 system("cls");
	 
	 }
	 
	 if(zglosan[osan2]=='S')
	 zglosan[cglosan]=' ';
	 if(zglosan[qsan2]=='L')
	 zglosan[cglosan]=' ';
	 
}
int quizgame(int zqg,int xqg)
{
    char ansqg[100]={' ','1','3','3','2','4','3','4','4','1','2','3','3','2','4','3'};
    if(zqg==ansqg[xqg])
    {
        cout<<"\n\nHurray !! Your answer is correct\n";   globalgloquiz++;
    }
    else 
    {
          cout<<"\n\nYour answer is wrong !!\n"; cout<<"\nThe correct answer: option "<<ansqg[xqg];
    }
    cout<<"\nPress Enter to continue\n";
    getch();
    system("cls");
    return 0;
}
int quizsymbol(int zsymbol)
{
    cout<<"\t\t     *********************************\n\n";
	cout<<"\t\t                THE QUIZ GAME \n\n";
	cout<<"\t\t     *********************************\n";
}


/*arrays - 4
variables - 69
lines - 921
words - 20,330
functions - 7
headerfiles used - 8*/
