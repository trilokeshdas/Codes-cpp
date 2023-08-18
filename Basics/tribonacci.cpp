#include<iostream>
using namespace std;
int printSeries(int n)
{
	if ( n == 1 || n==2 ){
		return 0;
    }
	else if (n ==3 ){
		return 1;
    }
	else{
        int fibo=printSeries(n - 1) + printSeries(n - 2) + printSeries(n - 3);
		return fibo;
    }
}
void tribonacci(int n)
{
	for (int i = 1; i <= n; i++)
		cout<<" "<< printSeries(i);
}
int main()
{
	int n = 5;
	tribonacci(n);
	return 0;
}