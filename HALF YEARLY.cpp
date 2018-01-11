#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include <windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>

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
	cout<<"\t\t   3.QUIZ \n\n";
	cout<<"\t\t   4.PUZZLE \n\n";
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
				
				cout<<"\t\t\t    "<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<"\n";
				cout<<"\t\t\t    "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"\n";
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
				cout<<"\t\t\t    "<<z30<<"     "<<z30<<"     "<<z30<<"     "<<z30<<"\n";
				cout<<"\t\t\t    "<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<z30<<"\n";
				cout<<"\n\n";
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
     
			       case '3':{
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
                        
                        case '4':{
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
	if(ch[1]=='A' && ch[2]=='B' && ch[3]=='C' && ch[4]=='D' && ch[5]=='E' && ch[6]=='F' && ch[7]=='G' && ch[8]=='H' && ch[9]=='I' && ch[10]=='J' && ch[11]=='K' && ch[12]=='L' && (ch[13]=='M' || ch[13]=='N') && (ch[14]=='N' || ch[14]=='M') && ch[15]=='O' && ch[16]==' ' )
	{
		cout<<"U WON THE GAME\n";
		getch(); exit(0);
	}
		}}
     
   			  //End of 5th switch
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
