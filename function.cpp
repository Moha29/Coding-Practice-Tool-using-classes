#include "header.h"

practice_array::practice_array(int counter1)
{ 
  counter = counter1;
  array= new practice[counter1];

}

int menu(int choice)  // Display menu
{
  cout<<"Hello! Welcome to the practice program."<<'\n'<<"Enter the number of the option you choose:"<<'\n'<<"(1) Enter a new question."<<'\n'<<"(2) Get questions by subject."<<'\n'<<"(3) Display all the question"<<'\n'<<"(4) Exit the program."<<'\n'<<"What do you want to do: ";

  cin>>choice;
  cin.ignore(100,'\n');

return choice;  //Return choice 
}


void practice_array::read_in()  //Read in the practice array data
{ 
  for(int i = 0; i < counter;++i)
    {
      array[i].read_in();
    }

}

void practice::read_in()
{
  cout<<'\n'<<"What subject (Make sure not to capitalize any letter): ";
  cin.get(subject,SUBJECT,'\n');
  cin.ignore(100,'\n');
  cout<<'\n'<<"Type in the question: ";
  cin.get(question,QUESTION,'\n');
  cin.ignore(100,'\n');
  cout<<"Enter the date: ";
  cin.get(date,DATE,'\n');
  cin.ignore(100,'\n');

  cout<<'\n';
}

void practice_array::read_out_question() //Read question based on subject
{
  char sub[21]; //Create a variable that holds the users input of subject

  cout<<"What subject would you like (Make sure not to capitalize any letter): ";
  cin.get(sub,20,'\n');
  cin.ignore(100,'\n');
  
  for(int i = 0; i < counter; ++i)
  {        
      array[i].read_out_question(sub); 
  }
}

void practice::read_out_question(char sub[])
{
  if(strcmp(subject , sub) == 0)  //Compare the subject entered to the subject saved in the files
  {
    display();
  } 
} 


void practice_array::display_all()  //Display all the questions for the user
{
  for(int i = 0; i < counter; ++i)
  {
    array[i].display();
  }
}

void practice::display()
{
  cout<<subject<<": "<<question<<" ("<<date<<") "<<'\n';
}

practice_array::~practice_array()
{
  delete [] array;
}
