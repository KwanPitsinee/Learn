#include <stdexcept>
#include <iostream>
#include "pair.h"
#include "student.h"
#include <string>


int main() {

    CP::pair<int,std::string> a(1234,"ABCD"), b(1234,"RT");
  	CP::pair<char,double> c('e',1.423), d('G',342.555);
  
  	//std::cout<<(a<=b)<<"\n";

    std::cout << "Result of a >= b is " << (a >= b) << std::endl;
  
    std::cout << "Result of c >= d is " << (c >= d) << std::endl;
  
    std::pair<int,std::string> e(1234,"ABCD"),f(1234,"RT");
  
    std::cout << "Result of e >= f is " << (e >= f) << std::endl;
    int y,z;
    std::cin>>y>>z;
  	CP::pair<int,int> g(1234,4234),h(124,34),x(y,z);
    std::cout << "Result of x >= g is " << (x >= g) << std::endl;
    std::cout << "Result of x >= h is " << (x >= h) << std::endl;
  
   	x=g+h; 
    //std::cout<<x.first<<' '<<x.second;
    std::cout<<x;

}
