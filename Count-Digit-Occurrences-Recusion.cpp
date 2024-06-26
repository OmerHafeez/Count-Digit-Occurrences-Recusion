#include<iostream>
using namespace std;
int countDigits(int n, int m);
int helper(int n,int m,int count);
int main ()
{
	int n,m,a;
	cout<<"Enter the Number"<<endl;
	cin>>n;
	cout<<"Enter check"<<endl;
	cin>>m;
	a=countDigits(n,m);
	cout<<"Number of count are :"<<a;
}

int countDigits(int n, int m)
{
	if (m >= n)
        return 0;
    int count = 0;
    return helper(n,m,count);

}

int helper(int n,int m,int count)
{
    if (n == 0)
        return count;
  
    int a = n / 10;
    int b = n % 10;
    if (m == a && m == b)
        count+=2;
	else if (m == a || m == b)
        count++;
    helper(n-1,m,count);
}