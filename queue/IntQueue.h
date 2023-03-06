#ifndef __IntQueue
#define __IntQueue

// 큐 구조체
typedef struct{
    int max;
    int num;
    int front;
    int rear;
    int *que;
} IntQueue;

// 큐 초기화
int Initialize(IntQueue *q, int max);

// 인큐
int Enque(IntQueue *q, int x);

// 디큐
int Deque(IntQueue *q, int *x);

// 피크
int Peek(const IntQueue *q, int *x);

// 모든 데이터 삭제
void Clear(IntQueue *q);

// 큐 최대 용량
int Capacity(const IntQueue *q);

// 큐 데이터 개수
int Size(const IntQueue *q);

// 큐 비어있는지 확인
int isEmpty(const IntQueue *q);

// 큐 다 찼는지 확인
int isFull(const IntQueue *q);

// 큐 검색
int Search(const IntQueue *q, int x);

// 모든 데이터 출력
void Print(const IntQueue *q);

// 큐 종료
void Terminate(IntQueue *q);

#endif
