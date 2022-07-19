#include <iostream>

int main()
{
	int array1[5][9]{};

	for (int i = 0; i < 5; i++)
	{
		array1[i][4 - i] = 1;
		array1[i][4 + i] = 1;
	}

	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 1)
		{
			for (int j = 1; j < 4; j++)
			{
				array1[i + 1][2 * j] = array1[i][2 * j - 1] + array1[i][2 * j + 1];
			}
		}

		else 
		{
			for (int j = 0; j < 4; j++)
			{
				array1[i + 1][2 * j + 1] = array1[i][2 * j] + array1[i][2 * j + 2];
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (array1[i][j] == 0)
			{
				std::cout << " ";
			}

			else
			{
				std::cout << array1[i][j];
			}
		}

		std::cout << std::endl;
	}
}