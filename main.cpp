#include "header.h"



int main() 
{
  char subject[SUBJECT];  //Declaring the variables in the class
  char question[QUESTION];
  char date[DATE];
  int choice = 0;   //This variable will hold the user choice of the options diplayed
  int counter = 0;
  int num = 0; //Number of questions the user going to enter

  cout<<"How many questions do you want to enter: ";
  cin>>num;
  cin.ignore(100,'\n');
  cout<<'\n';

  practice_array parray(num);
  
  
  while(choice != 4)  //Dsplay option and will be closed if the user decided to 
  {
    choice = menu(choice);  //Resturn the user choice from menu
    
    if(choice == 1)
    {
      parray.read_in();  //If the user chose to enter a new question
      
    }

    if(choice == 2) //If the user chose to get questions based on subject
    {
      parray.read_out_question();
    }

    if(choice == 3)
    {
      parray.display_all();  //If the user decided to display all the questions
    }

  }

  return 0;
}

