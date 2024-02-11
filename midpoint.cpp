#include <iostream>
using namespace std;

int main() {
	double x_1 {};
	double y_1 {};

	double x_2 {};
	double y_2 {};

	char left_bracket_1, comma_1, right_bracket_1;
	char left_bracket_2, comma_2, right_bracket_2;

	cout << "Please enter the first point(x,y): ";
	cin>> left_bracket_1 >> x_1 >> comma_1 >> y_1 >> right_bracket_1;

	cin>> left_bracket_2 >> x_2 >> comma_2 >> y_2 >> right_bracket_2;

	cout << "\nThe MIDPOINT of (" << x_1 << "," << y_1 << ") and " << "(" << x_2 << 
		"," << y_2 << ") is (" << (x_1+x_2)/2 << "," << (y_1+y_2)/2 << ")" << endl;




	return 0 ;

}
