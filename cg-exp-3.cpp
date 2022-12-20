// CG Assignment 3
// Dinesh Shankar Rathod
// SA 73
// Batch C
#include <iostream>
#include <graphics.h>
#include <bits/stdc++.h>
using namespace std;
class algo
{
public:
    void dda_line(float x1, float y1, float x2, float y2);
    void bresneham_cir(int r);
};
void algo::dda_line(float x1, float y1, float x2, float y2)
{
    float x, y, dx, dy, step;
    int i;
    dx = abs(x2 - x1);
    dy = abs(y2 - y1);
    cout << "dy=" << dy << "\tdx=" << dx;
    if (dx >= dy)
        step = dx;
    else
        step = dy;
    cout << "\n"
         << step << endl;
    float xinc = float((x2 - x1) / step);
    float yinc = float((y2 - y1) / step);
    x = x1;
    y = y1;
    i = 1;
    while (i <= step)
    {
        cout << endl
             << "\t" << i << "\t(x,y)=(" << x << "," << y << ")";
        putpixel(320 + x, 240 - y, 4);
        x = x + xinc;
        y = y + yinc;
        i = i + 1;
    }
}
void algo::bresneham_cir(int r)
{
    float x, y, p;
    x = 0;
    y = r;
    p = 3 - (2 * r);
    while (x <= y)
    {
        putpixel(320 + x, 240 + y, 2);
        putpixel(320 - x, 240 + y, 2);
        putpixel(320 + x, 240 - y, 2);
        putpixel(320 - x, 240 - y, 2);
        putpixel(320 + y, 240 + x, 2);
        putpixel(320 + y, 240 - x, 2);
        putpixel(320 - y, 240 + x, 2);
        putpixel(320 - y, 240 - x, 2);
        x = x + 1;
        if (p < 0)
        {
            p = p + 4 * (x) + 6;
        }
        else
        {
            p = p + 4 * (x - y) + 10;
            y = y - 1;
        }
        // delay(20);
    }
}
int main()
{
    algo a1;
    int i;
    float r, ang, r1;
    initwindow(630, 480);
    cout << "Enter radius of circle";
    cin >> r;
    a1.bresneham_cir((int)r);
    ang = 3.14 / 180;
    float c = r * cos(30 * ang);
    float s = r * sin(30 * ang);
    a1.dda_line(0, r, 0 - c, 0 - s);
    a1.dda_line(0 - c, 0 - s, 0 + c, 0 - s);
    a1.dda_line(0 + c, 0 - s, 0, r);
    r1 = s;
    a1.bresneham_cir((int)r1);
    getch();
    closegraph();
    return 0;
}
