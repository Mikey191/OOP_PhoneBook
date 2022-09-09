#pragma once
#include <iostream>
class Subscriber
{
private:
	char* Name;
	char* PhoneNumberHome;
	char* PhoneNumberJob;
	char* PhoneNumberMobile;
	char* AdditionalInformation;
public:
	Subscriber();
	Subscriber(char* PhoneNumberMobile);
	//Subscriber(char* Name, char* Surname, char* PhoneNumberMobile);
	char* GetName() { return Name; }
	char* GetPhoneNumberHome() { return PhoneNumberHome; }
	char* GetPhoneNumberJob() { return PhoneNumberJob; }
	char* GetPhoneNumberMobile() { return PhoneNumberMobile; }
	char* GetAdditionalInformation() { return AdditionalInformation; }

	void SetName(char* Name);
	void SetPhoneNumberHome(char* PhoneNumberHome);
	void SetPhoneNumberJob(char* PhoneNumberJob);
	void SetPhoneNumberMobile(char* PhoneNumberMobile);
	void SetAdditionalInformation(char* AdditionalInformation);

	~Subscriber();
};

