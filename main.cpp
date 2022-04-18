#include "phanso.h"
#include "thuebao.h"
#include <iostream>
#include <vector>
#include <stdexcept>

int main() {
  /*try {
    phanso k = f.nghich_dao();
    k.xuat();
  } catch (std::invalid_argument &e) {
    std::cerr << e.what() << std::endl;
    return -1;
  }
	phanso a(3, 7), b(4,9);
	std::cout<<"a="; a.xuat();
	std::cout<<"b="; b.xuat();
  int n;
	std::cout<<"Nhap vao so luong phanso n=";
	std::cin>>n;
	//phanso *ds = new phanso[n];
	std::vector<phanso> v_phanso;
 	for(int i=1; i<=n; ++i) {
		phanso temp;
		temp.nhap();
		v_phanso.push_back(temp);
	}
	for(const auto& a : v_phanso) {
		a.xuat();
	}
	phanso max;
	max = v_phanso[0];
	for(int i=1; i<v_phanso.size(); ++i)
		if(v_phanso[i]>max)
			max = v_phanso[i];
	std::cout<<std::endl<<"phan so max = ";
	max.xuat();
  // sap xep danh sach
	// sapxep(v_phanso, n);
	sapxep(v_phanso);
	std::cout<<std::endl;
	for(const auto& a : v_phanso) {
		a.xuat();
	}
	*/
  thuebao a;
	std::cout<<"sizeof_obj: "<<sizeof(a)<<std::endl;
	//std::cout<<"sizeof_obj: "<<sizeof(a)<<std::endl;
	//std::cout<<"sizeof_obj: "<<sizeof(a)<<std::endl;
	//std::cout<<"sizeof_obj: "<<sizeof(a)<<std::endl;


  return 0;
}          
