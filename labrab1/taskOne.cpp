#include <iostream>
#include <string>
#include "taskOne.h"
void taskOneB()
{
	std::string someString;

	const std::string arrSorting{ "()`~!@#$%^&*-+=|\\{}[]:;\"'<>,.?/_Е\n" };

	bool isSort = true;

	std::cout << "¬ведите строку дл€ сортировки." << std::endl;
	std::getline(std::cin, someString);

	std::string filtratedString = "";

	for (auto iter{ someString.begin() }; iter != someString.end(); iter++)
	{
		for (int i = 0; i < arrSorting.size(); i++)
		{
			if (*iter == arrSorting[i])
			{
				isSort = 0;
				break;
			}
		}
		if (isSort)
		{
			filtratedString += *iter;
		}
		isSort = true;

		//char lessLet = filtratedString[0];
//char nowLet;
//
//for (int i = 0; i < filtratedString.size(); i++)
//{
//	nowLet = filtratedString[i];

//	if (lessLet < nowLet)
//	{
//		lessLet = nowLet;
//	}
//}
//	for (auto i = lessLet; i < lessLet+66; i++)
//	{
//		for (int j = 0; j < filtratedString.size(); j++)
//		{
//			if (i == filtratedString[j])
//			{
//				endSortString += filtratedString[j];
//			}
//		}
//	}
//	std::cout << endSortString;
// это второй, более интересный со стороны логики с++, но, из-за ососбенностей разных копил€торов, не универсальный код.
// ”добнее реализовать эту идею можно с помощью кодировки UTF-8 и библиотеки <codecvt>.
// —ложность алгоритма ќ(N)
	}

	std::string alphabet = "абвгдеЄжзийклмнопрстуфхцчшщъыьэю€јЅ¬√ƒ≈®∆«»… ЋћЌќѕ–—“”‘’÷„ЎўЏџ№ЁёяabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
	std::string endSortString = "";

	for (char c : alphabet)
	{
		for (int j = 0; j < filtratedString.size(); j++)
		{
			if (c == filtratedString[j])
			{
				endSortString += filtratedString[j];
			}
		}
	}
	std::cout << endSortString << std::endl;
}