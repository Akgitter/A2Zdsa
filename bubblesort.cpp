//
// Created by HP on 08-08-2024.
//
#include<bits/stdc++.h>

using namespace std;

// void bubble_sort(int arr[],int n)
// {
//     for(int i = n-1;i>=0;i--)
//     {
//         for(int j =0;j<=i-1 ;j++)
//         {
//             if(arr[j] > arr[j+1])
//             {
//                 int temp=arr[j+1];
//                 arr[j+1]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
// }

void insertion_sort(int arr[],int n)
{
    for(int i=0;i<=n;i++)
    {
        int j = i;
        while(j>0 && arr[j-1]>arr[j])
        {
            int temp =arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;

            j--;
        }
    }

}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("errors.txt", "w", stderr);
#endif

    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i] ;

    // bubble_sort(arr,n);
    insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " " ;
    }
    return 0;


    
}


