#include <iostream>
using namespace std;
int main()
{



int x[4]={1,2,3,4}; //! datatype name Array [size]={valus};
//? int x[5];    // datatype name Array [size]; random values 
//* int x[]={1,2,3,4,5}; // datatype name Array []={valus}; 
//*size of array is number of elements of values
cout << x[2]<<endl;
cout << x[10]<<endl; //! for number that is greater than size of array 
//!gives random values
cout <<"============================================\n";
int y[5]={10};
cout <<y[0]<<endl;
cout << y[1]<<endl;
cout << y[2]<<endl;
cout << y[3]<<endl;
cout << y[4]<<endl;
cout <<"============================================\n";
string name[5]={"A","B","C","D","E"};
cout <<name[0]<<endl;
cout << name[1]<<endl;
cout << name[2]<<endl;
cout << name[3]<<endl;
cout << name[4]<<endl;
cout <<"============================================\n";
int a[]={1,2,3,4,5,6,7,8,9};
cout <<sizeof(a)/sizeof(a[0])<< endl;
cout <<sizeof(a)/sizeof(int)<< endl;

string s[]={"A","B","C","D","E"};
cout <<sizeof(s)/sizeof(s[0])<< endl;
cout <<sizeof(s)/sizeof(string)<< endl;
cout << "================================================================\n";
//*two dimensional array

 
int n[3][4]={{1,2,3,4},{5,6,7,8},{9,1,5,5}};
cout <<n[0][0]<<endl;

    return 0;
}