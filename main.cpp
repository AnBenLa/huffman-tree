#include <iostream>
#include "node.h"
#include "Tree.h"

int main() {

    Node a{'a', 14, nullptr, nullptr};
    Node b{'b', 20, nullptr, nullptr};
    Node c{'c', 7, nullptr, nullptr};
    Node d{'d', 10, nullptr, nullptr};
    Node e{'e', 23, nullptr, nullptr};
    Node f{'f', 5, nullptr, nullptr};
    Node g{'g', 16, nullptr, nullptr};
    Node h{'h', 3, nullptr, nullptr};
    std::vector<Node *> new_elements{&a, &b, &c, &d, &e, &f, &g, &h};

    // initialises a new tree with huffman structure
    Tree huff_tree{new_elements};
    //prints out the new binary values for each char
    huff_tree.getNodeValues(huff_tree.source, "");
	std::cin.get();
    return 0;
}