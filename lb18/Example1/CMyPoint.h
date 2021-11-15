// клас, що містить inline-функції
class CMyPoint
{
	int x, y;
public:
	// конструктор класу
	CMyPoint(void);
	int GetX(void); // звичайна (не inline) функція класу
	int GetY(void) // inline-функція
	{
		return y; // реалізація у тілі класу
	}
	// звичайна (не inline) функція
	void SetXY(int nx, int ny);
};
