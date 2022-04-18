#include "thuebao.h"
#include <cstring> // strcpy()
// Ham xay dung mac nhien
// Co pointer
thuebao::thuebao() {
	strcpy(sodt, "nosetting");
	strcpy(hoten, "nosetting");
	diachi = new char[40];
	sophut = 0;
	std::cout<<"inside DEFAULT-CONSTRUCTOR! obj_addr: "<<this<<std::endl;
 
	std::cout<<"sizeof_sodt_prop: "<<sizeof(sodt)<<std::endl;
	std::cout<<"sizeof_hoten_prop: "<<sizeof(hoten)<<std::endl;
	std::cout<<"sizeof_diachi_prop: "<<sizeof(*diachi)<<std::endl;
	std::cout<<"sizeof_sophut_prop: "<<sizeof(sophut)<<std::endl;
}

// Ham xay dung co tham so voi kieu con tro
thuebao::thuebao(char* sodt, char* hoten, char* diachi, int sophut) {
	strcpy(this->sodt, sodt);
	strcpy(this->hoten, hoten);
	diachi = new char[40];
	strcpy(this->diachi, diachi);
	this->sophut = sophut;
	std::cout<<"inside PARAs-CONSTRUCTOR! obj_addr:"<<this<<std::endl;
}
void thuebao::nhap() {
	std::cin>>*this;
}
std::istream& operator>>(std::istream& in, thuebao& tb) {
  std::cout<<"nhap sodt: ";
	std::cin>>tb.sodt; // no spacebar
	std::cout<<"nhap hoten: ";
	std::cin.get(tb.hoten, 51); // spacebar support, 51 for '\0' char
	std::cout<<"nhap diachi: ";
	std::cin.get(tb.diachi, 41);
	std::cout<<"so phut: ";
	std::cin>>tb.sophut;
	return in; 
}
std::ostream& operator<<(std::ostream& out, const thuebao& tb) {
		std::cout<<"tb("<<tb.sodt<<", "<<tb.hoten<<", "<<tb.diachi<<", "<<tb.sophut<<")"<<std::endl;
		return out;
}
