#include <iostream>
#include <vector>
using namespace std;

int main()
{


vector <string>my_name;
my_name.push_back("boghdady");
my_name.push_back("boghdady");
my_name.push_back("boghdady");
my_name.push_back("boghdady");
my_name.push_back("boghdady");
for (const string & i :  my_name )
{
cout <<i<<endl;

}
cout<<"=================================================\n";
//my_name.pop_back();
//for (const string & i :  my_name )
//{
//cout <<i<<endl;

//}

my_name.at(2)="ali";

my_name.pop_back();
for (const string & i :  my_name )
{
cout <<i<<endl;

}
  
my_name.push_back("Ahmed");
my_name.push_back("Ahmed");

  cout<< my_name.size()<<endl;
for (const string & i :  my_name )
{
cout <<i<<endl;

}

    return 0;
}