#pragma once
#include <cassert>
using namespace std;

template <class T>
class Item{
public:
    T data;
    Item<T>* next;
    Item<T>* prev;
};

template <class T>
class LinkedList{
private:
    Item<T>* head;
    Item<T>* tail;
    int length;

public:
    //Create empty list
    LinkedList(){
        head = NULL;
        tail = NULL;
        length = 0;
    }
    // Copying constructor
    LinkedList(T* items, int count){
        head = NULL;
        tail = NULL;
        length = 0;

        for (int i = 0; i<count; i++){
            Append(items[i]);
        }
    }

    LinkedList(LinkedList<T>& list){
        head = NULL;
        tail = NULL;
        length = 0;
        for (int i = 0; i < list.length; i++) {
            Append(list.Get(i));
        }
    }

    //Decomposing
    T GetFirst(){
        return head->data;
    }

    T GetLast(){
        return tail-> data;
    }

    Item<T>* operator[](int index){
        if (index == 0 && length ==0) return NULL;
        assert(index>=0 && index<length);
        Item<T>* buff = head;

        for (int i = 0; i < index; ++i) {
            buff = buff->next;
        }
        return buff;
    }

    T Get (int index){
        assert(length!=0);
        assert(index>=0 && index<length);
        Item<T>* buff = head;
        for (int i = 0; i < index; i++) {
            buff = buff->next;
        }
        return buff->data;
    }

 

    LinkedList<T>* GetSubList(int startIndex, int endIndex){
        assert(startIndex >= 0);
        assert(endIndex<=length);
        LinkedList<T>* buff = new LinkedList<T>();
        for (int i = startIndex; i < endIndex; i++) {
            buff->Append(Get(i));
        }
        return buff;
    }

    int GetLength(){
        return length;
    }

    void Set(int index, T data) {
        assert(length != 0);
        assert(index < length);
        Item<T> *buff = head;

        for (int i = 0; i < index; i++) {
            buff = buff->next;
        }

        buff->data = data;
    }

    void Append(T item){
        Item<T>* buff = new Item<T>;
        buff->next = NULL;
        buff->data = item;
        if (head == NULL){
            head = buff;
            head->prev = NULL;
            tail = head;
        }
        else{
            tail->next = buff;
            buff->prev = tail;
            tail = buff;
        }

        length++;
    }

    void Prepend(T item){
        length++;
        Item<T>* buff = new Item<T>;
        buff->next = NULL;
        buff->data = item;

        if(head == NULL){
            head = buff;
            head->prev = NULL;
            tail = head;
        }
        else{
            head->prev = buff;
            buff->next = head;
            head  = buff;
        }

        
    }

    void InsertAt(T item, int index){
        assert(index>=0);
        assert(index<length);
        Item<T>* prevItem = (*this)[index];

        if (prevItem == NULL){
            Append(index);
        } else{
            Item <T>* buff = new Item<T>;
            buff->data = item;
            buff->prev = prevItem;
            buff->next = prevItem->next;
            prevItem->next->prev = buff;
            prevItem->next = buff;
            length++;
        }
    }

    LinkedList<T>* Concat(LinkedList<T>* list){
        for (int i = 0; i < list->length; i++) {
            Append(list->Get(i));
        }
        return this;
    }

    void print() {
        cout << "Length: " << length << endl;
        cout << "[ ";
        Item<T>* buff = head;
        for (int i = 0; i < length; i++) {
            cout << buff->data << " ";
            buff = buff->next;
        }

        cout << "]" << endl;
    }

};