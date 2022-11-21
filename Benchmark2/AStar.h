//
// Created by Zezhong Wang on 2022/11/21.
//

#ifndef BENCHMARK2_ASTAR_H
#define BENCHMARK2_ASTAR_H
#pragma once
#include "RandomMap.h"
#include "Node.h"

using namespace std;

class AStar {
public:
    RandomMap map_;
    vector<Node> open_set_;
    vector<Node> close_set_;
    vector<Node> start_node_;
    vector<Node> end_node_;

    AStar(RandomMap map)
    {
        map_ = map;
    }
    ~AStar();
    // The cost of the current node to the tarting node
    double BaseCost(Node n, Node start);
    // The heuristic function of the current node to the end node
    double HeuristicCost(Node n, Node end);
    // Total cost
    double TotalCost(Node n, Node start, Node end);
    // Determine if the node is valid, not inside the map or
    // the node where the obstacle is located is invalid
    bool IsValidNode(int x, int y);
    // Determine if the node is in some set or not
    bool IsInNodeList(Node n, vector<Node> node_list);
    // Determine if the node is in open_set
    bool IsInOpenList(Node n);
    // Determine if the node is in close_set
    bool IsInCLoseList(Node n);
    // Determine if the node is start node
    bool IsStartNode(Node n);
    // Determine if the node is end node
    bool IsEndNode(Node n);
    // A* function
    vector<Node> Run();
    // Process for each node: if it is a node that has not been processed,
    // calculate the priority to set the parent node and add it to the open_set
    void ProcessPoint(int x, int y, Node parent);
    // Find the node with the highest priority from the open_set and return its index
    int SelectPointInOpenList();
    // Construct the result path from the end point back along parent
    vector<Node> BuildPath(Node n);
};


#endif //BENCHMARK2_ASTAR_H
