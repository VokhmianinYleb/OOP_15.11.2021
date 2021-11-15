#include "CMyPoint.h"

// конструктор класу
CMyPoint::CMyPoint(void)
{
	x = y = 0;
}
// реалізація не inline-функції GetX()
int CMyPoint::GetX(void)
{
	return x;
}
// реалізація не inline функції SetXY()
void CMyPoint::SetXY(int nx, int ny)
{
	x = nx;
	y = ny;
}
