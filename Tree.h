#ifndef HUFFMAN_TREE_H
#define HUFFMAN_TREE_H

#include "node.h"
#include <iostream>
#include <vector>

class Tree{
public:
    Node source;

    Tree(std::vector<Node *>);

    void getNodeValues(const Node&, std::string) const;
};
#endif //HUFFMAN_TREE_H
