#include "phanso.h"
#include <iostream>
#include <stdexcept>
#include <cmath>
#include <algorithm>

// Tim uoc chung lon nhat
int ucln(int a, int b) {
  while (a != b)
    (a > b) ? (a -= b) : (b -= a);
  return a;
}
phanso::phanso(int t, int m) : tu{t}, mau{m} {
	//std::cout<<"INSIDE constructor parameters!!!"<<std::endl;
}
phanso::phanso(const phanso &a) : tu{a.tu}, mau{a.mau} {}
void phanso::nhap() {
  std::cout << "nhap tuso: ";
  std::cin >> tu;
  do {

    std::cout << "nhap mauso: ";
    std::cin >> mau;
  } while (mau == 0);
  this->rutgon();
}
void phanso::xuat() const { std::cout << tu << "/" << mau << std::endl; }
// Phuong thuc rieng dung rutgon phan so
void phanso::rutgon() {
  int temp = ucln(abs(tu), abs(mau));
  tu /= temp;
  mau /= temp;
}
// Tra ve phan so nghich dao
phanso phanso::nghich_dao() const {
  if (tu != 0)
    return phanso(mau, tu);
  throw std::invalid_argument("NGHICH DAO, NHUNG TUSO=0");
}
// Tai dinh nghia phep gan
phanso& phanso::operator=(const phanso&p) {
	this->tu = p.tu;
	this->mau = p.mau;
	//std::cout<<"inside assign overload!!!!!"<<std::endl;
	return *this;
}
// Tai dinh nghia phep +
phanso phanso::operator+(const phanso& p) const {
  int tu1 = this->tu * p.mau;
  int tu2 = this->mau * p.tu;
	phanso kq = phanso(tu1+tu2, this->mau*p.mau);
	kq.rutgon();
  return kq;
}
phanso phanso::operator-(const phanso& p) const {
  int tu1 = this->tu * p.mau;
  int tu2 = this->mau * p.tu;
	phanso kq = phanso(tu1-tu2, this->mau*p.mau);
	kq.rutgon();
  return kq;
}
phanso phanso::operator*(const phanso& p) const {
  phanso kq = phanso(this->tu*p.tu, this->mau*p.mau);
	kq.rutgon();
	return kq;
}
phanso phanso::operator/(const phanso& p) const {
  phanso kq = (*this)*p.nghich_dao();
  kq.rutgon();
	return kq;
}
phanso operator+(const phanso& p, int n) {
  phanso kq = p + phanso(n,1);
	kq.rutgon();
  return kq;
}
phanso operator-(const phanso& p, int n) {
  phanso kq = p - phanso(n,1);
	kq.rutgon();
  return kq;
}
phanso operator*(const phanso& p, int n) {
	phanso kq = p * phanso(n, 1);
	kq.rutgon();
  return kq;
}
phanso operator/(const phanso& p, int n) {
	phanso kq = p / phanso(n, 1);
	kq.rutgon();
  return kq;
}
bool phanso::operator>(const phanso& p) const {
  return static_cast<float>(this->tu)/this->mau > static_cast<float>(p.tu)/p.mau;
}
bool phanso::operator<(const phanso& p) const {
  return static_cast<float>(this->tu)/this->mau < static_cast<float>(p.tu)/p.mau;
}
void sapxep(phanso *ds, int soluong) {
	for(int i=0; i<soluong; ++i)
		for(int j=i+1;j<soluong; ++j)
			if(ds[i]>ds[j]) {
      	phanso t;
				t = ds[i];
				ds[i] = ds[j];
 				ds[j] = t;
			}
}
bool comparePs(const phanso& a, const phanso& b) {
  return a<b;
}
void sapxep(std::vector<phanso>& v_phanso) {
	// tang dan
	//sort(v_phanso.begin(), v_phanso.end());
	// giam dan
	auto sortRule = [](const phanso& p1, const phanso& p2) -> bool {
    return p1>p2;
	};
	sort(v_phanso.begin(), v_phanso.end(), sortRule);
}
