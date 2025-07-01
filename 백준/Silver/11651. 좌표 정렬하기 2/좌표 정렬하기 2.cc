#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct coord
{
	int x;
	int y;
};

bool compare(const coord& a, const coord& b)
{
	if (a.y == b.y) return a.x < b.x;
	return a.y < b.y;
}

int main()
{
	int n;
	cin >> n;

	vector<coord> coordArray(n);
	for (int i = 0; i < n; i++)
	{
		cin >> coordArray[i].x >> coordArray[i].y;
	}

	sort(coordArray.begin(), coordArray.end(), compare);

	for (int i = 0; i < n; i++)
	{
		cout << coordArray[i].x << ' ' << coordArray[i].y << '\n';
	}
	return 0;
}