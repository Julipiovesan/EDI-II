#ifndef FolderH
#define FolderH

#ifndef IComposableH
#include "ICompoasble.h"
#endif


#include <tchar.h>
#include <iostream>
#include <stdio.h>



class Folder : public IComposable
{
	private:

	public:
		Folder(std::string nodeName)
		{
			m_nodeName = nodeName;
		}

		virtual ~Folder(){}

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
