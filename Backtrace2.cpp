//
// Created by HP on 25-06-2024.
//print sum of n terms using parameter
//s is a parameter

/*
#include <iostream>

using namespace std;

void f(int i,int n)
{
    if (i==0){cout<< n<< endl;
        return;}
     f(i-1,n+i);
}

int main()
{
    int i;
    int n=0;
    cin>> i;
    f(i,n);
}*/

//Sum of n terms using function

/*#include <iostream>

using namespace std;

int fcn(int n)
{
    if(n==0) return 0;
   return n + fcn(n-1);

}

int main()
{
    int n;
    cin>> n ;
    cout << fcn(n)<<endl;

}*/

//factorial with

/*
#include <iostream>

using namespace std;

int fac(int n)
{
    if(n==0) return 1;
    return n*fac(n-1);
}

int main()
{
    int n;
    cin>> n ;
    cout<< fac(n) <<endl;
    return 0;
}*/


// for fibonacci number at the nth term.

/*
#include <iostream>

using namespace std;

double fib(double i)

{
    if(i<=1) return i;
    /*double a= fib(i-1);
    double b= fib(i-2);#1#
    return fib(i-1)+fib(i-2);

}
int main()

{
    double i;
    cin>> i;
    cout<< fib(i) << endl;
}
*/
















