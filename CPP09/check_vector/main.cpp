#include <iostream>
#include <vector>
#define TOTAL 400
#define HALF 200


int	main()
{
	std::vector<int> datas;
	std::vector<int> datas2;
	std::vector<int>::iterator ite_l;
	std::vector<int>::iterator ite_r;
	std::vector<int>::iterator ite_check;

	clock_t			start_1, end_1;
	clock_t			start_2, end_2;
	double duration1;
	double duration2;


	for(int i = 0; i < HALF; i++)
	{
		datas.push_back(i * 2);
	}
	for(int i = 1; i < HALF + 1; i++)
	{
		datas.push_back(i * 2 + 1);
	}
	for(int i = 0; i < TOTAL; i++)
	{
		std::cout << datas[i] << std::endl;
	}
	datas2 = datas;

	start_1 = clock();
	ite_l = datas.begin();
	ite_r = ite_l;
	for (int i = 0; i < HALF; i++)
		++ite_r;
	ite_check = ite_l;
	while (ite_check != datas.end())
	{
		if (*ite_check < *ite_r)
			ite_check++;
		else
		{
			datas.insert(ite_check, *ite_r);
			ite_r++;
			ite_check++;
			datas.erase(ite_r);	
		}
	}
	end_1 = clock();
	duration1 = double(end_1 - start_1) / double(CLOCKS_PER_SEC) * 100000;

	std::cout << std::endl;
	for(int i = 0; i < TOTAL; i++)
		std::cout << datas[i] << std::endl;

	start_2= clock();
	int	pos_insert;
	int	pos_check;
	int	pos_mid;
	int	temp;

	pos_insert = 0;
	pos_mid = HALF;
	while (pos_mid < TOTAL)
	{	
		while (datas2[pos_insert] < datas2[pos_mid])
			pos_insert++;
		pos_check = pos_mid;
		while (pos_check > pos_insert)
		{
			temp = datas2[pos_check];
			datas2[pos_check] = datas2[pos_check - 1];
			datas2[pos_check - 1] = temp;
			pos_check--;
		}
		pos_mid++;
	}
	end_2= clock();
	duration2 = double(end_2 - start_2) / double(CLOCKS_PER_SEC) * 100000;

	std::cout << "data!!! 2!!!" << std::endl;
	for(int i = 0; i < TOTAL; i++)
		std::cout << datas2[i] << std::endl;

	std::cout  << "Time for sort with insert: " << duration1 <<  " ms, compared rate is " << std::endl;
	std::cout  << "Time for sort with swap: " << duration2 <<  " ms, compared rate is " << std::endl;
	return(0);
}