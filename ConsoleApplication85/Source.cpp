#include <stdlib.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int task;
	cin >> task;
	if (task == 1)
	{
		double y;
		y = 1+sin(0.1);

		for (double i = 0.1;i < 10;i += 0.1)
		{
			
			y *=1+sin(i);
			cout << i << endl;
			cout << y << endl;
		}
	}
	if (task == 2)
	{
		double x,sum1,sum2,fact,power,result;
		int sum;
		sum = 0;
		fact = 1;
		x = 7;
		sum1 = 0;
		sum2 = 0;
		for (int i = 1;i <= 13;i ++)
		{
			sum += i;
			fact *= i;
			power = pow(x, i);
			if(sum%2==0&&i%2!=0)
			{
				cout << i << endl;
				cout << fact << endl;
				cout << power << endl;
				sum1 += power / fact;
				cout << sum1 << endl;
			}
			if (sum % 2 != 0 && i % 12 != 0)
			{
				cout << i << endl;
				cout << fact << endl;
				cout << power << endl;
				sum2+= power / fact;
				cout << sum2 << endl;
			}
		}
		result = sum2 - sum1;
		cout<<"Result " << result << endl;
	}
	if (task == 3)
	{
		double a, sum;
		sum = 1;
		cin >> a;
		for (double i = 2;sum <= a + 1 + (1 / i);i++)
		{
			sum += 1 + 1 / i;
			cout <<"Pervoe chislo>a= "<< sum << endl;
		}
	}
	if (task == 4)
		{
			double a, sum;
			sum = 0;
			cin >> a;
			for (double n = 1;sum <= a + 1 / n;n++)
			{
				sum += 1 / n;
				cout << sum << endl;
				cout <<"n= "<< n << endl;
			}
		}
	
}