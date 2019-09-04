
#ifndef FileH
#define FileH

#ifndef IComposableH
#include "ICompoasble.h"
#endif

#include <iostream>
#include <vector>
#include <algoritm>


class File : public IComposable
{
	private:

	public:
		File(std::string nodeName)
		{
		}

		virtual ~File(){}

		void list(int depth)//operation
		{
		}

		void add(IComposable* component)
		{
		}

		void remove(IComposable* component)
		{
        }

        IComposable* getChild(int key)
		{
		}
};

#endif

