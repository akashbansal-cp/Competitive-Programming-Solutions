#include <bits/stdc++.h>
using namespace std;
int compareX( vector<int> a,  vector<int> b)
{
	return a[0] - b[0];
}
int compareY( vector<int> a,  vector<int> b)
{
	return a[1] - b[1];
}
float dist(vector<int> p1, vector<int> p2)
{
	return sqrt( (p1[0] - p2[0])*(p1[0] - p2[0]) +
				(p1[1] - p2[1])*(p1[1] - p2[1])
			);
}
float bruteForce(vector<vector<int>>& points, int n)
{
	float min = FLT_MAX;
	for (int i = 0; i < n; ++i)
		for (int j = i+1; j < n; ++j)
			if (dist(points[i], points[j]) < min)
				min = dist(points[i], points[j]);
	return min;
}
float min(float x, float y)
{
	return (x < y)? x : y;
}
float stripClosest(vector<vector<int>>& strip, int size, float d)
{
	float min = d;
	sort(strip.begin(),strip.end(), compareY);
	for (int i = 0; i < size; ++i)
		for (int j = i+1; j < size && (strip[j][1] - strip[i][1]) < min; ++j)
			if (dist(strip[i],strip[j]) < min)
				min = dist(strip[i], strip[j]);

	return min;
}

float closestUtil(vector<vector<int>>& points,int s, int n)
{
	if (n <= 3)
		return bruteForce(points, n);
	int mid = s+(n/2);
	vector<int> midPoint = points[mid];
	float dl = closestUtil(points,s, mid);
	float dr = closestUtil(points,mid, n - mid);
	float d = min(dl, dr);
	vector<vector<int>> strip(n);
	int j = 0;
	for (int i = 0; i < n; i++)
		if (abs(points[i][0] - midPoint[0]) < d)
			strip[j] = points[i], j++;
	return min(d, stripClosest(strip, j, d) );
}
float closest(vector<vector<int>>& points, int n)
{
	sort(points.begin(), points.end(), compareX);
	return closestUtil(points,0, n);
}
int main()
{
	vector<vector<int>> points = {{2, 3}, {12, 30}, {40, 50}, {5, 1}, {12, 10}, {3, 4}};
	int n = points.size() / 2;
	cout << "The smallest distance is " << closest(points, n);
	return 0;
}