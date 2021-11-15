// клас CRadius
class CRadius
{
	double radius;
public:
	CRadius(void); // конструктор класу за замовчуванням
	// Звичайна функція-член класу,
	// цій функції неявно передається покажчик: CRadius * const this
	double GetRadius(void)
	{
		radius *= 2.0; // дозволено
		return radius;
	}
	// Функція-член класу, оголошена з const
	// цій функції передається покажчик: const CRadius * const this
	double GetRadius2(void) const
	{
		//radius = 2.0; // Заборонено! Помилка компіляції
		return radius;
	}
};
