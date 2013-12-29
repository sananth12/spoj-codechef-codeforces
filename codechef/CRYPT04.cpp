#include <stdio.h>
#include <list>

using namespace std;

int main ()
{
	list <int> v;
	int n, i, flag, temp;

	while (scanf ("%d", &n)) {

		if (n == 0)
			return 0;
		v.clear ();

		for (i = n; i >= 1; i--)
			v.push_front(i);

		flag = 0;

		while (v.size () > 1) {
			if (flag == 0) {
				temp = v.front ();
				v.pop_front ();
				flag = 1;
				temp = v.front ();
				v.push_back (temp);
				v.pop_front ();
			}

			else {
				temp = v.front ();
				v.pop_front ();
				temp = v.front ();
				v.push_back (temp);
				v.pop_front ();
			}

		}

		printf("%d\n", v.front ());
	}

	return 0;
}
