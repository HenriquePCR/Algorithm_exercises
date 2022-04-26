//utilização de lista encadeada 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
#include <typeinfo>
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        
        int totalL1=0;
        int currentVal=0;
        int currentPower=0;
        
        
        while(l1!=NULL){
            currentVal=l1->val;
            totalL1=totalL1+currentVal*int(pow(10,currentPower));
            std::cout<<"valorTotal1: "<<totalL1<<"\n"; 
            currentPower++;
            l1=l1->next;
        }
        float totalL2=0;
        currentVal=0;
        currentPower=0;
        while(l2!=NULL){
            currentVal=l2->val;
            totalL2=totalL2+currentVal*float(pow(10,currentPower));
            std::cout<<"valorTotal2: "<<totalL2<<"\n"; 
            currentPower++;
            l2=l2->next;
        }
        long double totalSum=0;
        totalSum= totalL1+totalL2;
        std::cout<<"valorTotalSum: "<<totalSum <<"\n"; 
        
        
    stringstream stream;  
    stream<<totalSum;  
    string totalSumString  = stream.str(); 
        
        int newVal = 0;
        int i=totalSumString.length();
        std::cout<<"tamanhoString: "<<totalSumString.length()<<"\n"; 
        std::cout<<"resultadoString: "<<totalSumString<<"\n";  
        std::cout<<"resultadoInt: ";  

        int counterResult = totalSumString.length();
        int y = totalSumString[counterResult-1]-'0';
        
        ListNode *head = new ListNode();        
        ListNode *tail = new ListNode();
        
        int b=0;
           while(counterResult>0){
            int y = totalSumString[counterResult-1]-'0';
            ListNode *aux = new ListNode(y);
            if(b==0){
                head = tail = aux;
                b=1;
            }
            else{
                tail->next = aux;
                tail = aux;
            }
            counterResult--;
            
        }
       return head;
    }
};