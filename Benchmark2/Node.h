//
// Created by Zezhong Wang on 2022/11/21.
//

#ifndef BENCHMARK2_NODE_H
#define BENCHMARK2_NODE_H
#pragma once

class Node
{
public:
    int x_;
    int y_;
    double cost_;
    Node *parent_;

    Node(int x, int y)
    {
        x_ = x;
        y_ = y;
    }
    ~Node()
    {

    }
};

#endif //BENCHMARK2_NODE_H
