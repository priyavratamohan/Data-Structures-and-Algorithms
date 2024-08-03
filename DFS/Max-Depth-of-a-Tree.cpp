int dfs(Node<int>* root) {
    // Null node adds no depth
    if (root == nullptr) return 0;
    // num nodes in longest path of current subtree = max num nodes of its two subtrees + 1 current node
    return std::max(dfs(root->left), dfs(root->right)) + 1;
}

int tree_max_depth(Node<int>* root) {
    return root? dfs(root) - 1 : 0;
}
