#include"Delete_Person.h"
#include"Rank_Person.h"
#include"Add_Person.h"
void Delete_Person(A_Person All_person[], int &count)
{
	string delete_name;
	cout << "请输入你想要删除人的姓名：" << endl;
	cin >> delete_name;
	for (int i = 0; i < count; i++)
	{
		if (All_person[i].Name == delete_name)
		{
			All_person[i] = All_person[count - 1];
			All_person[count - 1] = { "zblank","blank",0,"0","blank" };
		}
	}
	Rank_Person(All_person, count);
	count--;
}