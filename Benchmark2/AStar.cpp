//
// Created by Zezhong Wang on 2022/11/21.
//

#include "AStar.h"
#include <math.h>
#include <iostream>

using namespace std;

double AStar::BaseCost(Node n, Node start)
{
    int x_dis = abs(n.x_ - start.x_);
    int y_dis = abs(n.y_ - start.y_);
    if(x_dis < y_dis)
        return y_dis;
    else
        return x_dis;
    // return x_dis + y_dis + (sqrt(2) - 2) * min(x_dis, y_dis);
}

double AStar::HeuristicCost(Node n, Node end)
{
    int x_dis = abs(n.x_ - end.x_);
    int y_dis = abs(n.y_ - end.y_);
    if(x_dis < y_dis)
        return y_dis;
    else
        return x_dis;
}

double AStar::TotalCost(Node n, Node start, Node end)
{
    return BaseCost(n, start) + HeuristicCost(n, end);
}

bool AStar::IsValidNode(int x, int y)
{
    if(x < 0 || y < 0 || x > map_.size_ || y > map_.size_)
        return false;
    return !map_.IsObstacle(x, y);
}

bool AStar::IsInNodeList(Node n, vector<Node> node_list)
{
    for(auto node : node_list)
    {
        if(n.x_ == node.x_ && n.y_ == node.y_)
            return true;
    }
    return false;
}

bool AStar::IsInOpenList(Node n)
{
    return IsInNodeList(n, open_set_);
}

bool AStar::IsInCLoseList(Node n)
{
    return IsInNodeList(n, close_set_);
}

bool AStar::IsStartNode(Node n)
{

}

AStar::~AStar()
{

}