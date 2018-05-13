#ifndef HUFFMAN_NODE_H
#define HUFFMAN_NODE_H

struct Node{
    char character;
    unsigned int value;
    Node* left_child;
    Node* right_child;
};

struct less_than_value{
    inline bool operator()(const Node* node1, const Node* node2){
        return ((*node1).value < (*node2).value);
    }
};

#endif //HUFFMAN_NODE_H
