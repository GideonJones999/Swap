while (cin.fail())
{
	cout << "Error: Data not readable. Try again." << endl;
	cin.clear();
	string garbage;
	cin >> garbage;
}