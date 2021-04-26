#ifndef LINKED_LIST_EXCEPTION
#define LINKED_LIST_EXCEPTION

class LinkedListException : public std::invalid_argument
{
public:
    LinkedListException(const char* ex)
    : invalid_argument(ex)
    {

    }

};

#endif // LINKED_LIST_EXCEPTION
