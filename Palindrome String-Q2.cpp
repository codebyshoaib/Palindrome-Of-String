#include<iostream>
using namespace std;
#include<string>

void ToLower(string &str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
				str[i] = str[i] + 32;

		i++;
	}

}

void Rem(string &line) {
	string  temp = "";
	for (size_t i = 0; i < line.size(); ++i) {
		
		if ((line[i] >= 'a' && line[i] <= 'z') ||(line[i]>='0' && line[i]<='9')) {
			temp = temp + line[i];
		}
	}
	line = temp;
}

bool isPal(const string &str) {
	bool flag = 1;
	string tmp = str;
	size_t j = str.size();
	for (size_t i = 0; i < str.size(); i++) {
			if (str[i] == tmp[j]) {
				flag = 0;
				break;
			}
			j--;
	}
	return flag;
}
int main() {

	string name = "";
	ToLower(name);
	cout << name<<endl;
	Rem(name);
	cout << name<<endl;
	bool  IsPal = isPal(name);
	if (IsPal)
		cout << "\"" << name << "\"" << " is  a PALINDROME." << endl;
	else
		cout <<"\""<< name<<"\""<< " is NOT a PALINDROME." << endl;
	return 0;
}
