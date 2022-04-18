/**
 * Demonstration for older-C++ Styles with char* and array of character
 * @author viemTrieu
 *
 */
#ifndef _THUEBAO_
#define _THUEBAO_
#include <iostream>
class thuebao {
	public:
		thuebao();
		thuebao(char*, char*, char*, int=0);
		thuebao(const thuebao&);
		~thuebao() {
			delete[] diachi;
			std::cout<<"inside DE_CONSTRUCTOR! obj_addr: "<<this<<std::endl;
		}
		void nhap();
		void xuat();
		thuebao& operator=(const thuebao&);
		friend std::istream& operator>>(std::istream&, thuebao&);
		friend std::ostream& operator<<(std::ostream&, const thuebao&);
		float tinhcuoc();
		float cuocVAT();
		char* laysodt();
		char* layhoten();
		char* laydiachi(){return diachi;}
		int laysophut();

	private:
		char sodt[15];
		char hoten[50];
		char *diachi;
		int sophut;
};                 
#endif
