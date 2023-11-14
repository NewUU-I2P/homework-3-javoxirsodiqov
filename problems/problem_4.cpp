#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    std::string result;
    if (macAddress[0] == 'F' and macAddress[1] == 'F') {
        result = "Broadcast";
    }
    switch (macAddress[1]) {
        case '0':
            result = "Unicast";
        case '2':
            result = "Unicast";
        case '4':
            result = "Unicast";
        case '6':
            result = "Unicast";
        case '8':
            result = "Unicast";
        case 'A':
            result = "Unicast";
        case 'C':
            result = "Unicast";
        case 'E':
            result = "Unicast";
            break;
        case '1':
            result = "Multicast";
        case '3':
            result = "Multicast";
        case '5':
            result = "Multicast";
        case '7':
            result = "Multicast";
        case '9':
            result = "Multicast";
        case 'B':
            result = "Multicast";
        case 'D':
            result = "Multicast";
        case 'F':
            result = "Multicast";
    }

    return result;
}