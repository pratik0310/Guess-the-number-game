//rajwardhan project :guess the number
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>
using namespace std;
int main()
{ 


//                       initializations
//functions for generating the random number
srand(time(0));

int number=(rand()%20)+1;
//for the game score
int score=120;
//for the game chances
int count=0;
//for the guess of yours
int guess;
int cap;
int capnum=(rand()%200)+1;
int chances=5;
int capcount=0;


	cout<<"\n======================================================================================================================\n";
	cout<<"\t\t\t\t\tGUESS THE NUMBER ";
	cout<<"\n\n you have to guess the number between 1 to 20 in 5 chances we will provide you clue also";
	cout<<number;
	cout<<"\n======================================================================================================================\n\n\n";



//actual programm
while(capcount<6){

cout<<"\n"<<"\t\t\t\tenter the captcha "<< capnum << " for confirmation that you are not robot\n";
cout<<"\t\t\t\t\t\t";
cin>>cap;
if(cap==capnum){
system("cls");
system("color 5f");




while(count<5){
	cout<<"\n\t\t\t\t\tenter your guess\n";
	cout<<"\n======================================================================================================================\n";
	cout<<"\t\t\t\t\t\t";
	cin>>guess;
	if(guess==number){
    cout<<"\n***********************************************************************************************************************\n";
		cout<<"\t\t\t\t\tYou won the Game ";

		score-=20;
	chances=5;
		break;
		
		
	}
	else if(guess>number){
		cout<<"\n\t\t\t\tThe number is smaller than your guess\n";
		score-=20;
		chances-=1;
		cout<<"\n\t\t\t\t\tchances remaining :"<<chances;
	}
	else{
			cout<<"\n\t\t\t\tThe number is greater than your guess\n";
	score-=20;
	chances-=1;
	   	cout<<"\n\t\t\t\t\tchances remaining :"<<chances;       
}
count++;

}




	
if(count>=5 && guess!=number){
	cout<<"\n\t\t\t\t\tyou loose the game the number was : "<<number<<"\n";
	system("color 0f");
	score=0;
	chances=5;
	break;
   // cout<<score;

}

cout<<"\n\t\t\t\t\tscore:"<<score;
	cout<<"\n***********************************************************************************************************************\n";

if(score==100){
	system("color 1f");
}

if(score==80){
	system("color 2f");
}

if(score==60){
	system("color 3f");
}

if(score==40){
	system("color 6f");

if(score==20){
	system("color 5f");
}

	capcount++;
}










}


}
return 0;
}

