#include <iostream>
#include <cmath>	

class Function		
{
public: 
	static void display()	
	{
		int i = 0;
		double b = 2;
		double a = 1.5;
		std::cout << "| x  | Solution\n";
		std::cout << "|____|_________\n";
		for (double x = 0; x < 31; x = x + 2)									
		{																			
			if (x < 10)
			{
				std::cout << "| " << x << "  | " << solution(b, x, a) << std::endl;
			}
			else
			{
				std::cout << "| " << x << " | " << solution(b, x, a) << std::endl;
			}
		}
	}
private: 
	static double solution(double b = 0, double x =0, double a = 0) 
	{
		double y = 0;
		double z = 0.333333333;
		y = x * a + b;
		y = pow(y,(z));	
		return y;
	}
};
int main()
{
	Function::display();  
}