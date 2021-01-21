#include<iostream>
#include <cmath>
using namespace std;

const int m = 12;

void get_data(double &loan, double &rate, double &no_payments, double &t);
double calc_payment(double &loan, double &rate, double &no_payments, double &t);
double calc_unpayment(double &loan, double &rate, double &no_payments, double &t);



int main()
{
	double l, r, m, year;
	get_data(l, r, m, year);

	calc_payment(l, r, m, year);
	cout << "The payment is:" << calc_payment(l, r, m, year) << endl;

	calc_unpayment(l, r, m, year);
	cout << "The unpaid balance is:" << calc_unpayment(l, r, m, year) << endl;


	system("pause");
}

void get_data(double &loan, double &rate, double &no_payments, double &t)
{
	cout << "Enter the loan amount:" << endl;
	cin >> loan;
	cout << "Enter the interest rate:" << endl;
	cin >> rate;
	cout << "Enter the number of payments:" << endl;
	cin >> no_payments;
	cout << "Enter the number of years:" << endl;
	cin >> t;

	cout << "The factor is:" << (rate/m) << endl;
}


double calc_payment(double &loan, double &rate, double &no_payments, double &t)
{
	double R=0, i=0, a=0;
	i = (rate / m);
	a = (((-1)*(m)) * (t));
	R = (loan*i) / ( 1 - (pow((1 + i), a)) );
	return R;
}

double calc_unpayment(double &loan, double &rate, double &no_payments, double &t)
{
	double R=0, Lprime=0;
	double i = rate / m;
	R = calc_payment(loan, rate, no_payments, t);
	Lprime = R * ((1 - pow((1 + i), (-((m * t) - no_payments)))) / (i));

	return Lprime;
}