#include <iostream>
#include <vector>
#include <algorithm>
#include "Tree.h"

Tree::Tree(std::vector<Node *> elements) {


    while (elements.size() > 1) {
        std::sort(elements.begin(), elements.end(), less_than_value());
        if (source.value == 0) {
            source = Node{NULL, (*elements.at(0)).value + (*elements.at(1)).value, elements.at(0), elements.at(1)};
            elements.erase(elements.begin());
            elements.erase(elements.begin());
        } else {
            if (source.value < elements.at(0)->value) {
                Node *leftNode = new Node{source.character, source.value, source.left_child, source.right_child};
                source = Node{NULL, (*elements.at(0)).value + source.value, leftNode, elements.at(0)};
                elements.erase(elements.begin());
            } else if (source.value < elements.at(1)->value) {
                Node *rightNode = new Node{source.character, source.value, source.left_child, source.right_child};
                source = Node{NULL, (*elements.at(0)).value + source.value, elements.at(0), rightNode};
                elements.erase(elements.begin());
            } else {
                Node *newNode = new Node{NULL, elements.at(0)->value + elements.at(1)->value, elements.at(0),
                                         elements.at(1)};
                elements.erase(elements.begin());
                elements.erase(elements.begin());
                elements.push_back(newNode);
            }
        }
    }
    if (source.value < elements.at(0)->value) {
        Node *leftNode = new Node{source.character, source.value, source.left_child, source.right_child};
        source = *new Node{NULL, source.value + elements.at(0)->value, leftNode, elements.at(0)};
    } else {
        Node *rightNode = new Node{source.character, source.value, source.left_child, source.right_child};
        source = *new Node{NULL, source.value + elements.at(0)->value, elements.at(0), rightNode,};
    }
    std::cout << (*elements.at(0)).character << std::endl;
}


void Tree::getNodeValues(const Node &source, std::string str) const {
    if (source.left_child->character == NULL) {
        getNodeValues(*source.left_child, str + "0");
    } else {
        std::cout << str + "0 : " << source.left_child->character << std::endl;
    }

    if (source.right_child->character == NULL) {
        getNodeValues(*source.right_child, str + "1");
    } else {
        std::cout << str + "1 : " << source.right_child->character << std::endl;
    }

}