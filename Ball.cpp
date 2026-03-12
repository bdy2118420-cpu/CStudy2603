#include <iostream>
#include <time.h>

using namespace std;

void Create(int* Ball, int Size)
{
	for (int i = 0; i < Size; i++)
	{
		Ball[i] = i + 1;
	}
}


void Shuffle(int* Ball, int Size)
{
	srand(time(0));
	for (int i = 0; i < Size; i++)
	{
		int array = 0;
		int index = rand() % 45;
		array = Ball[i];
		Ball[i] = Ball[index];
		Ball[index] = array;
	}
}

void PrintResult(int* Ball, int PickNum)
{
	cout << "공 뽑기 결과" << endl;

	for (int i = 0; i < PickNum; i++)
	{
		cout << Ball[i] << " ";
	}
	cout << endl;

}

int main()
{

	int Size = 45;
	int PickNum = 6;
	int* Ball = new int[Size];

	//볼 번호 생성
	Create(Ball, Size);

	//볼 섞기
	Shuffle(Ball, Size);

	//결과 출력
	PrintResult(Ball, PickNum);

	delete[] Ball;
	Ball = nullptr;
}