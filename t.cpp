// inserting into a vector
 #include <iostream>
 #include <vector>
 using namespace std;

int main ()
{	
	vector<int> myvector (3,100);
	vector<int>::iterator it;
	it = myvector.begin();
	it = myvector.insert ( it , 200 );

	myvector.insert (it,2,300);

	for (it=myvector.begin(); it<myvector.end(); it++)
		cout << " " << *it;
	cout << endl; 

	return 0;
}
