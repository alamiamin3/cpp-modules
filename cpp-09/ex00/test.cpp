#include <iostream>
#include <map>

int main() {
    // Create a map with some key-value pairs
    std::map<int, std::string> myMap;
    myMap[1] = "One";
    myMap[4] = "Four";
    myMap[7] = "Seven";
    myMap[10] = "Ten";

    // Search for a specific key or the nearest lower key
    int keyToFind = 0;
    auto it = myMap.lower_bound(keyToFind);

    // Check if the key is found
    if (it != myMap.end() && it->first == keyToFind) {
        std::cout << "Key " << keyToFind << " found. Value: " << it->second << std::endl;
    } else {
        // Key not found, iterator points to the nearest (or equal) higher key
        if (it != myMap.begin()) {
            // --it; // Move iterator to the nearest lower key
            std::cout << "Nearest lower key: " << it->first << ". Value: " << it->second << std::endl;
        } else {
            std::cout << "No lower key found. First key is the smallest." << std::endl;
        }
    }

    return 0;
}

