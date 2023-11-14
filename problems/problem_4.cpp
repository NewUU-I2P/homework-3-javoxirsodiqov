#include <string>
#include <sstream>
using namespace std;

string problemSolution4(const string &macAddress) {
    stringstream ss(macAddress);
    int 1octet;
    char separator;
    ss >> hex >> 1octet >> separator;

    if (1octet == 0xFF) {
        string remOctets;
        getline(ss, remOctets, ':');
        if (remOctets.find_first_not_of('F') == string::npos) {
            return "Broadcast";
        }
    }

    if (1octet % 2 == 0) {
        return "Unicast";
    } else {
        return "Multicast";
    }

}
