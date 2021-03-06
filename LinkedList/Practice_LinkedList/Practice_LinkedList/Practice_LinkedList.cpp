// Practice_LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "C_MyLinkedList.h"


using namespace std;


int main()
{
    C_MyLinkedList<double> List1;
    double val;
    srand(time(NULL));

    cout << "放入十個浮點數\n";
    for (int i = 0; i < 10; i++) {
        val = (double)rand() / 100;
        List1.AddBack(val);
    }
    List1.Show();

    cout << "放兩個浮點數在前面\n";
    for (int i = 0; i < 2; i++) {
        val = (double)rand() / 100;
        List1.AddFront(val);
    }
    List1.Show();

    cout << "放一個浮點數在位置5\n";
    val = (double)rand() / 100;
    List1.Insert(5, val);
    List1.Show();

    cout << "刪除一個浮點數在位置7\n";
    List1.Remove(7);
    List1.Show();

    cout << "將list反轉\n";
    List1.Inverse();
    List1.Show();


    return 0;
}

