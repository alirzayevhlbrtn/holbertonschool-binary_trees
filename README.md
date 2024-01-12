# Binary Trees

Binary tree is a tree data structure in which each node has at most two children, referred to as the left child and the right child.

## Data Structure
Following data structures and types used for implementation of binary trees.

```C
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

## Some examples

```C
#include "binary_trees.h"
int main(void)
{
// returns new child node pointer
binary_tree_insert_left(parent, 98)
// returns 1 if node has no child, 0 if node has 1 or 2 childs
binary_tree_is_leaf(node)

// Our header support a lot of functions
// Browse our repo for more information
}
```

## License

Uzeyir Alirzayev
Hamid Hamidbeyli
