//
// Created by Zezhong Wang on 2022/11/21.
//
#pragma once
#include "RandomMap.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

RandomMap::RandomMap(int size)
{
    size_ = size;
    obstacle_ = 3; // 障碍物的数量
    GenerateObstacle();
}

vector<Node> RandomMap::GenerateObstacle()
{
    srand((unsigned int)time(NULL));

    for(int j = 0; j < 3; j++)
    {
        int y = rand() % 31;
        cout << y << "*";
        int w = rand() % 5;
        cout << w << "-";
        for(int j = 0; j < w; j++)
        {
            for(int i = 11; i < 21; i++)
            {
                int x = i;
                obstacle_set_.push_back(Node(x, y));
            }
            y++;
        }
        cout << endl;
    }

    return obstacle_set_;
}

bool RandomMap::IsObstacle(int x, int y)
{
    for(auto n : obstacle_set_)
    {
        if(x == n.x_ && y == n.y_)
            return true;
    }
}

void RandomMap::PrintMap()
{
    for(int i = size_; i > 0; i--)
    {
        for(int j = 1; j < size_ + 1; j++)
        {
            if(IsObstacle(j, i))
            {
                cout << "X ";
            }
            else
            {
                cout << ". ";
            }
        }
        cout << endl;
    }
}

RandomMap::~RandomMap()
{

}