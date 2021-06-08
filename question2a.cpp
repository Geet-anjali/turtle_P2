#include<iostream>
#define li long long
using namespace std;

void leaders(int arr[], int n){
    cout<<"leaders are-:";
	  for(int j=1;j<n;j++)
      { if(j==n-1)
      cout<<"\t"<<arr[j];
        else if(arr[j-1]<arr[j])
        cout<<"\t"<<arr[j];
      
      	 
	  }
};
	  



int main()
{system("CLS");
 int n;
 cout<<"size of array:  ";
 cin>>n;
 int arr[n];

  cout<<"\n enter element of array:-";
  for(int i=0;i<n;i++)
  {
  	cin>>arr[i];
  	
  }
  leaders(arr,n);
  return 0;
}
