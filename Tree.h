#ifndef TREE_H
#define TREE_H

template<class T>
class BinaryNode
{
public:
	T data;
	BinaryNode<T>* left;
	BinaryNode<T>* right;

	BinaryNode(T d) :
		data(d), left(nullptr), right(nullptr)
	{

	}


	void insert(T item)
	{
		//insert(item, root);
	}

	void remove(T item)
	{
		//remove(item, root);
	}

private:
	BinaryNode* find(T item, BinaryNode<T>* t)
	{
		if (t == nullptr)
		{
			return nullptr;
		}
		else if (item < t->data)
		{
			return find(item, t->left);
		}
		else if (item > t->data)
		{
			return find(item, t->right);
		}
		else
		{
			return t;
		}
	}

	BinaryNode* findMin(BinaryNode<T>* t)
	{
		if (t == nullptr)
		{
			return nullptr;
		}
		else if (t->left == nullptr)
		{
			return t;
			return findMin(t->left);
		}
	}

	BinaryNode* findMax(BinaryNode<T>* t)
	{
		if (t == nullptr)
		{
			return nullptr;
		}
		else if (t->right == nullptr)
		{
			return t;
			return findMax(t->right);
		}
	}

	void insert(T item, BinaryNode<T>*& t)
	{
		if (t == nullptr)
		{
			t = new BinaryNode<T>(item);
		}
		else if (item < t->data)
		{
			insert(item, t->left);
		}
		else if (item > t->data)
		{
			insert(item, t->right);
		}
		else
		{
			;
		}
	}

	void remove(T x, BinaryNode<T>*& t)
	{
		if (t == nullptr)
		{
			return;
		}
		if (x < t->data)
		{
			remove(x, t->left);
		}
		else if (x > t->right)
		{
			remove(x, t->right);
		}
		else
		{
			BinaryNode<T> oldNode;
			if (t->left == nullptr)
			{
				oldNode = t;
				t = t->right;
				delete oldNode;
				return;
			}
			else if (t->right == nullptr)
			{
				oldNode = t;
				t = t->left;
				delete oldNode;
				return;
			}
			oldNode = findMin(t->right);
			t->data = oldNode->data;
			remove(t->data, t->right);
		}


	}
};

template<class T>
class BinarySearchTree
{
public:
	void remove(T item);
	void insert(T item);
	BinaryNode<T>* find(T item);
private:
	BinaryNode<T>* root;
	BinaryNode<T>* find(T item, BinaryNode<T>* t);
	void insert(T item, BinaryNode<T>*& t);
};

#endif
