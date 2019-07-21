//============================================================================
// Name        : bubblesortinglist.cpp
// Author      : Bibin P Babu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std;
void showthecontent(std::list<int> l)
{
     std::list<int>::iterator it;
      for(it=l.begin();it!=l.end();it++)
   {
       std::cout <<  *it << " ";
   }
  std::cout << "\n";
}
int main()
{
    std::cout<<"enter some numbers"<<std::endl;
    int num;
    std::list<int>array;
    while(std::cin>>num)
    {
        array.push_back(num);
    }
    array.sort();
std::cout<<"Sorted array is \n"<<std::endl;


	showthecontent(array);

return 0;
}
