#include<iostream>  
using namespace std ;

int main()

  { 
     int n1=0,n2=1, n3,i, number;   
      
   cout << "Enter the number of elements: ";    
    
       cin>>number;  
        for(i=1;i<number;i++) //loop starts    
       {    
        n3=n1+n2; 
        n1=n2;
        n2=n3;     
        }   
        cout << n3;
   return 0;
   
   }
   


// #include<iostream>
// using namespace std;

// int fibonacci(int n)
// {
//     int n1 = 0; 
//     int n2 = 1; 
//     int n3;

//     for (int i = 1; i <= n; ++i) {
//         n3 = n1 + n2;
//         n2 = n1;
//         n1 = n3;
//     }

//     return n3;


// }

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     int result = fibonacci(n);
//     cout << "Fibonacci(" << n << ") = " << result <<endl;

//     return 0;
// }
