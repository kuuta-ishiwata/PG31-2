#include <stdio.h>

template<typename Type, typename Type2>

class Number
{
public:
	
	Type number;
	Type2 number2;

	Number (Type number, Type2 number2) : number(number),number2(number2){}

	Type Min(Type A, Type2 B)
	{
		if (A < B)
		{
			return static_cast<Type>(A);

		}

		else
		{
			return static_cast<Type2>(B);
		}

	}



};

int main()
{
	Number<int, int> B1(11, 51);
	Number<float, float> B2(11, 51);
	Number<double, double>B3(11, 51);
	Number<int, float> B4(11, 51);
	Number<float, double>B5(11, 51);
	Number<double, int> B6(11, 51);

	printf("int,int : %d\n", B1.Min(1, 15));
	printf("float,float : %f\n", B2.Min(4.0, 12.0));
	printf("double,double : %lf\n", B3.Min(2.0, 6.0));
	printf("int, float : %d\n", B4.Min(5, 13.0));
	printf("float, double : %f\n", B5.Min(23.0, 43.0));
	printf("double, int : %lf\n", B6.Min(56.0, 33));

	return 0;


}


