#ifdef COMPLEXDLL_EXPORTS
#define COMPLEXDLL_API __declspec(dllexport)
#else
#define COMPLEXDLL_API __declspec(dllimport)
#endif
#include  <iostream>
using namespace std;

namespace Complexfunc {
	class Complex
	{

	public:
		double real;
		double imagine;
		Complex() { real = imagine = 0; }
		Complex(double r, double i) { real = r, imagine = i; }
		Complex operator+(Complex M);
		Complex operator=(Complex M);

		COMPLEXDLL_API Complex Read();
		COMPLEXDLL_API void Display();

		COMPLEXDLL_API Complex Add(Complex M);
		COMPLEXDLL_API Complex Sub(Complex M);
		COMPLEXDLL_API Complex Mul(Complex M);
		COMPLEXDLL_API Complex Div(Complex M);
		void Conj();

	};
}