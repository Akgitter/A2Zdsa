//
// Created by HP on 28-06-2024.
//



#include <bits/stdc++.h>

using namespace std;
 /*pattern1
*
* *
* * *
* * * *
void print1(int n)
{
    for(int i = 1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
*/
/*Pattern 2
* * * *
* * *
* *
**/
/*
Pattern 3
1234
123
12
1
void print3(int n)
{
    for(int i = 1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
*/
/*
Pattern 4

*
***
*****
*******


void print4(int n)
{
    for(int i = 0;i<=n;i++)
    {
        // for space
        for(int j=0;j<n-i+1;j++)
        {
            cout << " ";
        }
        //for Star
        for(int j=0;j<2*i+1;j++)
        {
            cout << "*";
        }
        //for space
        for(int j=0;j<n-i+1;j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}
*/
/*
Pattern 5
*******
  *****
   ***
    *
void print5(int n)
{
    for(int i = n;i>=0;i--)
    {
        // for space
        for(int j=0;j<n-i+1;j++)
        {
            cout << " ";
        }
        //for Star
        for(int j=0;j<2*i+1;j++)
        {
            cout << "*";
        }
        //for space
        for(int j=0;j<n-i+1;j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}
*/
/*Pattern 6
     *
    ***
   *****
  *******
 *********
 *********
  *******
   *****
    ***
     **/
/*Pattern 7
*
**
***
****
*****
****
***
**
*


void print7(int n)
{
    for(int i = 1;i<=2*n-1;i++)
    {
        int stars =i;
        if(i>n) stars =2*n-i;
        for(int j=1;j<=stars;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
*/
/*
PAttern 8
1
01
101
0101

void print8(int n)
{
    for(int i=0;i<n;i++)
    {
        int start;
        if ( i%2 == 0) start =1;
        else start = 0;
        for(int j=0;j<=i;j++)
        {
            cout << start ;
            start= 1-start;
        }
        cout << endl ;

    }
}
*/
/*Pattern 9
1      1
12    21
123  321
12344321
void print9(int n) {
    for(int i=1;i<=n;i++){
        //for numbers
        for(int j=1;j<=i;j++)
        {
            cout << j;
        }
        //for spaces
        for(int j=1;j<=2*(n-i);j++)
        {
            cout<< " ";
        }
        for(int j=i;j>=1;j--)
        {
            cout << j;
        }
        cout<<endl;
    }
}*/

/*
void print10(int n)
{
    int k=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << k <<" " ;
            k= k+1;
        }
        cout<< endl;
    }
}*/

// void print11(int n)
// {
//     for(int i=n;i>=0;i--)
//     {
//         for(char ch ='A'; ch <='A'+i;ch++)
//         {
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }
//
// void print12(int n)
// {
//     for(int i=1; i<=n ;i++)
//     {
//             char ch = 'A';
//             ch = ch + n-i;
//         for(int j=1;j<=i;j++)
//         {
//             cout<< ch<< " ";
//             ch++;
//         }
//         cout<<endl;
//     }
// }
//
// void print13(int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=n;j>i;j--)
//         {
//             cout<<"*";
//         }
//         for(int j=0;j<2*i;j++)
//         {
//             cout<<" ";
//         }
//         for(int j=n;j>i;j--)
//         {
//             cout<<"*";
//         }
//
//         cout<<endl;
//     }
//     for(int i=n;i>=1;i--)
//     {
//         for(int j=n;j>=i;j--)
//         {
//             cout<<"*";
//         }
//         for(int j=1;j<=2*(i-1);j++)
//         {
//             cout<<" ";
//         }
//         for(int j=n;j>=i;j--)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
//
// void print14(int n)
// {
//
// }

  // void selection_sort(int arr[],int n)
  // {
  //     for(int i=0;i<=n-2;i++)
  //     {
  //         int c=i;
  //         for(int j=i;j<=n-1;j++)
  //         {
  //             if(arr[j]<arr[c]) c=j;
  //         }
  //         swap(arr[i],arr[c]);
  //     }
  // }


// selection sort
int main(){
    int n;
    cout << "enter the number"<<endl;
    cin>> n;
    cout << "enter array entries"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
      for(int i=0;i<=n-2;i++)
      {
          int c=i;
          for(int j=i;j<=n-1;j++)
          {
              if(arr[j]<arr[c]) c=j;
          }
          swap(arr[i],arr[c]);
      }

      for(int i=0;i<n;i++)
      {
          cout << arr[i] << " ";
      }
    return 0;
}