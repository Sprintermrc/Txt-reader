#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void cherti(int n);
void print(std::string txt);

void cherti(int n)																					//������� n ���������� �������������� ����
{
	for (int i = 0; i < n; ++i) 
	{
		std::cout << "----------------------------------------------------" << std::endl;
	}

}

void cherti(int n, std::string tn)																	//������� n ���������� �������������� ���� � ����� ����� ����
{
	int a  = n / 2;
		for (int i = 0; i < a; ++i)
		{
			std::cout << "----------------------------------------------------" << std::endl;
		}
		std::cout << tn << std::endl;
		for (int i = 0; i < a; ++i)
		{
			std::cout << "----------------------------------------------------" << std::endl;
		}
}
int main() {
	setlocale(LC_ALL, "");
	std::ifstream in1("strings.txt");								// ���� � ������� ��������� ������ ������� �� ����  strings.txt
	std::vector<std::string> params;
	std::string param;
	int c{0};
	int rc{0};
	while (std::getline(in1, param) && !param.empty())								//�������� ������ �� strings.txt
	{
		params.push_back(param);													// � ������ �� � ������
	}
	std::cout << "����� �� ����������: " << std::endl;
	for (size_t i = 0; i < params.size(); ++i)										// ������� ��� ���������� ������� ����� �� ������� �� ����
	{
		std::cout << i + 1 << ") " << params[i] << std::endl;
		c++;
	}
	cherti(2, std::to_string(c) + " ��������� �������");
	


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
					std::cout << line << std::endl;						// � ������� ������ � ����
					rc++;
				}
			}

		}			
		cherti(4, std::to_string(rc) + " ���������� �������");
	}
	in.close();
	return 0;
}


void print(std::string txt) {
	std::cout << txt << std::endl;
}