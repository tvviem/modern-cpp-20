//#include "phanso.h"
//#include "thuebao.h"
#include "thuebao_stl.h" 
#include <iostream>
#include <vector>
#include <stdexcept>

int main() {
  //thuebao_stl a;
	//std::cin>>a;
	//std::cout<<a;
	thuebao_stl b("0919238123", "hote asc", "New York", 125);
	std::cout<<b;
  thuebao_stl c=b;
	std::cout<<c;
	std::cout<<"cuoc + VAT (b): "<<b.cuocVAT()<<std::endl;
	std::cout<<"cuoc + VAT (c): "<<c.cuocVAT()<<std::endl;
	thuebao_stl d(c);
	std::cout<<d.laysodt()<<std::endl;
	std::cout<<d.layhoten()<<std::endl;
	std::cout<<d.laydiachi()<<std::endl;
	std::cout<<d.laysophut()<<std::endl;
	
  return 0;   
}          
