#include <iostream>
#include <cctype>
#include <fstream>
#include <cstring>
using namespace std;


//This programe will be a great tool for Computer Science students to practice coding. The user can enter questions categorized by subjects. So whenever they need to practice a certain subject they could just enter it.

const int SUBJECT = 21;  //Setting up constatns for the arrays of characters inside the structure
const int QUESTION = 101;
const int DATE = 11;

class practice   //This class will hold all the stuff related to the question
{
  public:
    void read_in();
    void read_out_question(char sub[]);
    void display();
    
  private:
    char subject[SUBJECT];
    char question[QUESTION];
    char date[DATE];
};

class practice_array //This class is going to hold the array of practice
{
  public:
    practice_array(int counter1);
    void read_in();
    void read_out_question();
    void display_all();
    ~practice_array();   
  private:
    int counter;  //Question counter
    practice*array; //The array of practice

};

int menu(int choice);
