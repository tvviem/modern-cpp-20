#include "thuebao.h"
#include <cstring> // strcpy()
// Ham xay dung mac nhien
// Co pointer
thuebao::thuebao() {
	strcpy(sodt, "noset");
	strcpy(hoten, "nosetting");
	diachi = new char[40];
	sophut = 0;
	std::cout<<"inside DEFAULT-CONSTRUCTOR! obj_addr: "<<this<<std::endl;
}

// Ham xay dung co tham so voi kieu con tro
thuebao::thuebao(char const* sodt, char const* hoten, char const* diachi, int sophut) {
	strcpy(this->sodt, sodt);
	strcpy(this->hoten, hoten);
	//this->diachi = (char*) malloc(sizeof(char)*40);
	this->diachi = new char[40];
	strcpy(this->diachi, diachi);
	//this->diachi = strdup(diachi);
	this->sophut = sophut;
	std::cout<<"inside PARAs-CONSTRUCTOR! obj_addr:"<<this<<std::endl;
}
// ham xay dung sao chep
thuebao::thuebao(const thuebao& tb) {
  strcpy(sodt, tb.sodt);
	strcpy(hoten, tb.hoten);
	diachi = new char[40];
	strcpy(diachi, tb.diachi);
	sophut = tb.sophut;  
}
void thuebao::nhap() {
	std::cin>>*this;
}
void thuebao::xuat() {
	std::cout<<*this;
}
std::istream& operator>>(std::istream& in, thuebao& tb) {
  std::cout<<"nhap sodt: ";
	std::cin>>tb.sodt; // no spacebar
	std::cin.ignore();
	std::cout<<"nhap hoten: ";
	std::cin.get(tb.hoten, 51); // spacebar support, 51 for '\0' char
	std::cin.ignore();
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
// tai dinh nghia phep =
thuebao& thuebao::operator=(const thuebao& tb) {
	strcpy(this->sodt, tb.sodt);
	strcpy(this->hoten, tb.hoten);
  delete[] this->diachi;
  this->diachi = new char[40];
	strcpy(this->diachi, tb.diachi);
  this->sophut = tb.sophut;
  return *this;
}
// Tinh cuoc
float thuebao::tinhcuoc() {
  float kq;
	if(sophut<=200)
		kq = sophut * 120.0f;
  else if(sophut<=1000)
		kq = 200*120.0f + (sophut-120)*80.0f;
	else
		kq = 200*120.0f + 800*80.0f + (sophut-1000)*40.0f;
	return kq + 27000;
}
float thuebao::cuocVAT() {
  return tinhcuoc()*1.1;
}
