#ifndef MYARRAY_H
#define MYARRAY_H

class MyArray
{
public:
	//�޲ι��캯�����û�û��ָ�����������ʼ��Ϊ100
	MyArray();
	//�вι��캯�����û�ָ��������ʼ��
	explicit MyArray(int capacity);
	//�û������ӿ�
	//����λ�����Ԫ��
	void SetData(int pos, int val);
	//��ȡָ��λ������
	int GetData(int pos);
	//β�巨
	void PushBack(int val);
	//��ó���
	int GetLength();
	//�����������ͷ�����ռ�
	~MyArray();

private:
	int mCapacity;//����һ�������ɶ���Ԫ��
	int mSize;//��ǰ�ж��ٸ�Ԫ��
	int* pAdress;//ָ�򴢴����ݵĿռ�
};

#endif
