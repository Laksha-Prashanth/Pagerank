#include "iostream"
#include "fstream"
#include "string"

using namespace std;

int main(int argc, char** argv)
{

	int iterations = atoi(argv[1]);
	string filename = argv[2];
	ifstream file;
	string line;
	int n,m;

	file.open(filename);

	file>>n>>m;

	cout<<n<<' '<<m<<endl;

	while(getline(file,line))
	{
		cout<<line<<"\n";
	}
	return 0;
}
