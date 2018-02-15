//Authors: Rashed Alnuaimi
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string first;
  string last;
  //get user input
  cout<<"Enter your first name: ";
  cin>> first;
  cout<<"Enter your last name: ";
  cin>> last;
  //tell fortune
  cout<<"Welcome, "<<first[0]<<"."<<last[0]<<"., here is your fortune..." <<endl;

  
  return 0;
}
