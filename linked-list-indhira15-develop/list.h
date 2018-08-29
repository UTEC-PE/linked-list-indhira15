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
			head = List;
			tail = nullptr;
		}

		T int front() {
			return head -> data;
		}
		T int back() {
            Node<T> * actual= new Node();
            actual = lista;
            while(tail!=nullptr){
                tail->data;
                tail = tail-> next;
            }
			return tail->data;
		}
		void push_front(T value) {
            Node<T> * nuevo= new Node();
            nuevo-> data=value;
            Node *aux1=lista;
            Node *aux2;
            if lista == nullptr{
                lista= nuevo;
                nuevo -> next= nullptr;
            }
			else{
                while(aux1!=nullptr){
                    aux2=aux1;
                    aux1=aux1->next;
                    

                }
            }  

			
		}
        void push_back(T value){
            Node<T> * nuevo= new Node();
            nuevo-> data=value;
            if lista == nullptr{
                lista= nuevo;
                nuevo -> next= nullptr;
            }
            else{

                Node *aux1=lista;
                Node *aux2;
                while(aux1!=nullptr){
                    tail-> aux2;
                    nuevo->next;

                }
            }

        };
        void pop_front(T value){

        };
        void pop_back(T value){

        };
        T get(int position){
            Node<T> * actual= new Node();
            actual = lista;
            for(int i=0;i<position;i++){
                actual ->next
            }
            return (actual);
            //while(actual != position){
            //    
            //    actual = actual ->next;
            //}
            // return (actual->dato);
        };
        void concat(List<T> &other);
        bool empty();
        int size();
        void print(Node<T>){
            Node<T> * actual= new Node();
            actual = lista;
            while(actual != nullptr){
                cout<<actual->dato<<endl;
                actual = actual ->next;
            }
        };
        void print_reverse(Node<T>* head);
        void clear();
        Iterator<T> begin();
        Iterator<T> end();

        ~List();
};
#endif
