// 재귀함수

#include <iostream>

using namespace std;

// 함수가 계속 호출되면 StackOverflow가 발생할 수 있기 때문에 탈출 조건을 만들어야 함
void count(int n)
{
    if (n < 0)
        return;
    cout << n << endl;
    count(n - 1);
}

struct Node
{
    int value;
    Node *left = nullptr;
    Node *right = nullptr;
};
void visit(Node *root)
{
    if (root == nullptr)
        return;
    // 전위 순회
    visit(root->left);
    // 중위 순회
    visit(root->right);
    // 후위 순회
    cout << root->value << endl;
}
int main()
{
    // count(10);
    Node node0{0};
    Node node1{1};
    Node node2{2};
    Node node3{3};
    Node node4{4};
    Node node5{5};
    Node node6{6};
    Node node7{7};
    Node node8{8};
    Node node9{9};

    node0.left = &node1;
    node1.left = &node2;
    node1.right = &node3;
    node3.right = &node4;
    node0.right = &node5;
    node5.left = &node6;
    node5.right = &node8;
    node6.right = &node7;
    node8.left = &node9;
    //            n0
    //      n1            n5
    // n2     n3     n6          n8
    //          n4      n7  n9

    visit(&node0);
}