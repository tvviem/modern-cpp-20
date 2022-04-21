/**
 * Demonstration for new string styles - std::string and std::string_view
 * @author viemTrieu
 *
 */
#ifndef _THUEBAO_STL_STRING_
#define _THUEBAO_STL_STRING_
#include <iostream>
#include <string>
#include <string_view>
class thuebao_stl {
	public:
		thuebao_stl();
		thuebao_stl(std::string_view, std::string_view, std::string_view, int=0);
		thuebao_stl(const thuebao_stl&);
		~thuebao_stl() {
			delete diachi;
			std::cout<<"inside DE_CONSTRUCTOR! obj_addr: "<<this<<std::endl;
		}
		void nhap();
		void xuat();
		thuebao_stl& operator=(const thuebao_stl&);
		friend std::istream& operator>>(std::istream&, thuebao_stl&);
		friend std::ostream& operator<<(std::ostream&, const thuebao_stl&);
		float tinhcuoc();
		float cuocVAT();
		std::string laysodt() {return sodt;}
		std::string layhoten() {return hoten;}
		std::string laydiachi(){return *diachi;}
		int laysophut() {return sophut;}

	private:
		std::string sodt;
		std::string hoten;
		std::string *diachi;
		int sophut;
};                 
#endif
