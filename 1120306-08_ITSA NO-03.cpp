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
