#include <iostream>
using namespace std;
#include "Guest.h"
#include "User.h"
#include "PowerUser.h"
#include "VIP.h"
#include "Admin.h"


int main()
{
	Guest g("Ip Address of the guest");

	PowerUser u("Ip address of Power User","Power User username",
		"Power User title","Power User password");

	User k("Ip address of User","User username","User title","User pass");

	Admin a("ipaddress Admin", "Admin username", "Admin title", "Admin pass");

	VIP v("Ip address of VIP", "VIP username",
		"VIP title", "VIP password");

	g.print();

	k.ChangePassword("User pass", " New Pass for the user");
	k.print();

	u.reputationIncrease(v);
	u.print();

	v.setTitle("New title");
	v.print();

	a.changeAnotherUsername(k, "New User username");
	k.print();
	a.setUsername("New admin username");
	a.print();

	int _;
	cin >> _;
	return 0;
}



