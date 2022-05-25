#pragma once
#include "LinkedList.hpp"
#include "Sequence.hpp"

template <class T>
class LinkedListSequence : public Sequence<T>{
private:
    LinkedList<T>* data;

public:
    LinkedListSequence(LinkedListSequence<T>& list){
        data = new LinkedList<T>;
        for (int i = 0; i < list.GetLength(); i++) {
            this->Append(list.Get(i));
        }
    }
    LinkedListSequence(){
        data = new LinkedList<T>;
    }

    LinkedListSequence(T* items, int count){
        data = new LinkedList<T>(items, count);
    }

    T GetFirst() override{
        return data->GetFirst();
    }

    T GetLast() override{
        return data->GetLast();
    }

    T Get (int index) override{
        return data->Get(index);
    }

    Item<T>* operator[](int const index) {
        return (data->operator[](index));
    }

    LinkedListSequence<T>* GetSubsequence (int startIndex, int endIndex) override {
        LinkedList<T>* buffList = new LinkedList<T>(*(data->GetSubList(startIndex, endIndex)));
        LinkedListSequence<T>* buffListSeq = new LinkedListSequence<T>;
        for (int i = 0; i < buffList->GetLength(); i++) {
            buffListSeq->Append(buffList->Get(i));
        }
        delete buffList;
        return (LinkedListSequence<T>*)buffListSeq;
    }
    
    int GetLength() override{
        return data->GetLength();
    }
    
    void Set(int index, T item){
        data->Set(index, item);
    }
    
    void Append(T item) override{
        data->Append(item);
    }

    void Prepend(T item) override{
        data->Prepend(item);
    }

    void InsertAt(T item, int index) override{
        data->InsertAt(item, index);
    }

    void print() override{
        data->print();
    }

    Sequence<T>* Concat (Sequence<T>* list) override{
        for (int i = 0; i < ((LinkedListSequence<T>*)list)->GetLength(); i++) {
            this->Append(((LinkedListSequence<T>*)list)->Get(i));
        }
        return  (Sequence<T>*) this;
    }
};