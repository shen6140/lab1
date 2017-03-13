#include <iostream>

using namespace std;

int main()
{
    int n ;
    std::cout << "Please write a number n " <<std::endl ;
    cin >> n ;
    std::cout << "n = " << n << std::endl ;

    while(n!=1)
    {
       if (n%2==1)
            n = 3*n + 1 ;
       else  n = n/2 ;
       std::cout << n << " " ;
    }


    return 0;
}
