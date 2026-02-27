#include <iostream>

using namespace std;

int main() {
    int second;
    cout << "Enter seconds: ";
    cin >> second;

    int secondBackup = second;
    int hour = second / 3600;
    second = second % 3600;
    int minute = second / 60;
    second = second % 60;

    cout << secondBackup << " seconds is " << hour << " hours, " << minute << " minutes, and " << second << " seconds.";

    return 0;

}
