#pragma once
#include "Subscriber.h"
#include <iostream>
using namespace std;

Subscriber::Subscriber()
{
	cout << "constr 1" << endl;
	Name = nullptr;
	PhoneNumberHome = nullptr;
	PhoneNumberJob = nullptr;
	PhoneNumberMobile = nullptr;
	AdditionalInformation = nullptr;
}

//Subscriber::Subscriber()
//{
//	cout << "_constr_1" << endl;
//
//	cout << "\tNew Subscriber" << endl;
//	cout << "Enter Name Subscriber:";
//	char temp[20];
//	cin.getline(temp, 20);
//	int length = strlen(temp);
//	Name = new char[length + 1];
//	for (int i = 0; i < length+1; i++)
//	{
//		Name[i] = temp[i];
//	}
//	Name[length+1] = '\0';
//
//	cout << "Home phone: ";
//	cin.getline(PhoneNumberHome, 20);
//
//	cout << "Job phone: ";
//	cin.getline(PhoneNumberJob, 20);
//
//	cout << "Mobile phone: ";
//	cin.getline(PhoneNumberMobile, 20);
//
//
//	cout << "Additional Information:";
//	cin.getline(AdditionalInformation, 100);
//
//}

Subscriber::Subscriber(char* PhoneNumberMobile)
{
	cout << "constr 2" << endl;

	cout << "\tNew Subscriber" << endl;

	cout << "Enter Name Subscriber: ";
	char temp[20];
	cin.getline(temp, 20);
	cin.getline(temp, 20);
	int length = strlen(temp);
	Name = new char[length + 1];
	for (int i = 0; i < length + 1; i++)
	{
		Name[i] = temp[i];
	}
	//Name[length + 1] = '\0';

	cout << "Home phone: ";
	char temp2[20];
	cin.getline(temp2, 20);
	int length2 = strlen(temp2);
	PhoneNumberHome = new char[length2 + 1];
	for (int i = 0; i < length2 + 1; i++)
	{
		PhoneNumberHome[i] = temp2[i];
	}
	//PhoneNumberHome[length2 + 1] = '\0';

	cout << "Job phone: ";
	char temp3[20];
	cin.getline(temp3, 20);
	int length3 = strlen(temp3);
	PhoneNumberJob = new char[length3 + 1];
	for (int i = 0; i < length3+1; i++)
	{
		PhoneNumberJob[i] = temp3[i];
	}
	//PhoneNumberJob[length3 + 1] = '\0';

	int length5 = strlen(PhoneNumberMobile);
	Subscriber::PhoneNumberMobile = new char[length5 + 1];
	for (int i = 0; i < length5+1; i++)
	{
		Subscriber::PhoneNumberMobile[i] = PhoneNumberMobile[i];
	}
	//Subscriber::PhoneNumberMobile[length5 + 1] = '\0';

	cout << "Additional Information:";
	char temp4[20];
	cin.getline(temp4, 20);
	int length4 = strlen(temp4);
	AdditionalInformation = new char[length4 + 1];
	for (int i = 0; i < length4+1; i++)
	{
		AdditionalInformation[i] = temp4[i];
	}
	//AdditionalInformation[length4 + 1] = '\0';

}

void Subscriber::SetName(char* Name)
{
	int length = strlen(Name);
	Subscriber::Name = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		Subscriber::Name[i] = Name[i];
	}
}

void Subscriber::SetPhoneNumberHome(char* PhoneNumberHome)
{
	strcpy_s(Subscriber::PhoneNumberHome, 20, PhoneNumberHome);
}

void Subscriber::SetPhoneNumberJob(char* PhoneNumberJob)
{
	strcpy_s(Subscriber::PhoneNumberJob, 20, PhoneNumberJob);
}

void Subscriber::SetPhoneNumberMobile(char* PhoneNumberMobile)
{
	strcpy_s(Subscriber::PhoneNumberMobile, 20, PhoneNumberMobile);
}

void Subscriber::SetAdditionalInformation(char* AdditionalInformation)
{
	strcpy_s(Subscriber::AdditionalInformation, 100, AdditionalInformation);
}

Subscriber::~Subscriber()
{
	cout << "des...." << endl;
	/*delete[] Name;
	delete[] PhoneNumberHome;
	delete[] PhoneNumberJob;
	delete[] PhoneNumberMobile;
	delete[] AdditionalInformation;*/
}
