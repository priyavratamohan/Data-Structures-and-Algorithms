// Returns the height of the binary tree or -1 if it is not a balanced binary tree

int tree_height(Node<int>* tree) {

    if (tree == nullptr) return 0;

    int left_height = tree_height(tree->left);

    int right_height = tree_height(tree->right);

    if (left_height == -1 || right_height == -1) return -1;

    if (std::abs(left_height - right_height) > 1) return -1;

    return std::max(left_height, right_height) + 1;

}


bool is_balanced(Node<int>* tree) {

    return tree_height(tree) != -1;

}
