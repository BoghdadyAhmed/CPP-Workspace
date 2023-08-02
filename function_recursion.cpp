
/*


int fun(int n)
{
   if (n==0)
   return 1;
   else 
   return 7+fun(n-2);
   
}


int main()
{

cout <<fun(4)<<endl;
    return 0;
}

*/
#include <iostream>
using namespace std;


int fact(int n)
{
if(n==1)
{
return 1;
}
else{
    return n*fact(n-1);
}

}






int main()

{
cout <<"factorial of 4 is:"<<fact(4)<<endl;
cout<< "======================\n";
    return 0;

}


