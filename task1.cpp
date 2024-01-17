#include<iostream>
#include<ctime>

using namespace std;
int main(){
    srand(time(0));
    int num = rand() % 999999 ;
    int guess;
    
    while(true)

   { 

    cout<<"Guess the number: " <<endl ;
    cin>>guess;
    if(guess==num){
        cout<<"You guessed it right"<<endl;
        break;
    }
    if(guess>num){
        if( guess-num<=10)
            cout<<"You are high but too close"<<endl;

            if(guess-num>10 && guess-num<=50) 
                cout<<"You are  little high"<<endl;
             }

             if (guess-num>50)
                cout<<"You are too high"<<endl;
             

    if(guess<num){
        if(num-guess<=10)
            cout<<"You are low and too close"<<endl;

           else if(num-guess>10 && num-guess<=50) 
                cout<<"You are little low"<<endl;
               else  if (num-guess>50)
                cout<<"You are too low"<<endl;
             }
    }          
    }
   

   
    