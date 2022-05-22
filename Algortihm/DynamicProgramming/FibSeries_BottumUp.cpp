#include<iostream>
using namespace std;
int Fibonacci(int N)
{
    int Fib[N+1],i;
    Fib[0]=0;
    Fib[1]=1;
    for(i=2;i<=N;i++)
        Fib[i]=Fib[i-1]+Fib[i-2]; //Here we are using the previously stored values 

    return Fib[N];
}
int main()
{
    int n;
    cin>>n;
    if(n<=1)
        cout<<"Fib"<<n<<" = "<<n;
    else
        cout<<"Fib"<<n<<" = "<<Fibonacci(n);
}