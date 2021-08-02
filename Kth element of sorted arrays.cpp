#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

class solution
{

  public:    
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        //My approach:
        
        //merge two sorted arrays in O(Log(N) + Log(M))
        //I have used map of size M+N and TC = O(nlog(n) + mlog(m))
        //get kth element in merged array
        
        //merge arrays using map
        
           
        // Declaring a map.
        // using map as a inbuilt tool
        // to store elements in sorted order.
        map<int,int> mp;
     
        // Inserting values to a map.
        for(int i = 0; i < n; i++)
            mp[arr1[i]] = arr1[i];
     
        for(int i = 0;i < m;i++)
       		mp[arr2[i]] = arr2[i];
       		
       	
		 //print kth element	
        return mp[k];
        
    }
};

int main()
{
	int arr1[] = {2, 3, 6, 7, 9};
	int n=5;
    int arr2[] = {1, 4, 8, 10};
    int m=4;
	int k = 5;
	
	//class ka object bnaya
	solution ob;
	
	cout<<"\nKth element => "<<ob.kthElement(arr1,arr2,n,m,k);
	
	return 0;
}
