#pragma once
#include "EngineDebug.h"
#include "ConsoleMath.h"

// ȭ���� ũ�⸦ �̸� �����ϰ�
// ������ ����Ǹ� ������ �Ұ�������.
// ���� ���ε��̶�� �մϴ�.
// 
// � ������ ��ﶧ ����� �����ϴ°�.
// ��ü���� > �������� ���� ��ô�ϴ� ���� �����̶�� �����Ѵ�.
// 
// �������ε����� ���� �������ε�
// �׷��� �����ϸ� �ȵǰ� �׳� ���ڸ� ���ڷ� �޾Ƶ��� �մϴ�.
// 
// ȭ��ũ��� ���� �����Ҽ� �־���ϱ⶧���� �������ε�
// ������ ����
// 
//// ���������� ������ ���þ���
//// �̸��� ���� �ִٸ� �װ��� ����� �� �ִ�.
//const int ScreenX = 20;
//const int ScreenY = 12;
//const int ScreenXHalf = ScreenX / 2;
//const int ScreenYHalf = ScreenY / 2;

// �������ε��� ����ϰ� �Ǹ� �޸� ���� ������ ����Ҽ� �ִ�.

class ConsoleScreen
{
public:
	ConsoleScreen();
	virtual ~ConsoleScreen();

	void CreateScreen(int _ScreenX, int _ScreenY);
	void ReleaseScreen();
	void PrintScreen();
	void ClearScreen();

	// ���漱��
	void SetChar(const class ConsoleObject& _Object);
	void SetChar(const class ConsoleObject* _Object);
	void SetChar(const int2& _Pos, char _Char);

	inline int GetScreenX() 
	{ 
		return ScreenX; 
	}

	inline int GetScreenY() 
	{ 
		return ScreenY; 
	}

protected:

private:
	// ���� �ʱⰪ�� -1�� �س��� ��찡 �ִ�. 
	// �ʱ�ȭ ���� �ʾҴٴ°��� ǥ���ϱ� ���ؼ��̴�.
	int ScreenX = -1; 
	int ScreenY = -1;

	char** ScreenData = nullptr; // new int(); => �̰� ���������� ���α׷��Ӱ� ���Ҽ��� �ֽ��ϴ�.
	          // �������Ŀ� 
			  // ���� ���ϴ� ���� ������ �Ҽ� �ִٴ°�.
	          // ��� 2���� �迭�̶�°��� �ΰ��� ���Ǽ��� ���ؼ� ������ �ͻ��̴�.
	          // ���̶�� �ϴ� ������ 1�����̱� ������ �����Ҽ��� �����ϴ�.
	          // 8�Ⱑ �� 4���� ���� 2����
	          // ��ǻ�Ͱ� �װ� ó���Ҷ� �� �ϵ��� ó���Ҷ� �����ؼ� ���� �ʱ� ������
	          // ���α׷��ӿ��Դ� ������ 1������ �޸��� ���̴�.

	// char Arr[10 * 10];
};

