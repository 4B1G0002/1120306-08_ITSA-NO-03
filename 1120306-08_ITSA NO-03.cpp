// 1120306-08_ITSA NO-03.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
// 題目3. 判斷座標是否在圓形的範圍內

#include<iostream>
using namespace std;

int main()
{
    //Preset_radius 預設半徑 
    //new_radius  新的半徑 
    int m, n;
    while (cin >> m >> n) {
        int Preset_radius = 10000;
        double new_radius = (m * m) + (n * n); //設double型態確保 
        if (new_radius < Preset_radius) {
            cout << "inside\n";
        }
        else {
            cout << "outside\n";
        }

    }

    return 0;
}
/*
因為圓心是(0,0)那給一個點可以 利用畢式定理求出半徑平方
題目直徑給200，代表半徑100，半徑平方10000
若算出來值>10000就是裡面 ，否則外面
*/

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
