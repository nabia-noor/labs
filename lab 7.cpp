 //finding smallest element of an array
 #include<iostream>
 using namespace std;
 int main(){
 	int n;
 	cout<<"enter the size of the array:";
 	cin>>n;
 	int a[n];
 	for(int i=0;i<n;i++)
 	{
 		cin>>a[i];
	 }
	 int smallest=INT_MAX;
	  	for(int i=0;i<n;i++)
	  	
	{if(a[i]<smallest)
	{
		smallest=a[i];
	}
	}
	cout<<"smallest number is:"<<smallest;
	return 0;
 }