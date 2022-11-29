#include <stack>
#include <iostream>
#include <sstream>
using namespace std;

// �����ڰ� �ƴ� ���, ���ÿ� push
// �������� ���, �� �����͸� pop �� ��, ���� ����� push
// ���ڿ��� �� �о��� ��� ������ ������ pop
// ���� ǥ����: operand1 operand2 operator

void main1() {
	cout << "202014191 ������" << endl;

	string n;
	int a, b, result;
	stack<string> s;

	while (n != "x") {
		result = 0;
		cin >> n;
		if (n == "+" or n == "-" or n == "/" or n == "*") {
			a = stoi(s.top());
			s.pop();
			b = stoi(s.top());
			s.pop();
			if (n == "+") {
				result = b + a;
			}
			else if (n == "-") {
				result = b - a;
			}
			else if (n == "/") {
				result = b / a;
			}
			else if (n == "*") {
				result = b * a;
			}
			cout << b << " " << n << " " << a << " = " << result << endl;
			s.push(to_string(result));
		}
		else
			s.push(n);
	}
}