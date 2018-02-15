//Authors: Rashed Alnuaimi
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string first;
  string last;
  int number;
  //get user input
  cout<<"Enter your first name: ";
  cin>> first;
  cout<<"Enter your last name: ";
  cin>> last;
  //tell fortune
  cout<<"Welcome, "<<first[0]<<"."<<last[0]<<"., here is your fortune..." <<endl;
  cout<<"Your lucky number is " <<first.length()<<endl;
  
  return 0;
}
