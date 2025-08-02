#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

//computer generates random numbers and random numbers assigned as r, p and s
char get_computer_choice(){
    srand(time(NULL));

    int random_numbers= (rand() % 3) + 1;
    char computer_choice;
    switch(random_numbers){

        case 1:
            computer_choice='r';
            break;
        
        case 2:
            computer_choice='p';
            break;
        
        case 3:
            computer_choice='s';
            break;   
        
    }
    return computer_choice;
}

//takes input from user as r, s and p

char get_user_input(){
    
    char user_input;
    cout<<"Enter your choice: r= ROCK  p=PAPER  s=SCISSOR = ";
    cin>> user_input;
    user_input= tolower(user_input);
    return user_input;
}

//compares computer's choice with user's choice

char get_result(char user_pick,char computer_pick){
    if(computer_pick==user_pick){
        return 'd';
    }
    else if (user_pick=='p' && computer_pick=='r'){
        return 'w';
    }
    else if (user_pick=='r' && computer_pick=='s'){
        return 'w';
    } 
    else if (user_pick=='s' && computer_pick=='p'){
        return 'w';
    }
    else{
        return 'l';
    }
}

int main(){
    char computer_pick= get_computer_choice();
    char user_pick= get_user_input();
    char result= get_result(user_pick,computer_pick);
    switch(result){

        case 'w':
            cout<<"You Won :)";
            break;
        case 'l':
            cout<<"You lose :(";
            break;
        case 'd':
            cout<<"DRAW!!";
            break;
    
    }
    return 0;
}
