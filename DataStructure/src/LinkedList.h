#pragma once
#define MAX_INDEX 100

template<typename T>
class ArrayList
{
public:
	ArrayList()
		:Element{}, Count(0)
	{
	}

	~ArrayList() = default;

	void Insert(int Index, T Value)
	{
		if (Index < 0 || Index >= MAX_INDEX || Index > Count || Count == MAX_INDEX)return;


		for (int i = Count; i > Index; --i)
		{
			Element[i] = Element[i - 1];
		}

		Element[Index] = Value;
		Count++;
	}

	void Remove(int Index)
	{
		if (Index < 0 || Index >= MAX_INDEX || Index >= Count)return;

		for (int i = Index + 1; i < Count;i++)
		{
			Element[i - 1] = Element[i];
		}

		Count--;
	}

	T Get(int Index)
	{
		if (Index < 0 || Index >= MAX_INDEX || Index >= Count)return;

		return Element[Index];
	}

	void Set(int Index, const T& Value)
	{
		if (Index < 0 || Index >= MAX_INDEX || Index >= Count)return;

		Element[Index] = Value;
	}

	int Find(T Value)
	{
		if (Index < 0 || Index >= MAX_INDEX || Index >= Count)return;

		int Result = -1;
		for (int i = 0;i < Count;++i)
		{
			if (Element[i] == Value)
			{
				Result = i;
				break;
			}
		}

		return Result;
	}

	size_t Size() { return Count; }

	bool IsEmpty() { return Count == 0; }

	void Clear() { Count = 0; }

private:
	T Element[MAX_INDEX];
	size_t Count;
};