# Heap Insert 

![Imgur](https://i.imgur.com/pmRNvjP.png)

## Data structures

- Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.
Basic Binary Tree

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

        Max Binary Heap

        typedef struct binary_tree_s heap_t;
    
# Task

## 0. New node mandatory

Write a function that creates a binary tree node:

- Prototype: binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
- parent is a pointer to the parent node of the node to create
- value is the value to put in the new node
- When created, a node does not have any children
- Your function must return a pointer to the new node, or NULL on failure

      alex@/tmp/binary_trees$ cat 0-main.c 
      #include <stdlib.h>
      #include "binary_trees.h"

      /**
       * main - Entry point
       *
       * Return: Always 0 (Success)
       */
      int main(void)
      {
          binary_tree_t *root;

          root = binary_tree_node(NULL, 98);

          root->left = binary_tree_node(root, 12);
          root->left->left = binary_tree_node(root->left, 6);
          root->left->right = binary_tree_node(root->left, 16);

          root->right = binary_tree_node(root, 402);
          root->right->left = binary_tree_node(root->right, 256);
          root->right->right = binary_tree_node(root->right, 512);

          binary_tree_print(root);
          return (0);
      }
      alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
      alex@/tmp/binary_trees$ ./0-node
             .-------(098)-------.
        .--(012)--.         .--(402)--.
      (006)     (016)     (256)     (512)
      alex@/tmp/binary_trees$
