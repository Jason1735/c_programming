#include "CQueue.h"

CQueue *CQueueCreate(void)
{
    CQueue *q = (CQueue *)calloc(1, sizeof(CQueue));
    q->rear = q->front = NULL;
    return q;
}

void CEnQueue(CQueue *q, ElementType val)
{
    CNode *newNode = (CNode*)calloc(1, sizeof(CNode));
    newNode->data = val;
    newNode->next = NULL;
    if(q->front == NULL)
    {
        q->front = q->rear = newNode;
    }
    else
    {
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

ElementType CDeQueue(CQueue *q)
{
    CNode *delNode = q->front;
    ElementType result = delNode->data;
    q->front = delNode->next;
    if(q->front == NULL) q->rear = NULL;
    free(delNode);
    return result;
}

int CQueueIsEmpty(CQueue *q)
{
    return (q->rear == NULL);
}

void CQueueFree(CQueue *q)
{
    while(!CQueueIsEmpty(q)) CDeQueue(q);
    free(q);
}

