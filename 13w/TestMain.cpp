#include <stack>
#include <iostream>
#include <sstream>
using namespace std;

// 연산자가 아닐 경우, 스택에 push
// 연산자일 경우, 두 데이터를 pop 한 후, 연산 결과를 push
// 문자열을 다 읽었을 경우 스택의 내용을 pop
// 후위 표현식: operand1 operand2 operator

void main1() {
	cout << "202014191 전유정" << endl;

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