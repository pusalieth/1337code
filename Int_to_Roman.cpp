#include <iostream>
#include <string>

using namespace std;

/*
  i = 1
  v = 5
  x = 10
  l = 50
  c = 100
  d = 500
  m = 1000
*/

string intToRoman(int num) {
	if(num >= 4000) {
		return "Cannot convert num to Roman using ASCII\n";
	}
	string Rom = "";
	int i = 10;
	while((num/(i/10)) > 0) {
		switch (i) {
		case 10:
			switch (num%i) {
			case 1:
				Rom += "I";
				break;
			case 2:
				Rom += "II";
				break;
			case 3:
				Rom += "III";
				break;
			case 4:
				Rom += "VI";
				break;
			case 5:
				Rom += "V";
				break;
			case 6:
				Rom += "IV";
				break;
			case 7:
				Rom += "IIV";
				break;
			case 8:
				Rom += "IIIV";
				break;
			case 9:
				Rom += "XI";
				break;
			default:
				break;
			}
			break;
		case 100:
			switch ((num%i)/10) {
			case 1:
				Rom += "X";
				break;
			case 2:
				Rom += "XX";
				break;
			case 3:
				Rom += "XXX";
				break;
			case 4:
				Rom += "LX";
				break;
			case 5:
				Rom += "L";
				break;
			case 6:
				Rom += "XL";
				break;
			case 7:
				Rom += "XXL";
				break;
			case 8:
				Rom += "XXXL";
				break;
			case 9:
				Rom += "CX";
				break;
			default:
				break;
			}
			break;
		case 1000:
			switch ((num%i)/100) {
			case 1:
				Rom += "C";
				break;
			case 2:
				Rom += "CC";
				break;
			case 3:
				Rom += "CCC";
				break;
			case 4:
				Rom += "DC";
				break;
			case 5:
				Rom += "D";
				break;
			case 6:
				Rom += "CD";
				break;
			case 7:
				Rom += "CCD";
				break;
			case 8:
				Rom += "CCCD";
				break;
			case 9:
				Rom += "MC";
				break;
			default:
				break;
			}
			break;
		case 10000:
			switch ((num%i)/1000) {
			case 1:
				Rom += "M";
				break;
			case 2:
				Rom += "MM";
				break;
			case 3:
				Rom += "MMM";
				break;
			default:
				break;
			}
			break;
		default:
			cout << "Number not availabel\n";
			break;
		}
		i*=10;
	}

	// reverse string
	string answer = " ";
	for(int i = Rom.size(); i >= 0; i--) {
		if (Rom[i] != 0)
			answer += Rom[i];	
	}
	return answer;
}

int main() {
	int Num = 1;
	
	while(true) {
		cin >> Num;
		cout <<	intToRoman(Num) << endl;
	}
}
