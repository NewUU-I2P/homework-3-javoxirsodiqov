#include <string>
#include <sstream>
using namespace std;

string problemSolution4(const string &macAddress) {
    stringstream ss(macAddress.substr(0, 2));
    int 1octet;
    ss >> hex >> 1octet;

    if (1octet % 2 == 0) {
        return "Unicast";
    } else if (1octet % 2 != 0) {
        return "Multicast";
    } else if (macAddress == "FF:FF:FF:FF:FF:FF") {
        return "Broadcast";
    } else {
        return "Invalid address";
    }

}
