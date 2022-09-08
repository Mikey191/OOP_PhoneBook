//возможности:
// добавлять абонентов
// удалять абанентов
// искать абонентов по фио
// показывать всех абанентов
// сохранять и загружать всю информацию в файл
//

#include <iostream>
#include "Subscriber.h"
using namespace std;

void AddSubscriber(Subscriber* arr, int& size);
void DeleteSubscriber();
void SerchSubscriber();
void ShowAllSubscriber(Subscriber* arr, int& size);

void LoadDataBin();
void SaveDataBin();

void push_back(Subscriber*& arr, int& size, Subscriber temp);

int main()
{
	Subscriber s[100];
	int size = 0;

	int p;
	do
	{
		//system("cls");
		cout << "\tPhone Book" << endl;
		cout << "1 - Add Subscriber;" << endl;
		cout << "2 - Delete Subscriber;" << endl;
		cout << "3 - Serch for Name and Surname;" << endl;
		cout << "4 - Show All Subscibers;" << endl;
		cout << "0 - EXIT;" << endl;
		cout << "Your choise:";
		cin >> p;
		switch (p) 
		{
		case 1:
			AddSubscriber(s, size);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			ShowAllSubscriber(s, size);
			break;
		}


	} while (p != 0);

	return 0;
}

void AddSubscriber(Subscriber* arr, int& size)
{
	char phone[12];
	cout << "Enter Mobile Phone:";
	cin >> phone;
	Subscriber temp(phone);
	arr[size] = temp;
	size++;
	/*Subscriber temp;
	push_back(*&arr, *&size, temp);*/
}

void ShowAllSubscriber(Subscriber* arr, int& size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Name: " << arr[i].GetName() << endl;
		cout << "Home phone: " << arr[i].GetPhoneNumberHome() << endl;
		cout << "Job phone: " << arr[i].GetPhoneNumberJob() << endl;
		cout << "Mobile phone: " << arr[i].GetPhoneNumberMobile() << endl;
		cout << "Additational Information: " << arr[i].GetAdditionalInformation() << endl;
		cout << endl;
	}
	system("pause");
}

void push_back(Subscriber*& arr, int& size, Subscriber temp)
{
	Subscriber* newArr = new Subscriber[size + 1];

	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}
	newArr[size] = temp;
	size++;

	delete[] arr;

	arr = newArr;
}
