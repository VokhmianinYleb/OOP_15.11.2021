// клас CRadius
class CRadius
{
	double radius;
public:
	CRadius(void); // конструктор класу за замовчуванням
	// Звичайна функція-член класу,
	// цій функції неявно передається CRadius * const this
	double GetRadius(void)
	{
		return radius;
	}
	// Функція-член класу, оголошена з volatile
	// цій функції передається volatile CRadius * const this
	double GetRadius2(void) volatile
	{
		return radius;
	}
	// Функція-член класу, оголошена з volatile
	void SetRadius(double r) volatile
	{
		radius = r;
	}
};
