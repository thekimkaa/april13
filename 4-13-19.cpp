// Please input numbers only.

#include <iostream>
using namespace std;

int main()
{
	int m,d,y;
	
	cout << "Enter month: \n"; cin >> m;
	cout << "Enter day: \n"; cin >> d;
	cout << "Enter year \n"; cin >> y;
	
	switch (m)
	{
		case 1:
			cout << "January" << " " << d << "," << " " << y << endl;
			break;
		case 2:
			cout << "February" << " " << d << "," << " " << y << endl;
			break;
		case 3:
			cout << "March" << " " << d << "," << " " << y << endl;
			break;
		case 4:
			cout << "April" << " " << d << "," << " " << y << endl;
			break;
		case 5:
			cout << "May" << " " << d << "," << " " << y << endl;
			break;
		case 6:
			cout << "June" << " " << d << "," << " " << y << endl;
			break;
		case 7:
			cout << "July" << " " << d << "," << " " << y << endl;
			break;
		case 8:
			cout << "August" << " " << d << "," << " " << y << endl;
			break;
		case 9:
			cout << "September" << " " << d << "," << " " << y << endl;
			break;
		case 10:
			cout << "October" << " " << d << "," << " " << y << endl;
			break;
		case 11:
			cout << "November" << " " << d << "," << " " << y << endl;
			break;
		case 12:
			cout << "December" << " " << d << "," << " " << y << endl;
			break;
	}
	
	do
	{
		if (y>0)
		{
			if (m >= 1 && m <= 12)
			{
		
				if ((m == 4 || m == 6 || m == 9 || m == 11) && (d>=1 && d<30))
				{
				}
				else if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (d>=1 && d<=31))
				{
				}
				else if (( m == 2) && (d>=1 && d<=28))
				{
				}
				else
					cout << "Invalid date!";
			}
			else
				cout << "Invalid date!";
		}
		else
			cout << "Invalid date!";
	} while (!abort);
	
	return 0;
}
