#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {
	setlocale(LC_ALL, "");
	std::ifstream in1("strings.txt");								// Файл в котором прописаны строки которые мы ищем  strings.txt
	std::vector<std::string> params;
	std::string param;		

	while (std::getline(in1, param) && !param.empty())								//Получаем строки из strings.txt
	{
		params.push_back(param);													// и пихаем их в вектор
	}
	std::cout << "Поиск по параметрам: " << std::endl;
	for(size_t i = 0; i < params.size(); ++i)										// Выводим все полученные примеры строк по которым мы ищем
	{
		std::cout << i + 1 << ") " << params[i] << std::endl;
	}
	std::cout << "----------------------------------------------------" << std::endl;



	std::string line;												
	std::ifstream in("1.txt");										//  Файл в котором мы ищем эти строки 1.txt
	if (in.is_open())												
	{
		while (std::getline(in, line))
		{
			for (size_t i = 0; i < params.size(); ++i)								
			{
				if (line.find(params[i]) != std::string::npos)			// Непосредственно ищем циклом все совпадения
				{
					std::cout << line << std::endl;						// И выводим их
					
				}
				
			}
		}
		std::cout << "----------------------------------------------------" << std::endl;
	}
	in.close();

	return 0;
}