#ifndef IComposableH
#define IcomposableH

#include <tchar.h>
#include <stdio.h>
#include <iostream>


class IComposable
{
    public:
        virtual ~IComposable(){};
        virtual void list(int depth) = 0; //operation
        virtual void add(IComposable* component) = 0;
        virtual void remove(IComposable* component) = 0;
        virtual IComposable* getChild(int key) = 0;
};

#endif


