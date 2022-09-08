#pragma once
#include "Subscriber.h"
#include <iostream>
using namespace std;

Subscriber::Subscriber()
{
	cout << "constr 1" << endl;
	Name = nullptr;
	PhoneNumberHome[20];
	PhoneNumberJob[20];
	PhoneNumberMobile[20];
	AdditionalInformation[100];
}

//Subscriber::Subscriber()
//{
//	cout << "constr 1" << endl;
//
//	cout << "New Subscriber:" << endl;
//	cout << "Enter Name Subscriber:";
//	char temp[20];
//	cin.getline(temp, 20);
//	int length = strlen(temp);
//	Name = new char[length + 1];
//	for (int i = 0; i < length; i++)
//	{
//		Name[i] = temp[i];
//	}
//
//	cout << "Home phone: ";
//	cin.getline(PhoneNumberHome, 20);
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
	cout << "New Subscriber:" << endl;
	cout << "Enter Name Subscriber:";
	char temp[20];
	cin.getline(temp, 20);
	int length = strlen(temp);
	Name = new char[length+1];
	for (int i = 0; i < length; i++)
	{
		Name[i] = temp[i];
	}

	cout << "Home phone: ";
	cin.getline(PhoneNumberHome, 20);
	cin.getline(PhoneNumberHome, 20);

	cout << "Job phone: ";
	cin.getline(PhoneNumberJob, 20);

	strcpy_s(Subscriber::PhoneNumberMobile, 20, PhoneNumberMobile);

	cout << "Additional Information:";
	cin.getline(AdditionalInformation, 100);

	cout << "constr 2" << endl;
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
	delete[] Name;
}
