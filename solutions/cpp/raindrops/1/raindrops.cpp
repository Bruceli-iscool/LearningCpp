#include "raindrops.h"

namespace raindrops {

std::string convert(int n) {
    std::string solution = "";
    if (n % 3 == 0) {
        solution += "Pling";
    }
    if (n % 5 == 0) {
        solution += "Plang";
    }
    if (n % 7 == 0) {
        solution += "Plong";
    }

    if (solution.empty()) {
        return std::to_string(n);
    }
    return solution;
}

}  // namespace raindrops
