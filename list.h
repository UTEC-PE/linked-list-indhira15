#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "node.h"
#include "iterator.h"

using namespace std;

template <typename T>
class List {
    private:
        Node<T>* head;
        Node<T>* tail;
        int nodes;


    public:
        List() {
            head = nullptr;
            tail = nullptr;
        }

        T int front() { // Esto no va a compilar, hay dos tipos en el return
            return head -> data; // Falta controlar caso de lista vacía
        }
        T int back() { // Esto no va a compilar, hay dos tipos en el return
            return tail->data; // Igual que el anterior
        }
        void push_front(T value) {
            Node<T> * nuevo= new Node(); // Falta incluir el tipo <T> después de Node
            nuevo-> data=value;
            if (head == nullptr){
                head= nuevo;
                nuevo -> next= nullptr; // No se está igualando tail
            }
            else{
                nuevo->next=head;
                head= nuevo; 
            }  
        }
        void push_back(T value){
            Node<T> * nuevo= new Node(); // Falta incluir el tipo <T> después de Node
            nuevo-> data=value;
            if (head == nullptr){
                head= nuevo;
                nuevo -> next= nullptr;
            }
            else{
                ; // ;?
                while(head != nullptr){
                    if(next==nullptr){ // Qué es next?
                        tail=nuevo;
                        nuevo ->tail=nullptr;
                    }
                    head = head ->next;
                }

            }

        };
        void pop_front(T value){
            delete head->data;
            head=head->next;
        };
        void pop_back(T value){
            while(head!=nullptr){
                if(head->next==nullptr){
                    delete head->data;
                    tail=head;
                }
            }

        };
        T get(int position){
            Node<T> * actual= new Node();
            actual = head;

            
            for(int i=0;i<position;i++){
                actual ->next;
            }
            //while(actual<-data!= position){
            //    int i=0;
            //    i++;
            //    actual-> next;
            //}

            return (actual->data);
        };
        void concat(List<T> &other){
            tail->next= &other;
        };
        bool empty(){
            if(head==nullptr){
                return(true);
            }
            else{
                return(false);
            }
        };
        int size(){
            Node<T> * actual= new Node();// No es necesario dar new
            actual = head;
            int c=0;
            while(actual != nullptr){
                c++;
                actual = actual ->next;
            }
            return(c);
        };
        void print(Node<T>){
            Node<T> * actual= new Node(); // No es necesario dar new
            actual = head;
            while(actual != nullptr){
                cout<<actual->dato<<endl;
                actual = actual ->next;
            }
        };
        void print_reverse(Node<T>* head){ // No se implementó
            if(next!=nullptr){

            }
        };
        void clear(); // No se implementó
        Iterator<T> begin();
        Iterator<T> end();

        ~List(); // No se implementó ni comentó el destructor, no va a compilar
};
#endif
