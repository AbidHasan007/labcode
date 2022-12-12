#include<iostream>
#include<fstream>
using namespace std;

int main ()
{
    fstream my_file;
    char ch;
    my_file.open("read.txt",ios::in);
    if(!my_file)
    {
        cout<<"No such file";
    }else{

         while(1)
         {
             my_file>>ch;
             if(my_file.eof())
             {
                 break;
             }
             cout<<ch;
         }
         my_file.close();

    }
    my_file.open("read.txt", ios::out);
	if (!my_file) {
		cout << "no such file!";
	}
	else {
		cout << "File created successfully!";
		my_file << "Go ";
		my_file.close();
	}
    return 0;
}
