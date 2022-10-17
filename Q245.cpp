#include <iostream>
using namespace std;

// declare linked list
struct Node
{
    string word;
    Node *next;
};

// return whether number or not
inline bool is_number(char ch)
{
    return '0' <= ch && ch <= '9';
}

// return whether alphabet or not
inline bool is_alphabet(char ch)
{
    return ('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z');
}

int main()
{
    // declare head node
    Node *head = NULL;

    string word;
    char ch;

    ch = getchar();
    while (1)
    {
        if (is_number(ch))
        {
            if (ch == '0')
                break;

            int num = 0;

            while (is_number(ch))
            {
                // string to int ex:('1','2')->12
                num = num * 10 + (ch - '0');
                ch = getchar();
            }

            Node *now = head, *prev = NULL;
            for (int i = 1; i < num; i++)
            {
                // search from head
                prev = now;
                now = now->next;
            }

            cout << now->word;

            // put to head
            if (now != head)
            {
                prev->next = now->next;
                now->next = head;
                head = now;
            }
        }
        else if (is_alphabet(ch))
        {
            string word;
            while (is_alphabet(ch))
            {
                word += ch;
                ch = getchar();
            }

            cout << word;

            // put to head
            Node *n = new Node;
            n->word = word;
            n->next = head;
            head = n;
        }
        else
        {
            putchar(ch);
            ch = getchar();
        }
    }

    return 0;
}