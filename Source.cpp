#include <iostream>
#include <time.h>

using namespace std;

void Create(int* Ball)
{
	for (int i = 0; i < 45; i++)
	{
		Ball[i] = i + 1;
	}
}


void Shuffle(int* Ball)
{
	srand(time(0));
	for (int i = 0; i < 45; i++)
	{
		int array = 0;
		int index = rand() % 45;
		array = Ball[i];
		Ball[i] = Ball[index];
		Ball[index] = array;
	}
}

void PrintResult(int* Ball)
{
	cout << "공 뽑기 결과" << endl;

	for (int i = 0; i < 6; i++)
	{
		cout << Ball[i] << " ";
	}
	cout << endl;

}

int main()
{

	int Size = 45;
	int* Ball = new int[Size];

	//볼 번호 생성
	Create(Ball);

	//볼 섞기
	Shuffle(Ball);

	//결과 출력
	PrintResult(Ball);

}