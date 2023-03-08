#ifndef __CQUEUE_H_INCLUDE
#define __CQUEUE_H_INCLUDE


typedef struct node {
    ElementType data;
    struct node *next;
} CNode;

typedef struct {
    CNode *front;//actually is the head node
    CNode *rear;
    int size;
} CQueue;

CQueue *CQueueCreate(void);
void CEnQueue(CQueue *q, ElementType val);
ElementType CDeQueue(CQueue *q);
int CQueueSize(const CQueue *q);
int CQueueIsEmpty(const CQueue *q);
void CQueueFree(CQueue *q);



#endif	//__CQUEUE_H_INCLUDE
