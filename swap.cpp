#include <fstream>

#define NMAX 90000

using namespace std;

ifstream fin("swap.in");
ofstream fout("swap.out");

typedef int stiva[NMAX];

stiva s;

int vf = -1, ct, nr;

int main()
{
	int n, i, dif;
	char c;

	fin >> n;

	for (i = 0; i < n; i++)
	{
		fin >> c;

		if (c == '(')
		{
			s[++vf] = i;
		}
		else
		{
			dif = i - s[vf];

			ct += dif;
			
			vf--;

			if (vf > -1 && dif == 1)
			{
				nr++;
			}
		}
	}

	fout << ct << '\n';

	if (nr == 0)
	{
		fout << -1 << '\n' << 0;
	}
	else
	{
		fout << ct-2 << '\n' << nr;
	}

	return 0;
}

// scor 100
