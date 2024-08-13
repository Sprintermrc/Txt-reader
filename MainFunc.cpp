#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {
	setlocale(LC_ALL, "");
	std::ifstream in1("strings.txt");								// ���� � ������� ��������� ������ ������� �� ����  strings.txt
	std::vector<std::string> params;
	std::string param;		

	while (std::getline(in1, param) && !param.empty())								//�������� ������ �� strings.txt
	{
		params.push_back(param);													// � ������ �� � ������
	}
	std::cout << "����� �� ����������: " << std::endl;
	for(size_t i = 0; i < params.size(); ++i)										// ������� ��� ���������� ������� ����� �� ������� �� ����
	{
		std::cout << i + 1 << ") " << params[i] << std::endl;
	}
	std::cout << "----------------------------------------------------" << std::endl;



	std::string line;												
	std::ifstream in("1.txt");										//  ���� � ������� �� ���� ��� ������ 1.txt
	if (in.is_open())												
	{
		while (std::getline(in, line))
		{
			for (size_t i = 0; i < params.size(); ++i)								
			{
				if (line.find(params[i]) != std::string::npos)			// ��������������� ���� ������ ��� ����������
				{
					std::cout << line << std::endl;						// � ������� ��
					
				}
				
			}
		}
		std::cout << "----------------------------------------------------" << std::endl;
	}
	in.close();

	return 0;
}