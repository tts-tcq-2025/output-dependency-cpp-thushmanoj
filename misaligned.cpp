#include <iostream>
#include <vector>
#include <string>
#include <cassert>

struct ColorMap {
    int number;
    std::string majorColor;
    std::string minorColor;
};

std::vector<ColorMap> generateColorMap()
{
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

    std::vector<ColorMap> colorMapGen;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            colorMapGen.push_back({i * 5 + j, majorColor[i], minorColor[j]});
        }
    }
    return colorMapGen;
}

void printColorMap(const std::vector<ColorMap>& genColorMap) {
    for (const auto& pair : genColorMap) {
        std::cout << pair.number << " | "
                  << pair.majorColor << " | "
                  << pair.minorColor << std::endl;
    }
}

void testPrintColorMap() {
    std::cout << "\nPrint color map test\n"; 
    auto genColorMap = generateColorMap();
    printColorMap(genColorMap);
    //int result = printColorMap();
    assert(genColorMap.size() == 25);
    //Test for first pair
    assert(genColorMap[0].number == 0);
    assert(genColorMap[0].majorColor == "White");
    assert(genColorMap[0].minorColor == "Blue");
    std::cout << "All is well (maybe!)\n";

}
