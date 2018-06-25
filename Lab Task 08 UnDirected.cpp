#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *link;

};

struct Node *array[10];

struct Node *head[10];

struct Node *cur[10];

void create(int v)
{

    for (int i = 0; i < v; i++) {
        array[i] = new Node;
        head[i] = cur[i] = array[i];
        array[i]->data = i;
        array[i]->link = NULL;
    }

}

void add(int fr, int to)
{
    Node *np = new Node;
    np->data = to;
    np->link = NULL;

    if (head[fr]->link == NULL) {
        head[fr]->link = np;
        cur[fr] = np;

    } else {
        cur[fr]->link = np;
        cur[fr] = np;
    }


}

void print(int a)
{
    Node *p = NULL;
    p = head[a];

    for (; p != NULL; p = p->link)
    { cout << p->data; }

}



main()
{

    int a;
    cout << "enter the size of array";
    cin >> a;
    create(a);

    add(1, 4);
    add(1, 3);
    add(0, 3);
    add(0, 2);
    print(0);
    cout << "\n";
    print(1);


}
