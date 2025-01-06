#include <iostream>
#include <string>
#include <iomanip>

using namespace std;




//№1
//Дано рядок символів.Замінити в ньому всі пробіли на табуляції.
//


//int main()
//{
//	string str;
//
//	cout << "Enter TEXT: ";
//	getline(cin, str);
//
//	for (int i = 0; i < str.length(); i ++)
//	{
//		if (isspace(str[i]))
//		{
//			str[i] = '\t';
//		}
//	}
//
//	cout << str;
//
// 
//	//2 variant
// 
// 
//	/*string str;
//	string str2;
//
//	cout << "Enter TEXT: ";
//	getline(cin, str);
//
//	for (auto chr : str)
//	{
//		if (isspace(chr))
//		{
//			str2 += '\t';
//		}
//		else
//		{
//			str2 += chr;
//		}
//	}
//
//	cout << str2;*/
//
//}




//№2
//Дано рядок символів.Визначити кількість літер, цифр та інших символів, присутніх у рядку.
//

//int main()
//{
//	string str;
//
//	cout << "Enter TEXT: ";
//	getline(cin, str);
//
//	int chars = 0, nums = 0, symvs = 0, spaces = 0, another = 0;
//
//	for (int i = 0; i < str.length(); i++)
//	{
//		if (isspace(str[i]))
//		{
//			spaces++;
//		}
//		else if (isdigit(str[i]))
//		{
//			nums++;
//		}
//		else if (isalpha(str[i]))
//		{
//			chars++;
//		}
//		else if (ispunct(str[i]))
//		{
//			symvs++;
//		}
//		else
//		{
//			another++;
//		}
//	}
//
//	cout << "V vashem tekste" << endl
//		 << "Bukv: " << chars << endl
//		 << "Chifr: " << nums << endl
//		 << "Probelov: " << spaces << endl
//		 << "Symvolov punktuacii: " << symvs << endl
//		 << "Drugih simvolov: " << another;
//
//	
//}





//№3
//Підрахувати кількість слів у введеному реченні.


//int main()
//{
//	string str;
//
//	cout << "Enter TEXT: ";
//	getline(cin, str);
//
//	int words = 0;
//
//	bool inWord = false;
//
//	for (int i = 0; i < str.length(); i++)
//	{
//		if (isalpha(str[i]) && !inWord)
//		{
//			inWord = true;
//			words++;
//		}
//		else if (isspace(str[i]))
//		{
//			inWord = false;
//		}
//	}
//
//	cout << endl << "Kolichestvo slov v vashem recheni: " << words << endl;
//}


//№4
//Дано рядок символів.Необхідно перевірити чи є цей рядок паліндромом.

//int main()
//{
//	string str;
//
//	cout << "Enter TEXT: ";
//	getline(cin, str);
//
//	bool isPal = false;
//
//	for (int i = 0; i < str.length(); i++)
//	{
//		if (str[i] == str[str.length() - 1 - i])
//		{
//			isPal = true;
//		}
//		else
//		{
//			isPal = false;
//			break;
//		}
//	}
//
//	if (isPal)
//	{
//		cout << "Vash tekst est palindromom";
//	}
//	else
//	{
//		cout << "Vash tekst ne palindrom";
//	}
//
//}



//№5
//Написати програму, яка замінює всі символи крапки "." у рядку, введеному користувачем, на символи знака оклику "!".

//int main()
//{
//	string str;
//
//	cout << "Enter TEXT: ";
//	getline(cin, str);
//
//	for (int i = 0; i < str.length(); i++)
//	{
//		if (str[i] == '.')
//		{
//			str[i] = '!';
//		}
//	}
//
//	cout << endl << "Vot vash peredelaniy tekst:" << endl << str << endl;
//}



//№6
//Користувач вводить рядок символів і шуканий символ.Порахувати скільки разів він зустрічається в рядку.


int main()
{
	string str;
	char findCh;

	cout << "Enter TEXT: ";
	getline(cin, str);

	cout << "Enter what character to find: ";
	cin >> findCh;

	findCh = tolower(findCh);

	int countChar = 0;

	for (int i = 0; i < str.length(); i++)
	{
		if (tolower(str[i]) == findCh)
		{
			countChar++;
		}
	}

	cout << "\nV vvedennom vami tekste, simvol '" << findCh
		<< "' vstrechaetsa " << countChar << " raza\n";
}
