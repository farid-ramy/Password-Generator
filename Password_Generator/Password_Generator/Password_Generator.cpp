#include <iostream>
using namespace std;

int main()
{
	string character_small = "abcdefghijklmnopqrstuvwxyz";//26
	string character_big = "ABCDEFGHOJKLMNOPQRSTUVWXYZ";//26
	string numbers = "123456789";//9
	string special_char = "~!@#$%^&*()_+-=<>{}[]|:;";//24

	string pass = "";

	srand(time(0));

	for (int j = 0; j < 100; j++)
	{
		pass = "";
		for (int i = 0; i < 26; i++)
		{
			if (i == 0) // to make the first letter a character_small
				pass += character_small[rand() % (character_small.length())];
			
			switch (rand() % 4)
			{
			case 0:
				pass += character_small[rand() % (character_small.length())];
				break;
			case 1:
				pass += character_big[rand() % (character_big.length())];
				break;
			case 2:
				pass += numbers[rand() % (numbers.length())];
				break;
			case 3:
				pass += special_char[rand() % (special_char.length())];
				break;
			}
		}

		cout << "Your Password : " << pass << endl;
	}
}

