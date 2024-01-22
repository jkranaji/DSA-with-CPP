
//----BINARY SEARCH--------


/*#include <iostream>
using namespace std;

int binarySearch(int arr[] , int size, int key)
{
    int start = 0;
    int end  = size - 1;
    int mid = (start + end )/2;

    while (start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end  = mid -1;
        }

        mid = start + (end - start )/2;
    }

    return -1;
}

int main()
{
    int even[6] = {2,4,6,8,10,12};
    int odd[6] = {2,3,5,7,9,11};

    int index = binarySearch(even , 6 , 10);
    cout<<index;
} */

//___________________________________________________________________________________
//-------FIRST AND LAST OCCURENCE OF INDEX-------


#include <iostream>
using namespace std;

int firstocc(int arr[], int size , int key)
{
    int start = 0;
    int end = size-1;
    
    int mid = start + (end - start )/2;
    int ans = -1;
    
    while(start <= end)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            end = mid -1;
        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else if(key<arr[mid])
        {
            end = mid - 1;
        }
        
        mid = start + (end - start )/2;
    }
    
    return ans;
}


int lastocc(int arr[], int size , int key)
{
    int start = 0;
    int end = size-1;
    
    int mid = start + (end - start )/2;
    int ans = -1;
    
    while(start <= end)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else if(key < arr[mid])
        {
            end = mid - 1;
        }
        
        mid = start + (end - start )/2;
    }
    
    return ans;
}

int main()
{
    int even[12] = {2,3,4,5,5,5,5,5,5,6,7,4};
    
    cout<<"first occurence of index 5 :"<<firstocc(even, 12, 5)<<endl;
    cout<<"last  occurence of index 5 :"<<lastocc(even, 12, 5)<<endl;
}

//_____________________________________________________________________________
//  GET PIVOT NUMBER USING BINARY SEARCH 

#include<iostream>
using namespace std;


int getpivot(int arr[], int n )
{
    int s = 0;
    int e = n-1;
    int mid = s + (e - s)/2;
    
    while(s<e)
    {
        if(arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
    
}


int main()
{
    int arr[8] = {3,4,5,6,7,1,2,5};
    cout<<"pivot is :"<<getpivot(arr,8)<<endl;
}

//_____________________________________________________________________________
//   GET SQUARE ROOT USING BINARY SEARCH 


#include<iostream>
using namespace std;

long long int binarySquareRoot(int n)
{
    
    int s = 0;
    int e = n;
    long long int mid  = s +(e-s)/2;
    
   long long  int ans = -1;
    
    while (s<=e)
    {
        long long int square = mid * mid;
        
        if(square == n)
        return ans;
        
        if(square < n)
        {
        ans = mid;
        s = mid + 1;
        }
        else 
        {
            e = mid - 1;
        }
        
        mid  = s + (e - s)/2;
    }
    
    return ans;
}

int main()
{
    binarySquareRoot();
    
   
}


//_______________________________________________________________________
//

