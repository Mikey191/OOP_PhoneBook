//�����������:
// ��������� ���������
// ������� ���������
// ������ ��������� �� ���
// ���������� ���� ���������
// ��������� � ��������� ��� ���������� � ����
//

#include <iostream>
#include "Subscriber.h"
using namespace std;

void AddSubscriber(Subscriber* arr, int& size);
//void DeleteSubscriber();
//void SerchSubscriber();
void ShowAllSubscriber(Subscriber* arr, int& size);

//void LoadDataBin();
//void SaveDataBin();

//void push_backSubscriber(Subscriber*& arr, int& size);

int main()
{
	/*Subscriber* s = new Subscriber[1];
	char phonenumber[20];
	cout << "Enter phone mobile: ";
	cin >> phonenumber;
	Subscriber s1(phonenumber);
	s[0] = s1;*/
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
			//push_backSubscriber(s, size);
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

	//delete[] s;

	return 0;
}

void AddSubscriber(Subscriber* arr, int& size)
{
	Subscriber temp;
	cout << "Name: ";
	char name[20];
	cin.getline(name, 20);
	temp.SetName(name);

	cout << "H N: ";
	char numberHome[20];
	cin.getline(numberHome, 20);
	temp.SetPhoneNumberHome(numberHome);

	cout << "J N: ";
	char numberJobe[20];
	cin.getline(numberJobe, 20);
	temp.SetPhoneNumberJob(numberJobe);

	cout << "M N: ";
	char numberMobile[20];
	cin.getline(numberMobile, 20);
	temp.SetPhoneNumberMobile(numberMobile);

	cout << "INFO: ";
	char info[20];
	cin.getline(info, 20);
	temp.SetAdditionalInformation(info);

	arr[size] = temp;
	size++;
}

void ShowAllSubscriber(Subscriber* arr, int& size)
{
	cout << "size = " << size << endl;
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

//void push_backSubscriber(Subscriber*& arr, int& size)
//{
//	char tempnumber[20];
//	cout << "Enter mobile number: ";
//	cin>>tempnumber;
//	Subscriber temp(tempnumber);
//
//	Subscriber* newArr = new Subscriber[size + 1];
//
//	for (int i = 0; i < size; i++)
//	{
//		newArr[i] = arr[i];
//	}
//	newArr[size] = temp;
//	size++;
//
//	//delete[] arr;
//
//	arr = newArr;
//}
