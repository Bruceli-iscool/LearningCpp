#include <string>

namespace log_line {
std::string message(std::string line) {
    if (line.find("[ERROR]")==0) {
        return line.substr(9);
    } else if (line.find("[INFO]")==0) {
        return line.substr(8);
    } else {
        return line.substr(11);
    }
}
    
std::string log_level(std::string line) {
    if (line.find("[ERROR]")==0) {
        return "ERROR";
    } else if (line.find("[INFO]")==0) {
        return "INFO";
    } else{
        return "WARNING"; 
    }
}

std::string reformat(std::string line) {
    return message(line) + " (" + log_level(line)+")";
}
}  // namespace log_line