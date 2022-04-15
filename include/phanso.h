#ifndef __PHANSO_H__
#define __PHANSO_H__
#include <vector>
class phanso {
public:
//  phanso() : tu{0}, mau{1} {}
  phanso(int=0, int=1);
  phanso(const phanso &);
  void nhap();
  void xuat() const;
  phanso nghich_dao() const;
	phanso& operator=(const phanso &);
	phanso operator+(const phanso &) const;
  phanso operator-(const phanso &) const;
  phanso operator*(const phanso &) const;
  phanso operator/(const phanso &) const;
	friend phanso operator+(const phanso&, int);
	friend phanso operator-(const phanso&, int);
	friend phanso operator*(const phanso&, int);
	friend phanso operator/(const phanso&, int);
	bool operator>(const phanso&) const;
	bool operator<(const phanso&) const;
private:
  int tu, mau;
  void rutgon();                    
};
void sapxep(phanso*, int);
void sapxep(std::vector<phanso>&);
// tim UCLN
int ucln(int, int);
#endif
