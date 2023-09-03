
#include "factorial.h"
#include <iostream>
using namespace std ;// namespace std
Factorial::Factorial()
{
}
// int Factorial::factorial(int n){
//     if (n <= 0)
//            return 1;
//        else
//            return n * factorial(n - 1);
//    }
 int Factorial::facItera(int n){
//     int fac=1;
//         for (int i = 1; i <=n; ++i)
//         fac=fac*i;
//     return fac;
     while ( n <=0){
         return 1;
        }
     while(n >0){
         return n *facItera(n-1);
        }
     cout <<n;
 }


