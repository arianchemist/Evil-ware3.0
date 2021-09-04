#include <iostream>

#include <windows.h>

#include <unistd.h>

#include <conio.h>

using namespace std;

int main()
{
    while (true)
    {
        sleep(0.2);
        keybd_event(0x0D , 0 , KEYEVENTF_EXTENDEDKEY , 0);
        keybd_event(0x14 , 0 , KEYEVENTF_EXTENDEDKEY , 0);
        keybd_event(0x25 , 0 , KEYEVENTF_EXTENDEDKEY , 0);
        keybd_event(0x27 , 0 , KEYEVENTF_EXTENDEDKEY , 0);
        keybd_event(0x56 , 0 , KEYEVENTF_EXTENDEDKEY , 0);
        keybd_event(0x59 , 0 , KEYEVENTF_EXTENDEDKEY , 0);
        keybd_event(0x71 , 0 , KEYEVENTF_EXTENDEDKEY , 0);
        keybd_event(0x5A , 0 , KEYEVENTF_EXTENDEDKEY , 0);
        keybd_event(0x4C , 0 , KEYEVENTF_EXTENDEDKEY , 0);
        keybd_event(0x4F , 0 , KEYEVENTF_EXTENDEDKEY , 0);
        keybd_event(0x33 , 0 , KEYEVENTF_EXTENDEDKEY , 0);
        keybd_event(0x37 , 0 , KEYEVENTF_EXTENDEDKEY , 0);
        keybd_event(0x36 , 0 , KEYEVENTF_EXTENDEDKEY , 0);
        keybd_event(0x54 , 0 , KEYEVENTF_EXTENDEDKEY , 0);
    }
    return 0;

}
