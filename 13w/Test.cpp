#include <iostream>
#include <vector>
#include <sstream>
#include <stack>

using namespace std;

vector<string> split(string str, char delimiter);

int main() {
	cout << "202014191 ÀüÀ¯Á¤" << endl;

	int a, b, result = 0;
	stack<string> s;
    string in;
	getline(cin, in);
    vector<string> res = split(in, ' ');

    for (int i = 0; i < res.size(); i++) {
		if (res[i] == "+" or res[i] == "-" or res[i] == "/" or res[i] == "*") {
			a = stoi(s.top());
			s.pop();
			b = stoi(s.top());
			s.pop();
			if (res[i] == "+") {
				result = b + a;
			}
			else if (res[i] == "-") {
				result = b - a;
			}
			else if (res[i] == "/") {
				result = b / a;
			}
			else if (res[i] == "*") {
				result = b * a;
			}
			cout << b << " " << res[i] << " " << a << " = " << result << endl;
			s.push(to_string(result));
		}
		else {
			s.push(res[i]);
		}
	}
        
}

vector<string> split(string input, char delimiter) {
    vector<string> answer;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, delimiter)) {
        answer.push_back(temp);
    }

    return answer;
}