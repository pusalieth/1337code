#include <iostream>
#include <string>

using namespace std;

// max = 2147483647
string numberToWords(int num) {
    string answer = "";
    int place = 0;
    int temp[11];
    bool append = false;
    int appendInt = 0;
    bool subSpace = false;
    int arrayPlace = 0;
    int thouTest = 0;
    int millTest = 0;

    if (num == 0) {
        answer = "Zero";
        return answer;
    }

	do {
        temp[place++] = num%10;
        num /= 10;
    } while (num > 0);

    if (temp[1] != 1) {
        subSpace = true;
    }

    thouTest = temp[3] + temp[4] + temp[5];
    millTest = temp[6] + temp[7] + temp[8];

    while (place > 0) {
        arrayPlace = place - 1;
        if (place != 2 && place != 5 && place != 8) {
            switch(temp[arrayPlace]) {
            case 1:
                answer += "One ";
                break;
            case 2:
                answer += "Two ";
                break;
            case 3:
                answer += "Three ";
                break;
            case 4:
                answer += "Four ";
                break;
            case 5:
                answer += "Five ";
                break;
            case 6:
                answer += "Six ";
                break;
            case 7:
                answer += "Seven ";
                break;
            case 8:
                answer += "Eight ";
                break;
            case 9:
                answer += "Nine ";
                break;
            default:
                break;
            }
            if (place == 1) {
                place--;
            }
        }

        switch (place) {
        case 2:
            if (temp[arrayPlace] == 1) {
                arrayPlace--;
                place--;
                tens:
                    switch (temp[arrayPlace]) {
                    case 0:
                        answer += "Ten";
                        break;
                    case 1:
                        answer += "Eleven";
                        break;
                    case 2:
                        answer += "Twelve";
                        break;
                    case 3:
                        answer += "Thirteen";
                        break;
                    case 4:
                        answer += "Fourteen";
                        break;
                    case 5:
                        answer += "Fifteen";
                        break;
                    case 6:
                        answer += "Sixteen";
                        break;
                    case 7:
                        answer += "Seventeen";
                        break;
                    case 8:
                        answer += "Eighteen";
                        break;
                    case 9:
                        answer += "Nineteen";
                        break;
                    default:
                        break;
                    }
                break;
            }
            else {
            greater_than_tens:
                switch (temp[arrayPlace]) {
                case 2:
                    answer += "Twenty ";
                    break;
                case 3:
                    answer += "Thirty ";
                    break;
                case 4:
                    answer += "Forty ";
                    break;
                case 5:
                    answer += "Fifty ";
                    break;
                case 6:
                    answer += "Sixty ";
                    break;
                case 7:
                    answer += "Seventy ";
                    break;
                case 8:
                    answer += "Eighty ";
                    break;
                case 9:
                    answer += "Ninety ";
                    break;
                default:
                    break;
                }
                break;
            }
            break;
        case 3:
            if (temp[arrayPlace] != 0)
                answer += "Hundred ";
            break;
        case 4:
            if (thouTest != 0)
                answer += "Thousand ";
            break;
        case 5:
            switch (temp[arrayPlace]) {
            case 1:
                append = true;
                appendInt = 5;
                arrayPlace--;
                place--;
                goto tens;
                break;
            default:
                goto greater_than_tens;
                break;
            }
            break;
        case 6:
            if (temp[arrayPlace] != 0)
                answer += "Hundred ";
            break;
        case 7:
            if (millTest != 0)
                answer += "Million ";
            break;
        case 8:
            switch (temp[arrayPlace]) {
            case 1:
                append = true;
                appendInt = 8;
                arrayPlace--;
                place--;
                goto tens;
                break;
            default:
                goto greater_than_tens;
                break;
            }
            break;
        case 9:
            if (temp[arrayPlace] != 0)
                answer += "Hundred ";
            break;
        case 10:
            answer += "Billion ";
            break;
        default:
            break;
        }

        if (append) {
            append = false;
            switch (appendInt) {
            case 5:
                answer += " Thousand ";
                break;
            case 8:
                answer += " Million ";
                break;
            default:
                break;
            }
        }

        place--;
    }

    if (subSpace) {
        answer.pop_back();
    }

    return answer;
}

int main() {
    int Num = 0;

    while(1) {
        cin >> Num;
        cout << numberToWords(Num) << endl;
    }
}
