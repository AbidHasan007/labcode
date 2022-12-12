#include<iostream>
#include<fstream>
using namespace std;

int main ()
{
    fstream my_file,my_file2;
    char ch;
    my_file.open("read.txt",ios::in);
    my_file2.open("read2.txt", ios::out);
    if(!my_file|| !my_file2)
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
             my_file2<<ch;
         }
         my_file.close();
         my_file2.close();

    }
    return 0;
}
