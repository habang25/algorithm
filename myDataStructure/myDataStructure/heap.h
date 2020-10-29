#define MAX_HEAP 1000

template <class T>
class MaxHeap {
private:
	int size;
	T h[MAX_HEAP];

public:
	void init();
	void push(T val);
	T top();
	void pop();
};

template <class T>
void MaxHeap<T>::init() {
	size = 0;
}

template <class T>
void MaxHeap<T>::push(T val) {
	if (size == MAX_HEAP)
		return;
	int cur = ++size;
	while (cur != 1 && h[cur >> 1] < val) {
		h[cur] = h[cur >> 1];
		cur >>= 1;
	}
	h[cur] = val;
}

template <class T>
T MaxHeap<T>::top() {
	return h[1];
}

template <class T>
void MaxHeap<T>::pop() {
	if (size == 0)
		return;
	int e = h[size--];
	int cur = 1, child = 2;
	while (child <= size) {
		if (child < size && h[child] < h[child + 1]) child++;
		if (h[cur] <= e) break;
		h[cur] = h[child];
		cur = child;
		child <<= 1;
	}
	h[cur] = e;
}