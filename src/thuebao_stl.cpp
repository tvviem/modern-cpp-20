#include "thuebao_stl.h"
// Ham xay dung mac nhien
// Co pointer
thuebao_stl::thuebao_stl() {
	sodt = "noset";
	hoten = "noset";
	diachi = new std::string("no_addr");
	sophut = 0;
	std::cout<<"inside DEFAULT-CONSTRUCTOR! obj_addr: "<<this<<std::endl;
}

// Ham xay dung co tham so voi kieu con tro
thuebao_stl::thuebao_stl(std::string_view sodt, std::string_view hoten, std::string_view diachi, int sophut) {
	this->sodt = sodt;
	this->hoten = hoten;
	this->diachi = new std::string {diachi};
	this->sophut = sophut;
	std::cout<<"inside PARAs-CONSTRUCTOR! obj_addr:"<<this<<std::endl;
}
// ham xay dung sao chep
thuebao_stl::thuebao_stl(const thuebao_stl& tb) {
	sodt = tb.sodt;
	hoten = tb.hoten;
	diachi = new std::string {*tb.diachi};
	sophut = tb.sophut;
}
void thuebao_stl::nhap() {
	std::cin>>*this;
}
void thuebao_stl::xuat() {
	std::cout<<*this;
}
std::istream& operator>>(std::istream& in, thuebao_stl& tb) {
  std::cout<<"nhap sodt: ";
	std::cin>>tb.sodt; // no spacebar
	std::cin.ignore();
	std::cout<<"nhap hoten: ";
	std::getline(std::cin, tb.hoten); // spacebar support
	//std::cin.ignore();
	std::cout<<"nhap diachi: ";
	std::getline(std::cin, *tb.diachi);
	std::cout<<"so phut: ";
	std::cin>>tb.sophut;
	return in; 
}
std::ostream& operator<<(std::ostream& out, const thuebao_stl& tb) {
		std::cout<<"tb("<<tb.sodt<<", "<<tb.hoten<<", "<<*tb.diachi<<", "<<tb.sophut<<")"<<std::endl;
		return out;
}
// tai dinh nghia phep =
thuebao_stl& thuebao_stl::operator=(const thuebao_stl& tb) {
  this->sodt = tb.sodt;
	this->hoten = tb.hoten;
	delete this->diachi;
	diachi = new std::string{*tb.diachi};
	this->sophut = tb.sophut;
  return *this;
}
// Tinh cuoc
float thuebao_stl::tinhcuoc() {
  float kq;
	if(sophut<=200)
		kq = sophut * 120.0f;
  else if(sophut<=1000)
		kq = 200*120.0f + (sophut-120)*80.0f;
	else
		kq = 200*120.0f + 800*80.0f + (sophut-1000)*40.0f;
	return kq + 27000;
}
float thuebao_stl::cuocVAT() {
  return tinhcuoc()*1.1;
}
