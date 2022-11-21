//
// Created by Zezhong Wang on 2022/11/21.
//

#ifndef BENCHMARK2_RANDOMMAP_H
#define BENCHMARK2_RANDOMMAP_H
#pragma once

#include "Node.h"
#include <vector>

using namespace std;

class RandomMap {
public:
    int size_;
    int obstacle_;
    vector<Node> obstacle_set_;

    // Function
    RandomMap(int size = 30);
    vector<Node> GenerateObstacle();
    bool IsObstacle(int x, int y);
    void PrintMap();
    ~RandomMap();
};


#endif //BENCHMARK2_RANDOMMAP_H
