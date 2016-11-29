#include <iostream>

using namespace std;

template<typename T>
double sumf_V2(T a, T b)
{
	return a + b;
}

template <typename T1, typename T2, typename T3>
double sumf_V3(T1 a, T2 b, T3 c)
{
	return sumf_V2(a, b) + c;
}

/*----------------------------------
	Variadic Templates
------------------------------------*/

template<typename T>
double sum_variadic(T a)
{
	return  a;
}

// we can pack all parameters
template <typename T, typename... RestOfTs>
double sum_variadic(T a, RestOfTs... ts)
{
	return a + sum_variadic(ts...);
}


int main()
{
		
	double sv2 = sumf_V2(1.5, 2.0);
	cout << sv2 << endl;

	double sv3 = sumf_V3(1.5, 2.0, 5);
	cout << sv3 << endl;

	double svariadic = sum_variadic(1.5, 2.0, 5);
	cout << svariadic << endl;

	double svariadic4 = sum_variadic(1.5, 2.0, 5, 3);
	cout << svariadic4 << endl;

	double svariadic5 = sum_variadic(1.5, 2.0, 5, 3, 7);
	cout << svariadic5 << endl;

	return 0;
}

