#include <iostream>
using namespace std;

bool isNumber(char chr) {
    return chr >= '0' && chr <= '9';
}



string operate(int num1, int num2, char operator_) {

    string result;

    switch (operator_) {
        case '*' : result.append(to_string(num1*num2)); break;
        case '/' : result.append(to_string(num1/num2));break;
        case '+' : result.append(to_string(num1+num2));break;
        case '-' : result.append(to_string(num1-num2));break;

    }

    return result;
}

int main() {

    while (true) {
        string num1 = "";
        string num2 = "";
        char _operator;
        int currentI;

        cout << "Enter the mathematical operation"<<endl;
        cout << "Write Q to exit"<<endl;

        string input;


        cin >> input;

        if (input=="Q" || input=="q")
            break;



        for (int i = 0; i<input.size(); i++) {
            if (isNumber(input[i]))
                num1=num1+input[i];
            else {
                _operator = input[i];
                currentI = i;
                break;
            }
        }

        for (int i = currentI+1; i < input.size();i++) {
            if (isNumber(input[i]))
                num2 = num2+input[i];
            else
                cout<< "EXCEPITON";

        }

        cout << operate(stoi(num1) ,stoi(num2),_operator);
    }

}




