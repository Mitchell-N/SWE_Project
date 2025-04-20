#ifndef ACCESS_CONTROL_SYSTEM_H
#define ACCESS_CONTROL_SYSTEM_H

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class AccessControlSystem {
private:
	string businessHours;

public:
	//Constructor
	AccessControlSystem ();

	//Business hours getter
	void setBusinessHours (const string& hours);
	string getBusinessHours () const;

	//Access methods
	bool verifyCredentials();
	bool checkAccessLevel();
	void grantAccess();
	void denyAccess();
	void logAccessAttempt();
	void lockAccess();
	void unlockAccess();
	void initiateLockdown();

	
	string currentTime() const;

};

#endif