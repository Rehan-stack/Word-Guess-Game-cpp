#include<iostream>
#include<string>
using namespace std;

int main()
{
	   char guess; 
      char word[] = {'a','l','i'};
      
        cout<<"Welcome to the word guessing game.\n";
        cout<<"Guess a word: ";
        cout<<"word:***\n";
        cout<<"tries:3\n";
        int x=3;
        int limit = 3;
	  
    for (int i = 0; i < x;)
    {
    
              cout<<"enter character: ";
                cin>>guess;
        	  if(guess == word[0])
            {
             
                 
                 cout<<"Hurrah! Good guess\n";
              
                cout<<"-------------------------\n";
        
                
            }
               else  if(guess != word[0]  )
            {
            	
                
              	 cout<<"oops! try again\n";
              	 cout<<"-----------------------\n";
                cout<<"tries:2\n";
                cout<<"enter character:";
                cin>>guess;
				if(guess==word[0]){
					 cout<<"Hurrah! Good guess\n";
                cout<<"-------------------------\n";
         }
			  if(guess!=word[0]){
			  
				cout<<"-----------------------\n";
                cout<<"tries:1\n";
                cout<<"enter character:";
                cin>>guess;
				if(guess==word[0]){
					 cout<<"Hurrah! Good guess\n";
                cout<<"-------------------------\n"; }else{
				
                
                cout<<"you lose";
                break;
           }
    }
       } 
         
        
	 	 cout<<"word:a**\n";
        cout<<"tries:3\n";
            		cout<<"enter character: ";
                cin>>guess;
			
           		 if(guess == word[1])
            {
            
                  
                  cout<<"Hurrah! Good guess\n";
                   cout<<"-----------------------\n";
                  
             
                
        }
           
            else if(guess != word[1] )
            {
                
            	cout<<"oops! try again\n";
            	cout<<"-----------------------\n";
            	 cout<<"word:a**\n";
             cout<<"tries:2\n";
                cout<<"enter character:";
                cin>>guess;
				if(guess==word[1]){
					 cout<<"Hurrah! Good guess\n";
                cout<<"-------------------------\n";
              
        }         
                if(guess!=word[1]){
				
                 cout<<"oops! try again\n";
                 cout<<"-----------------------\n";
                  cout<<"word:a**\n";
				 cout<<"tries:1\n";
                cout<<"enter character:";
                cin>>guess; 
             
                	if(guess==word[1]){
					 cout<<"Hurrah! Good guess\n";
                cout<<"-------------------------\n";
              
				}
				 else{
				 cout<<"you lose";
                
               break;
           }
                
         }
                
            }    
            
               cout<<"word:al*\n";
               cout<<"tries:3\n";
		   cout<<"enter character: ";
                cin>>guess;
            if(guess == word[2])
            {	
    
                  cout<<"Hurrah! Good guess\n";
                   cout<<"-----------------------\n";
                         cout<<"you guessed the word correctly\n";
    cout<<"word was ali\n";

cout<<"you won";
                  break;
        }
            
            else if(guess!= word[2] )
            {
            	  
            	cout<<"oops! try again\n";
            	cout<<"-----------------------\n";
            	 cout<<"word:a**\n";
             cout<<"tries:2\n";
                cout<<"enter character:";
                cin>>guess;
				if(guess==word[1]){
					 cout<<"Hurrah! Good guess\n";
                cout<<"-------------------------\n";
                  cout<<"you guessed the word correctly\n";
    cout<<"word was ali\n";

cout<<"you won";
              break;
              return 0;
              
        }      if(guess!=word[2]){
        	
		
		 
                 cout<<"oops! try again\n";
                 cout<<"-----------------------\n";
                  cout<<"word:a**\n";
				 cout<<"tries:1\n";
                cout<<"enter character:";
                cin>>guess; 
             
                	if(guess==word[2]){
					 cout<<"Hurrah! Good guess\n";
                cout<<"-------------------------\n";
              
				}
				 else{
				 cout<<"you lose";
                
               break;
           }
                
               
            
              }
              
      }
      cout<<"-------------------------\n";
               cout<<"you guessed the word correctly\n";
    cout<<"word was ali\n";

cout<<"you won";
break;

    }
    

			
              
	
}

