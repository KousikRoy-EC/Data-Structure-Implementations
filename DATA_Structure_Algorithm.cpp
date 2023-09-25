#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

//INSERTING ELEMENT IN AN ARRAY
/*
class ARRAY
{

public:
    void insert(int arr[], int y, int x, int len)
    {
        for (int i = len - 1; i >= y; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[y] = x;
    }
    void show(int arr[], int length)
    {
        for (int i = 0; i < length + 1; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{

    int n, index, element, aelement;
    cout << "ENTER SIZE OF ARRAY : ";
    cin >> n;

    //new arr[n];
    int arr[n] = {23, 56, 87, 93, 37}, size;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "ENTER SIZE OF ARRAY : ";
    cin >> size;
    cout << "ENTER THE INDEX IN WHICH YOU WANT TO INSERT AN ELEMENT : ";
    cin >> index;
    cout << "ENTER THE ELEMENT TO INSERT : ";
    cin >> element;

    ARRAY A1;
    A1.insert(arr, index, element, size);
    A1.show(arr, size);
    size++;
    

    return 0;
}
*/
//DELETION ELEMENT IN AN ARRAY
/*
class ARRAY
{

public:
    void DELETE(int arr[], int y, int len)
    {
        for (int i = y; i <= len - 2; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
    void show(int arr[], int length)
    {
        for (int i = 0; i < length - 1; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{

    int n, index, element, aelement;
    cout << "ENTER SIZE OF ARRAY : ";
    cin >> n;

    //new arr[n];
    int arr[n] = {23, 56, 87, 93, 37}, size;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "ENTER SIZE OF ARRAY : ";
    cin >> size;
    cout << "ENTER THE INDEX IN WHICH YOU WANT TO DELETE AN ELEMENT : ";
    cin >> index;

    ARRAY A1;
    A1.DELETE(arr, index, size);
    A1.show(arr, size);
    size++;

    return 0;
}
*/

//LINEAR AND BINEARY SEARCH IN AN ARRAY
/*
class Array
{
private:
    int index;

public:
    void linearsearch(int arr[], int x, int y);
};

void Array::linearsearch(int arr[], int x, int y)
{

    for (int i = 0; i < x; i++)
    {
        if (arr[i] == y)
        {
            cout << "\nTHE ELEMENT IS ON INDEX " << i;
        }
    }
}

int main()
{

    int size, element;

    int arr[100] = {23, 67, 9, 74, 38, 58, 27, 59, 19, 84};
    size = 10;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    element = 84;
    Array A1;
    A1.linearsearch(arr, size, element);
    return 0;
}
*/
//BINARY SEARCHING IN AN ARRAY;
/*
class Array
{
private:
    int index, high, low, mid;

public:
    void Binarysearch(int arr[], int x, int y);
};

void Array::Binarysearch(int arr[], int x, int y)
{
     high = x-1;
        low = 0;
    while (low <= high)
    {

       
        mid = (high + low) / 2;
        if (arr[mid] == y)
        {
            cout << "\nTHE element is on index : " << mid;
            break;
        }
        else if (arr[mid] < y)
        {

            low = mid + 1;
        }

        else if (arr[mid] > y)
        {

            high = mid - 1;
        }
    }
}

int main()
{

    int size, element;

    int arr[100] = {23, 67, 9, 74, 38, 58, 27, 59, 19, 84};

    size = 10;
    sort(arr, &arr[10]);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    element = 84;
    Array A1;
    A1.Binarysearch(arr, size, element);
    return 0;
}
*/
//LINKED LIST CREATION AND TRAVERSAL
/*
class Node
{
public:
    int data;
    Node *next;
};

void LinkedlistTraversal(Node *ptr)
{
    while (ptr != NULL)
    {

        cout << "ELEMENT : " << ptr->data << endl;
        ptr = ptr->next;
    }
};

int main()
{

    Node *head = new (Node);
    Node *second = new (Node);
    Node *third = new (Node);
    Node *fourth = new (Node);
    Node *five = new (Node);
    head->data = 100;
    second->data = 200;
    third->data = 300;
    fourth->data = 400;
    five->data = 500;
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = five;
    five->next = NULL;
    LinkedlistTraversal(head);
}
*/
//INSERTION IN AN LINKED LIST

//Case 1: Insert at the beginning
/*
class Node
{
public:
    char letter;
    Node *next;
};

void traversal(Node *ptr)
{
    while (ptr != NULL)
    {

        cout << "ELEMENT : " << ptr->letter << endl;
        ptr = ptr->next;
    }
};
void traversal2(Node *ptr)
{
    while (ptr != NULL)
    {

        cout << "ELEMENT : " << ptr->letter << endl;
        ptr = ptr->next;
    }
};

int main()
{
    Node *two;
    two = new (Node);
    Node *three;
    three = new (Node);
    Node *four;
    four = new (Node);
    two->letter = 'M';
    three->letter = 'A';
    four->letter = 'N';
    two->next = three;
    three->next = four;
    four->next = NULL;

    traversal(two);
    cout << "AFTER INSERTION OF A NEW ELEMENT IN A LINKED LIST " << endl;
    Node *one = new (Node);
    one->letter = 'A';
    one->next = two;
    two = one;

    traversal2(one);
}
*/
//Case 2: Insert in between

/*
class Node
{
public:
    int NUM;
    Node *agala;
   
};
 void traversal(Node *ptr1)
    {

        while (ptr1 != NULL)
        {
            cout << "ELEMENTS : " << ptr1->NUM << endl;
            ptr1 = ptr1->agala;
        }
    }
    void aftertraversal(Node *ptr2)
    {

        while (ptr2 != NULL)
        {
            cout << "ELEMENTS : " << ptr2->NUM << endl;
            ptr2 = ptr2->agala;
        }
    }
int main()
{
    Node *first;
    first = new (Node);
    first->NUM = 101;
    Node *second;
    second = new (Node);
    second->NUM = 201;
    Node *four;
    four = new (Node);
    four->NUM = 401;
    first->agala = second;
    second->agala = four;
    four->agala = NULL;
    traversal(first);
    Node *third = new (Node);
    third->NUM=301;
    second->agala = third;
    third->agala = four;
    cout << "AFTER INSERTION OF A NEW ELEMENT IN A LINKED LIST " << endl;
    aftertraversal(first);
}
*/
//Case 3: Insert at the end
/*
class Node
{
public:
    char letter;
    Node *next;
};

void traversal(Node *ptr)
{
    while (ptr != NULL)
    {

        cout << "ELEMENT : " << ptr->letter << endl;
        ptr = ptr->next;
    }
};
void traversal2(Node *ptr)
{
    while (ptr != NULL)
    {

        cout << "ELEMENT : " << ptr->letter << endl;
        ptr = ptr->next;
    }
};

int main()
{
    Node *two;
    two = new (Node);
    Node *three;
    three = new (Node);
    Node *four;
    four = new (Node);
    two->letter = 'A';
    three->letter = 'M';
    four->letter = 'N';
    two->next = three;
    three->next = four;
    four->next = NULL;

    traversal(two);
    cout << "AFTER INSERTION OF A NEW ELEMENT IN A LINKED LIST " << endl;
    Node *one = new (Node);
    one->letter = 'R';
    one->next = NULL;
    four->next = one;

    traversal2(two);
}
*/
//Case 4: Insert after the node
/*
class Node
{
public:
    char letter;
    Node *next;
};

void traversal(Node *ptr)
{
    while (ptr != NULL)
    {

        cout << "ELEMENT : " << ptr->letter << endl;
        ptr = ptr->next;
    }
};
void traversal2(Node *ptr)
{
    while (ptr != NULL)
    {

        cout << "ELEMENT : " << ptr->letter << endl;
        ptr = ptr->next;
    }
};

int main()
{
    Node *two;
    two = new (Node);
    Node *three;
    three = new (Node);
    Node *four;
    four = new (Node);
    two->letter = 'A';
    three->letter = 'M';
    four->letter = 'N';
    two->next = three;
    three->next = four;
    four->next = NULL;

    traversal(two);
    cout << "AFTER INSERTION OF A NEW ELEMENT IN A LINKED LIST " << endl;
    Node *one = new (Node);
    one->letter='O';
    four->next=one;
    one->next=NULL;
    traversal2(two);
    }
    */

// DELETION IN A LINKED LIST
/*
class Node
{
public:
    float var;
    Node *next;
};
void traversal1(Node *ptr)
{
    while (ptr != NULL)
    {

        cout << "ELEMENT : " << ptr->var << endl;
        ptr = ptr->next;
    }
};
*/
//DELETING FIRST NODE
/*
void traversal2(Node *ptr)
{

    Node *ptr2;

    ptr2 = ptr;
    ptr = ptr->next;
    free(ptr2);

    while (ptr != NULL)
    {

        cout << "ELEMENT : " << ptr->var << endl;
        ptr = ptr->next;
    }
}
*/
//DELETING MIDDLE NODE
/*
void traversal3(Node *ptr, int index)
{
    Node *ptr3 = ptr;
    ;
    Node *ptr2;
    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->next;
        i++;
    }
    ptr2 = ptr->next;
    ptr->next = ptr2->next;
    free(ptr2);
    ptr = ptr3;
    while (ptr != NULL)
    {

        cout << "ELEMENT : " << ptr->var << endl;
        ptr = ptr->next;
    }
}
*/
//DELTION OF LAST NODE
/*
Node *deletelast(Node *ptr)
{
    Node *q = ptr;
    Node *p;
    p = ptr->next;
    while (p->next != NULL)
    {
        ptr = ptr->next;
        p = p->next;
    }
    ptr->next = NULL;
    free(p);
    return q;
}
*/
/*
int main()
{

    Node *FIRST = new (Node);
    FIRST->var = 1.99;

    Node *SECOND = new (Node);
    SECOND->var = 2.99;
    Node *THIRD = new (Node);
    THIRD->var = 3.99;
    Node *FOURTH = new (Node);
    FOURTH->var = 4.99;
    Node *FIVE = new (Node);
    FIVE->var = 5.99;
    FIRST->next = SECOND;
    SECOND->next = THIRD;
    THIRD->next = FOURTH;
    FOURTH->next = FIVE;
    FIVE->next = NULL;
    cout << "BEFORE DELETION : \n\n"
         << endl;

    traversal1(FIRST);

    //  cout << "AFTER DELETION OF FIRST NODE : \n\n"
    //       << endl;
    //  traversal2(FIRST);
    //cout << "AFTER DELETION OF MID NODE : \n\n"
    //      << endl;
    // traversal3(FIRST, 3);
    cout << "AFTER DELETION OF Last NODE : \n\n"
         << endl;
    FIRST = deletelast(FIRST);
    traversal1(FIRST);
    return 0;
}
*/

//INSERTION IN A CIRCULAR LINKED LIST
/*
class Node
{
public:
    Node *next;
    int data;
};
void TRAVERSAL(Node *ptr)
{
    Node *p = ptr;

    while (p->next != ptr)
    {

        cout << "ELEMENT : " << p->data << endl;
        p = p->next;
    }
    cout << "ELEMENT : " << p->data << endl;
}
//INSETION IN BEGINING
Node *INSERTATBEGINING(Node *ptr, int dat)
{
    Node *p = ptr->next;
    Node *ZERO = new (Node);
    ZERO->data = dat;
    while (p->next != ptr)
    {
        p = p->next;
    }
    p->next = ZERO;
    ZERO->next = ptr;
    ptr = ZERO;
    return ptr;
}
int main()
{

    Node *first;
    first = new (Node);
    first->data = 201;
    Node *second;
    second = new (Node);
    second->data = 301;
    Node *third;
    third = new (Node);
    third->data = 401;
    Node *four;
    four = new (Node);
    four->data = 501;
    Node *five;
    five = new (Node);
    five->data = 601;
    first->next = second;
    second->next = third;
    third->next = four;
    four->next = five;
    five->next = first;
    cout << "linked list before insertion " << endl;
    TRAVERSAL(first);
    cout << "linked list AFTER insertion " << endl;

    first = INSERTATBEGINING(first, 101);

    TRAVERSAL(first);
}
*/
//INSERION IN A CIRCULAR LINKED LIST AT ANY INDEX
/*
class Node
{
public:
    Node *next;
    int data;
};
void TRAVERSAL(Node *ptr)
{
    Node *p = ptr;
    while (p->next != ptr)
    {
        cout << "ELEMENT : " << p->data << endl;
        p = p->next;
    }
    cout << "ELEMENT : " << p->data << endl;
}
Node *INSERTIONATINDEX(Node *ptr, int index)
{

    Node *p = ptr;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    Node *naya = new (Node);
    naya->data = 120;
    Node *q = p->next;
    p->next = naya;
    naya->next = q;

    return ptr;
}
int main()
{

    Node *first;
    first = new (Node);
    first->data = 201;
    Node *second;
    second = new (Node);
    second->data = 301;
    Node *third;
    third = new (Node);
    third->data = 401;
    Node *four;
    four = new (Node);
    four->data = 501;
    Node *five;
    five = new (Node);
    five->data = 601;
    first->next = second;
    second->next = third;
    third->next = four;
    four->next = five;
    five->next = first;
    cout << "CIRCULAR LINKED LIST BEFORE INSERTION " << endl;
    TRAVERSAL(first);
    cout << "CIRCULAR LINKED LIST AFTER INSERTION " << endl;
    first = INSERTIONATINDEX(first, 3);
     first = INSERTIONATINDEX(first, 4);
    TRAVERSAL(first);
}
*/
//DOUBLY LINKED LIST
/*
class Node
{
public:
    Node *next;
    Node *prev;
    int data;
};
void TRAVERSAL(Node *pointer)
{
    Node *p = pointer;

    while (p->next != NULL)
    {
        cout << "ELEMENT : " << p->data << endl;
        p = p->next;
    }

    cout << "ELEMENT : " << p->data << endl;
}
void REVERSETRAVERSAL(Node *ptr)
{
    Node *p = ptr;
    while (p->next != NULL)
    {
        p = p->next;
    }

    do
    {
        cout << "ELEMENT : " << p->data << endl;
        p = p->prev;
    } while (p->prev != NULL);
    cout << "ELEMENT : " << p->data << endl;
}
int main()
{

    Node *first;
    first = new (Node);
    first->data = 101;
    Node *second;
    second = new (Node);
    second->data = 201;
    Node *third;
    third = new (Node);
    third->data = 301;
    Node *four;
    four = new (Node);
    four->data = 401;
    Node *five;
    five = new (Node);
    five->data = 501;
    first->next = second;
    second->next = third;
    third->next = four;
    four->next = five;
    five->next = NULL;
    five->prev = four;
    four->prev = third;
    third->prev = second;
    second->prev = first;
    first->prev = NULL;
    cout << "TRAVERSAL IN LINEAR ORDER " << endl;
    TRAVERSAL(first);
    cout << "TRAVERSAL IN REVERSE ORDER " << endl;
    REVERSETRAVERSAL(first);
    return 0;
}
*/
// STACK
/*
class STACK
{
private:
   
    int *arr;
    int n = 40;
    int top;

public:
    STACK()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "THE STACK IS OVERFLOW " << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = x;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "THE STACK IS EMPTY " << endl;
        }
        else
        {
            top--;
        }
    }
    void Top()
    {
        if (top == -1)
        {
            cout << "NO ELEMENT IN STACK " << endl;
        }
        else
        {
            cout << arr[top] << endl;
        }
    }
};
int main()
{
    STACK s1;
    s1.push(3);
    s1.push(5);
    s1.push(30);
    s1.push(98);
    s1.push(87);
    s1.push(56);
    s1.Top();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.Top();

    return 0;
}
*/
//REVERSE A SENTENCE USING STACK
/*
#include <stack>

void stringreverse(string s)
{
    stack<string> str;

    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i]!=' ' && i < s.length())
        {
            word = word + s[i];
            i++;
        }

        str.push(word);
    }
    while (!str.empty())
    {
        cout << str.top() << " ";
        str.pop();
    }
}

int main()
{

    string st = "MY NAME IS KHAN";
    stringreverse(st);

    return 0;
}
*/
// OPERATIONS IN STACK PEEK,TOPELEMENT,BOTTOM ELEMENT
/*
class STACK
{
private:
    int m = 50;
    int *arr = new int[m];
    int top = -1;

public:
    void isEmpty()
    {
        if (top == -1)
        {
            cout << "THE STACK IS EMPTY " << endl;
        }
    }
    void isFull()
    {
        if (top == m - 1)
        {
            cout << "THE STACK IS OVERFLOW " << endl;
        }
    }
    void push(int x)
    {

        if (top == m - 1)
        {
            cout << "THE STACK IS OVERFLOW " << endl;
        }
        else
        {
            top++;
            arr[top] = x;
        }
    }
    void pop()
    {
        if (top == m - 1)
        {
            cout << "THE STACK IS OVERFLOW " << endl;
        }
        else
        {
            int popelement = arr[top];
            top--;
            cout << "THE ELEMENT THAT IS POPPED IS :" << popelement << endl;
        }
    }
    void peek(int index)
    {

        if (top - index + 1 < 0)
        {
            cout << "INVALID ELEMENT NOT EXIST" << endl;
        }
        else
        {
            cout << arr[top - index + 1] << endl;
        }
    }
    void topelelment()
    {
        cout << "THE TOP ELEMENT IS : " << arr[top] << endl;
    }
    void bottomelement()
    {
        cout << "THE BOTOOM ELEMENT IS : " << arr[0] << endl;
    }
};

int main()
{
    STACK S1;

    S1.isEmpty();
    S1.push(1);
    S1.push(2);
    S1.push(3);
    S1.push(4);
    S1.push(5);
    S1.push(6);
    S1.push(7);
    S1.push(8);
    S1.push(9);
    S1.push(10);
    S1.push(11);
    S1.topelelment();
    S1.bottomelement();
    S1.isFull();
    S1.pop();
    S1.pop();
    S1.pop();
    S1.pop();
    S1.peek(4);
    return 0;
}
*/

// IMPLEMENTING STACK USING LINKED LIST
/*
class NODE
{
public:
    int data;
    NODE *next;
};
NODE *TOP = NULL;
int isEmpty(NODE *PTR)
{
    if (PTR == NULL)
    {
        cout << "STACK IS EMPTY" << endl;
    }
    return 0;
}
int isFull(NODE *PT)
{
    NODE *is = new (NODE);
    if (is == NULL)
    {
        cout << "STACK OVERFLOW " << endl;
    }
    return 0;
}

void pop(NODE *PR)
{
    if (isEmpty(PR))
    {
        cout << "EMPTY STACK" << endl;
    }
    NODE *n;
    n = PR;
    int y = n->data;
    TOP = PR->next;
    cout << "\nTHE ELEMENT POPPED IS :" << y << endl;
    free(n);
}
NODE *push(NODE *PTR, int x)
{
    if (isFull(PTR))
    {
        cout << "stack full" << endl;
    }
    else
    {
        NODE *ARR = new (NODE);

        ARR->data = x;
        ARR->next = PTR;
        PTR = ARR;
        return PTR;
    }
}
void traversal(NODE *ptr)
{
    while (ptr != NULL)
    {

        cout << "ELEMENT : " << ptr->data << endl;
        ptr = ptr->next;
    }
}
int main()
{

    TOP = push(TOP, 52);
    TOP = push(TOP, 50);
    TOP = push(TOP, 56);
    TOP = push(TOP, 43);
    pop(TOP);
    traversal(TOP);
    return 0;
}
*/
//PARANTHESIS MATCHING PROBLEM
/*
#include <stack>
int paranthesismatching(string s)
{
    stack<char> st;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if(st.empty())
            {
                return 0;
            }
            st.pop();
        }
    }
    if(st.empty())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    string PARANTHESIS = "3*(78+89)*(849+3";
    int ans = paranthesismatching(PARANTHESIS);
    if (ans == 1)
    {
        cout << "PARANTHESIS IS MATCHING";
    }
    else
    {
        cout << "PARANTHESIS IS NOT MATCHING";
    }
    return 0;
}
*/
// INFIX POSTFIX PREFIX
/*
#include <stack>

int presedence(char x)
{

    if (x == '*' || x == '/')
    {
        return 2;
    }

    else if (x == '+' || x == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

string infixtoprefix(string s)

{
    stack<char> st;
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            res += s[i];
        }

        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while (!st.empty() && presedence(st.top()) > presedence(s[i]))
            {
                res = res + st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        res = res + st.top();
        st.pop();
    }

    return res;
}

int main()
{
    cout << infixtoprefix("(a-b/c)*(a/k-l)") << endl;
    return 0;
}
*/
//QUEUE DATA STRUCTURE
//QUEUE USING ARRAY
/*
class QUEUE
{
private:
    int *arr;
    int back;
    int front;
    int n = 20;

public:
    QUEUE()
    {
        arr = new int[n];
        back = front = -1;
    }
    void isEMPTY()
    {
        if (front == -1 || front > back)
        {
            cout << "THE QUEUE IS EMPTY " << endl;
        }
    }
    void ENQUEUE(int x)
    {
        if (back == n - 1)
        {
            cout << "THE QUEUE IS FULL " << endl;
        }
        else
        {
            back++;
            arr[back] = x;
            cout << "ELEMENTS : " << arr[back] << endl;
        }
        if (front == -1)
        {
            front++;
        }
    }
    void DEQUEUE()
    {
        if (front == -1 || front > back)
        {
            cout << "THE QUEUE IS EMPTY " << endl;
        }
        else
        {
            cout << "THE ELEMENT REMOVED IS : " << arr[front] << endl;
            front++;
        }
    }
    void display()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "ELEMENTS : " << arr[i] << endl;
        }
    }
};
int main()
{
    QUEUE Q1;
    Q1.isEMPTY();
    Q1.ENQUEUE(1);
    Q1.ENQUEUE(2);
    Q1.ENQUEUE(3);
    Q1.ENQUEUE(4);
    void display();
    Q1.DEQUEUE();
    Q1.DEQUEUE();
    Q1.DEQUEUE();
    Q1.isEMPTY();
    Q1.DEQUEUE();
    Q1.isEMPTY();
    return 1;
}
*/
//CIRCULAR QUEUES USING ARRAY
/*
class circularqueue
{
private:
    int *arr;
    int f = 0;
    int b = 0;
    int size = 9;

public:
circularqueue(){
    arr=new int[size];
}
    void empty()
    {
        if (f==b)
        {
            cout << "THE QUEUE IS EMPTY" << endl;
        }
    }
    int full()
    {
        if ((b+1)%size==f)
        {
            cout << "THE QUEUE IS FULL" << endl;
            return -1;
        }
        return 1;
    }
    void enqueue(int x)
    {
        if ((b+1)%size==f)
        {
            cout << "THE QUEUE IS FULL" << endl;
        
        }
        else
        {

            b = ((b + 1) % size);
            arr[b] = x;
            cout << "ELEMENT ENQUEUED : " << arr[b] << endl;
        }
    }

    void dequeue()
    {
        if (f == b)
        {
            cout << "THE QUEUE IS EMPTY" << endl;
        }
        else
        {
            cout << "ELEMENT DEQUED : " << arr[(f+1)%size]<<endl;
            f = ((f + 1) % size);
        }
    }
};
int main(){


circularqueue q1;
q1.empty();
q1.full();
q1.enqueue(45);
q1.enqueue(90);
q1.enqueue(23);
q1.enqueue(56);
q1.enqueue(78);
q1.enqueue(65);
q1.enqueue(41);
q1.enqueue(10);
q1.dequeue();
q1.dequeue();
q1.dequeue();
q1.dequeue();
q1.dequeue();
q1.dequeue();
q1.dequeue();
q1.dequeue();
q1.empty();
q1.full();

    return 0;
}
*/
//QUEUE USING LINKED LIST
/*
class NODE
{
public:
    NODE *next;
    int data;
};
class QUEUEL
{
private:
    NODE *front;
    NODE *back;

public:
    QUEUEL()
    {
        front = NULL;
        back = NULL;
    }
    int isEmpty()
    {
        if (front == NULL)
        {
            cout << "THE QUEUE IS EMPTY" << endl;
            return -1;
        }
        return 1;
    }
    int isFull()
    {
        NODE *naya = new (NODE);
        if (naya == NULL)
        {
            cout << "THE QUEUE IS FULL " << endl;
            return 1;
        }
        return 1;
    }
    void enque(int x)
    {

        NODE *element = new (NODE);
        if (isFull())
        {
            element->data = x;
            element->next = NULL;
            if (front == NULL)
            {
                front = element;
                back = element;
            }
            else
            {
                back->next = element;
                back = element;
            }
        }
        else
        {
            cout << "THE QUEUE IS FULL " << endl;
        }
    }
    void dequeue()
    {
        if (isEmpty())
        {
            NODE *ptr;
            ptr = front;
            front = front->next;
            cout << "ELEMENT DEQUEUED IS :" << ptr->data << endl;
            free(ptr);
        }
    }
    void traversal()
    {
        while (front->next != NULL)
        {
            cout << "ELEMENTS : " << front->data << endl;
            front = front->next;
        }
        cout << "ELEMENTS : " << front->data << endl;
    }
};
int main()
{
    QUEUEL q1;
    q1.isEmpty();
    q1.enque(21);
    q1.enque(22);
    q1.enque(23);
    q1.enque(24);
    
    q1.dequeue();
    q1.dequeue();
    q1.traversal();

    return 0;
}
*/
//queue using stack
/*
#include <stack>
class squeue
{

    stack<int> st1;
    stack<int> st2;

public:
    void enqueue(int x)
    {

        st1.push(x);
        cout << "ELEMENT INSERTED IS : " << st1.top() << endl;
    }
    void dequeue()
    {
        if (st1.empty() and st2.empty())
        {
            cout << "THE QUEUE IS EMPTY" << endl;
            
        }
        else
        {
            while (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        cout << "ELEMENT DEQUEUD IS : " << st2.top() << endl;
        st2.pop();
    }
    bool empty()
    {
        if (st1.empty() and st2.empty())
        {
            return true;
        }
        return false;
    }
};
int main()
{
    squeue s1;
    s1.enqueue(31);
    s1.enqueue(32);
    s1.enqueue(33);
    s1.enqueue(34);
    s1.dequeue();
    s1.dequeue();
    s1.dequeue();
    s1.dequeue();
    s1.dequeue();


    return 0;
}
*/
//STACK USING QUEUES(METHOD -1) making push complex
/*
#include <queue>
class squeue
{
private:
    queue<int> q1;
    queue<int> q2;
    int size;

public:
    void push(int val)
    {
        q2.push(val);
        cout << "THE ELEMENT PUSHED IS : " << q2.front() << endl;

        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    void pop()
    {
        if (q2.empty() and q1.empty())
        {
            cout << "THE STACK IS EMPTY" << endl;
            exit(0);
        }

        cout << "THE ELEMENT POPPED OUT IS : " << q1.front() << endl;
        q1.pop();
    }
};
int main()
{
    squeue s1;
    s1.push(23);
    s1.push(24);
    s1.push(25);
    s1.push(26);
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    return 0;
}
*/
//STACK USING QUEUES (METHOD 2)
/*
#include <queue>
class squeue
{
private:
    queue<int> q1;
    queue<int> q2;
    int size = 0;

public:
    push(int val)
    {

        q1.push(val);
        cout << "THE ELEMENT PUSHED IS : " << val << endl;
        size++;
    }
    pop()
    {
        if (q1.empty())
        {
            cout << "EMPTY STACK" << endl;
            exit(0);
        }

        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }

        cout << "THE ELEMENT POPED OUT IS : " << q1.front() << endl;
        q1.pop();
        size--;

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    void top()
    {
        if (q1.empty())
        {
            cout << "EMPTY STACK" << endl;
        }

        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q1.pop();
        cout << "TOP ELEMENT IS : " << ans << endl;
        q2.push(ans);

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
};
int main()
{
    squeue s1;
    s1.push(90);
    s1.push(91);
    s1.push(93);
    s1.push(94);
    s1.pop();
  s1.top();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    return 0;
}
*/
//BUBBLE SORT ALGORITH TIME COMPLEXITY (N2)
/*
int main()
{
    int n;
    cout << "ENTER THE SIZE OF AN ARRAY : ";
    cin >> n;
    int arr[n];
    cout << "ENTER THE ARRAY ELEMENTS : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nARRAY BEFORE BUBBLE SORT : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int count = 1;
    while (count < n)
    {
        int issorted = 1;
        for (int i = 0; i < n - count; i++)
        {

            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                issorted = 0;
            }
        }
        if (issorted)
        {
            return 0;
        }
        count++;
    }

    cout << "\nARRAY AFTER BUBBLE SORT : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
*/
//INSERION SORT (o(n))
/*
int main()
{
    int n;
    cout << "ENTER THE SIZE OF AN ARRAY : ";
    cin >> n;
    int arr[n];
    cout << "ENTER THE ARRAY ELEMENTS : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nARRAY BEFORE INSERTION SORT : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    cout << "\nARRAY AFTER INSERTION SORT : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
*/
//selection sort algo time==O(n2) not stable nor adaptive
/*
int main()
{
    int n;
    cout << "ENTER THE SIZE OF AN ARRAY : ";
    cin >> n;
    int arr[n];
    cout << "ENTER THE ARRAY ELEMENTS : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nARRAY BEFORE SELECTION SORT : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "\nARRAY AFTER SELECTION SORT : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
*/
//QUICK SORT BEST TIME COMPLEXITY IS 0(NLOGN) WORST TIME COMPLEXITY IS O(n2) it is not adaptive nor stable

/*
int partitio(int arr[],int lo, int hi)
{

    int i, j;
    i = lo;
    j = hi;
    int pivot = arr[lo];
    while (i<j)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    if (j < i)
    {
        int temp = arr[lo];
        arr[lo] = arr[j];
        arr[j] = temp;
    }
    return j;
}

void quicksort(int arr[], int l, int h)
{
    
    if (l < h)
    {
        int pivot_index = partitio(arr,l, h);
        quicksort(arr,l, pivot_index - 1);
        quicksort(arr,pivot_index + 1, h);
    }
}

int main()
{
    int n;
    cout << "ENTER THE SIZE OF AN ARRAY : ";
    cin >> n;
    int arr[n];
    cout << "ENTER THE ARRAY ELEMENTS : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nARRAY BEFORE QUICK SORT : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int low = 0;
    int high = n - 1;
    quicksort(arr,low, high);
    cout
        << "\nARRAY AFTER QUICK SORT : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
*/
//merge sort time complexity is O(nlogn)
/*

void morge(int arr[], int m, int h, int l)
{
    int num[h-l+1];
    int k = l;
    int i = l;
    int j = m + 1;
    while (i <= m and j <= h)
    {
        if (arr[i] < arr[j])
        {
            num[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            num[k] = arr[j];
            k++;
            j++;
        }
    }

   while(i<=m)
    {
        num[k] = arr[i];
        k++;
        i++;
    }

   while(j<=h)
    {
        num[k] = arr[j];
        k++;
        j++;
    }
    for (int i = l; i <= h; i++)
    {
        arr[i] = num[i];
    }
}
void mergesort(int arr[], int lo, int hi)
{
    if (lo < hi)
    {
        int mid = (lo + hi) / 2;
        mergesort(arr, lo, mid);
        mergesort(arr, mid + 1, hi);
        morge(arr, mid, hi, lo);
    }
}
int main()
{
    int n;
    cout << "ENTER THE SIZE OF AN ARRAY : ";
    cin >> n;
    int arr[n];
    cout << "ENTER THE ARRAY ELEMENTS : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nARRAY BEFORE MERGE SORT : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    int low = 0;
    int high = n - 1;
    mergesort(arr, low, high);

    cout << "\nARRAY AFTER MERGE SORT : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
*/
//COUNT SORT O(n)
/*
void countSort(int *arr, int size)
{

    int max = *(max_element(arr, arr + size));
    cout << max;
    int count[max + 1];
    for (int i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        count[arr[i]] = count[arr[i]] + 1;
    }
    int j = 0;
    int i = 0;
    while (i <= max)
    {
        if (count[i] > 0)
        {
            arr[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}

int main()
{

    int n;
    cout << "ENTER THE SIZE OF AN ARRAY : ";
    cin >> n;
    int arr[n];
    cout << "ENTER THE ARRAY ELEMENTS : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nARRAY BEFORE count SORT : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    countSort(arr, n);
    cout << "\nARRAY AFTER count SORT : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
*/
//TREE BINARY TREE USING LINKED
/*
class NODE
{
public:
    int data;
    NODE *left;
    NODE *right;
};
NODE *newnode(int dat)
{
    NODE *temp;
    temp = new (NODE);
    temp->data = dat;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
void printINorder(NODE *node)
{
    if (node == NULL)
    {
        return;
    }
    printINorder(node->left);
    cout << node->data << " ";
    printINorder(node->right);
}
void printpreorder(NODE *node)
{
    if (node == NULL)
    {
        return;
    }
    cout << node->data << " ";
    printpreorder(node->left);

    printpreorder(node->right);
}
void printpostorder(NODE *node)
{
    if (node == NULL)
    {
        return;
    }
    printpostorder(node->left);

    printpostorder(node->right);
    cout << node->data << " ";
}
int main()
{
    NODE *p = newnode(500);
    NODE *q = newnode(200);
    NODE *r = newnode(300);

    p->left = q;
    p->right = r;
    printINorder(p);
    cout<<endl;
    printpreorder(p);
    cout<<endl;
    printpostorder(p);
    cout<<endl;
    return 0;
}
*/
//BINARY SERACH TREE
// left node shuld be less than root node
// right node should be greater than root node
/*/
class NODE
{
public:
    int data;
    NODE *left;
    NODE *right;
};
NODE *newnode(int dat)
{
    NODE *temp;
    temp = new (NODE);
    temp->data = dat;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int isBST(NODE *root, NODE *min=NULL, NODE *max=NULL)
{

    if (root == NULL)
    {
        return 1;
    }
    if (min != NULL && root->data <= min->data)
    {
        return 0;
    }
    if (max != NULL && root->data >= max->data)
    {
        return 0;
    }
    int leftvalid = isBST(root->left, min, root);
    int rightvalid = isBST(root->right, root, max);

   return leftvalid and rightvalid;
     
    
}

int main()
{
    NODE *root = newnode(8);
    NODE *p = newnode(3);
    NODE *q = newnode(12);
    NODE *r = newnode(99);
    NODE *s = newnode(4);
    NODE *t = newnode(9);
    NODE *u = newnode(13);
    root->left = p;
    p->left = r;
    p->right = s;
    root->right = q;
    q->left = t;
    q->right = u;
    if (isBST(root, NULL, NULL))
    {
        cout << "VALID BST";
    }
    else
    {
        cout << "invalid BST";
    }

    return 0;
//*/
//BINARY SEACH TREE (SEARCHING USING RECURSION)
/*
class NODE
{
public:
    int data;
    NODE *left;
    NODE *right;
};
NODE *newnode(int dat)
{
    NODE *temp;
    temp = new (NODE);
    temp->data = dat;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

NODE *search(NODE *ROOT, int key_element)
{
    if (ROOT == NULL)
    {
        return NULL;
    }
    else if (ROOT->data == key_element)
    {
        return ROOT;
    }
    else if (ROOT->data < key_element)
    {
        search(ROOT->right, key_element);
    }
    else if (ROOT->data > key_element)
    {
        search(ROOT->left, key_element);
    }
}
int main()
{
    NODE *root = newnode(8);
    NODE *p = newnode(3);
    NODE *q = newnode(12);
    NODE *r = newnode(1);
    NODE *s = newnode(4);
    NODE *t = newnode(9);
    NODE *u = newnode(13);
    root->left = p;
    p->left = r;
    p->right = s;
    root->right = q;
    q->left = t;
    q->right = u;
    NODE *found = search(root, 99);
    if (found != NULL)
    {
        cout << "ELEMENT FOUND : " <<found->data<< endl;
    }
    else
    {
        cout << "ELEMENT NOT FOUND"<<endl;
    }

    return 0;
}*/
//BINARY SEACH TREE (SEARCHING USING ITERATIVE)
/*
class NODE
{
public:
    int data;
    NODE *left;
    NODE *right;
};
NODE *newnode(int dat)
{
    NODE *temp;
    temp = new (NODE);
    temp->data = dat;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

NODE *search(NODE *ROOT, int key_element)
{
    while (ROOT != NULL)
    {
        if (ROOT == NULL)
        {
            return NULL;
        }
        else if (ROOT->data == key_element)
        {
            return ROOT;
        }
        else if (ROOT->data < key_element)
        {
            ROOT = ROOT->right;
        }
        else if (ROOT->data > key_element)
        {
            ROOT = ROOT->left;
        }
    }
}
int main()
{
    NODE *root = newnode(8);
    NODE *p = newnode(3);
    NODE *q = newnode(12);
    NODE *r = newnode(1);
    NODE *s = newnode(4);
    NODE *t = newnode(9);
    NODE *u = newnode(13);
    root->left = p;
    p->left = r;
    p->right = s;
    root->right = q;
    q->left = t;
    q->right = u;
    NODE *found = search(root, 12);
    if (found != NULL)
    {
        cout << "ELEMENT FOUND : " << found->data << endl;
    }
    else
    {
        cout << "ELEMENT NOT FOUND" << endl;
    }

    return 0;
}*/
// INDSERTION AND DELETION IN A BINARY SEARCH TREE
/*
class NODE
{
public:
    int data;
    NODE *left;
    NODE *right;
};
NODE *newnode(int data)
{
    NODE *temp;
    temp = new (NODE);
    temp->left = temp->right = NULL;
    temp->data = data;
    return temp;
}
NODE *insert(NODE *ROOT, int key)
{
    NODE *prev = NULL;
    NODE *single = ROOT;
    while (ROOT != NULL)
    {

        if (ROOT == NULL)
        {
            return 0;
        }
        else if (key < ROOT->data)
        {
            prev = ROOT;
            ROOT = ROOT->left;
        }
        else if (key > ROOT->data)
        {
            prev = ROOT;
            ROOT = ROOT->right;
        }
    }
    NODE *AMAN = newnode(key);
    if (prev->data < key)
    {
        prev->right = AMAN;
    }
    else
    {
        prev->left = AMAN;
    }
    return single;
}
void inorder(NODE *node)
{
    if (node == NULL)
    {
        return;
    }
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}
int main()
{
    NODE *p = newnode(9);
    NODE *q = newnode(5);
    NODE *r = newnode(12);
    NODE *s = newnode(3);
    NODE *t = newnode(4);
    NODE *u = newnode(11);
    NODE *v = newnode(19);
    NODE *z = newnode(25);
    p->left = q;
    p->right = r;
    q->left = s;
    q->right = t;
    r->left = u;
    r->right = v;
    v->right = z;
    v->left = NULL;
    inorder(p);
    insert(p, 24);
    cout<<endl;
    inorder(p);
    return 0;
}*/
//DELETION IN BINARY SEARCH TREE
class NODE
{
public:
    char data;
    NODE *left;
    NODE *right;
};
NODE *newnode(char dat)
{
    NODE *TEMP=new(NODE);
    TEMP->data = dat;
    TEMP->right = NULL;
    TEMP->left = NULL;
    return TEMP;
}
void preorder(NODE *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);

    preorder(root->right);
}
void deletenodeatleaf(NODE* node,char key){
while(node!= NULL)
{
    if(node->data< key){
        deletenodeatleaf(node->right,key);
    }
    else{
        deletenodeatleaf(node->left,key);
    }
    if(node->right==NULL and node->left==NULL){
        free(node);
    }
}
}
int main()
{
    NODE *p = newnode('A');
    NODE *q = newnode('B');
    NODE *r = newnode('C');
    NODE *s = newnode('D');
    NODE *t = newnode('E');
    NODE *u = newnode('F');
    NODE *v = newnode('G');
    NODE *x = newnode('H');
    NODE *z = newnode('I');
    p->left = q;
    p->right = t;
    q->left = r;
    q->right = s;

    t->left = u;
    t->right = v;
    v->left = x;
    v->right = z;
    preorder(p);
 
    deletenodeatleaf(p,'I');
    preorder(p);
    return 0;
   
}
