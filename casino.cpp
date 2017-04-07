#include <iostream>
#include <string> 
#include <cstdlib> 

using namespace std;
void rules();
 
int main()
{
string playerName;
int amount,bettingAmount,guess,dice; 
char choice;
cout<<"_________________________________________________________________________"<<endl;

cout << "\n\n\n\t\tCASINO GAME\n\n\n";
cout<<"_________________________________________________________________________"<<endl;						 
cout << "\n\nEnter Your Name : ";
getline(cin, playerName);
cout << "\n\nEnter Deposit amount to play game : $";
cin >> amount;
								    
 do
 {
   system("cls");
   rules();
   cout << "\n\nYour current balance is $ " << amount << "\n";
       do
																              {													                                      cout <<playerName<<", enter money to bet : $";   
																	        cin >> bettingAmount;
																                   if(bettingAmount > amount)
																		   {
																                       cout << "Your betting amount is more than your current balance\n";
																                       cout <<"\nRe-enter data\n ";
																		   }
																              }while(bettingAmount > amount);
																      
																               do
																                {															                                                                                                     		                                        cout << "Guess your number to bet between 1 to 10 :";
																		       	cin >>guess;
			    																if(guess <= 0 || guess > 10)
																			{
																                                                                                                     		                                                   cout << "Please check the number!! should be between 1 to 10\n";												                                                                                                     	       cout <<"\nRe-enter data\n ";
																			}                                                                    		                                              }while(guess <= 0 || guess > 10);
																                                                                                                     		                               dice = rand()%10 + 1;                                                               
																																	       if(dice == guess)
																																		{                                                                                                            
																																		cout << "\n\nGood Luck!! You won Rs." << bettingAmount * 10;
																                                                                                                     		                                amount = amount + bettingAmount * 10;                                                                                                 }
																                                                                                                    		                                else
																																		{
																                                                                                                     		                                cout << "Bad Luck this time !! You lost $ "<< bettingAmount <<"\n";
																                                                                                                     		                                amount = amount - bettingAmount;
																                                                                                                     		                                }
																                                                                                                     		                              cout << "\nThe winning number was : " << dice <<"\n";                                                                                 cout << "\n"<<playerName<<", You have $ " << amount << "\n";
																                                                                                                                                                  if(amount == 0)
																																		  {
																              cout << "You have no money to play ";
																	      break;
																																		  }
																                                                                                                     		                              cout << "\n\n-->Do you want to play again (y/n)? ";		
																                                                                                                     		                              cin >> choice;
																                                                                                                     		                             }while(choice =='Y'|| choice=='y');

       cout<<"\n\n\n";
																                                                                                                     		                             cout<<"___________________________________________________________________________________"<<"\n";                                                                                                                                                                                                                                                                         
																                                                                                                     		                              cout << "\n\nThanks for playing game. Your balance amount is $ " << amount << "\n\n";
																                                                                                                     		                                                                                                                                                                   cout<<"_____________________________________________________________________________________"<<"\n";
																																																		   return 0;
}
void rules()
{
	system("cls");
	cout<<"\n\n";
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"\t\tRULES OF THE GAME\n";
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"\t1.Choose any number between 1 and 10\n";
        cout<<"\t2.If you win you will get 10 times of money you bet\n";
        cout<<"\t3.If you bet on wrong number,you will lose your betting amount\n";
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
}	
																                                                                                                     		                                                                                                                                                                                                                                                                                                                       
																                                                                                                     		                                                                                                                                                                                                                                                                                                                         
																                                                                                                     		                                                                                                                                                                                                                                                                                                                           
																                                                                                                     		                                                                                                                                                                                                                                                                                                                            
																                                                                                                     		                                                                                                                                                                                                                                                                                                                            																                                                                                                     		                                                                                                                                                                                                                                                                                                                            
																                                                                                                     		                                                                                                                                                                                                                                                                                                                                
																                                                                                                     		                                                                                                                                                                                                                                                                                                                                       
																                                                                                                     		                                                                                                                                                                                                                                                                                                                                            
																                                                                                                     		                                                                                                                                                                                                                                                                                                                                            
																                                                                                                     		                                                                                                                                                                                                                                                                                                                                             
																                                                                                                     		                                                                                               
																                                                                                                     		                                                                                                                                                                                                                                                                                                                                             
																                                                                                                     		                                                                                                                                                                                                                                                                                                                                                
																                                                                                                     		                                                                                                                                                                                                                                                                                                                                                     
																                                                                                                     		                                                                                                                                                                                                                                                                                                                                                        
																                                                                                                     		                                                                                                                                                                                                                                                                                                                                                            
																                                                                                                     		                                                                                                                                                                                                                                                                                                                                                                 
																                                                                                                     		                                                                                                                                                                                                                                                                                                                                                                   
																                                                                                                     		                                                                                                                                                                                                                                                                                                                                                                         
																                                                                                                     		                                                                                                                                                                                                                                                                                                                                                                             
																                                                                                                     		                                                                                                                                                                                                                                                                                                                                                                                 
																                                                                                                     		                                                                                                                                                                                                                                                                                                                                                                                 
																                                                                                                     		                                                                                                                                                                                                                                                                                                                                                                                  
															                                                                                                    		                                                                                                                                                                                                                                                                    
											
