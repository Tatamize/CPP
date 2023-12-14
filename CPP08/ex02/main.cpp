#include <iostream>
#include "header/colors.h"
#include "header/MutantStack.h"

int	main()
{
	{
		std::cout << std::endl;
		colornote(PRINT, 2, "SAMPLE : Check the container size", "");
		std::stack<int, std::list<int> > liststack;
		std::cout << " std::stack<int, std::list<int> > : container size is " << sizeof(liststack) << std::endl;

		std::stack<int, std::vector<int> > vectorstack;
		std::cout << " std::stack<int, std::vector<int> > : container size is " << sizeof(vectorstack) << std::endl;

		std::stack<int, std::deque<int> > dequestack;
		std::cout << " std::stack<int, std::deque<int> > : container size is " << sizeof(dequestack) << std::endl;
	}	
	{
		std::cout << std::endl;
		colornote(PRINT, 2, "TEST1(same as subject) with int", "");
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();
	
		std::cout << "after pop, the size is " << mstack.size() << std::endl;
		std::cout << "(sizeof this stack  is " << sizeof(mstack) << ")" << std::endl;   // additional line
		std::cout << "top of stack  is " << mstack.top() << std::endl;  // additional line

		mstack.push(3); 
		mstack.push(5);
		mstack.push(737); //[...] 
		mstack.push(0);
	
		std::cout << "after adding, the size is " << mstack.size() << std::endl; // additional line
		
		MutantStack<int>::iterator it = mstack.begin(); 
		MutantStack<int>::iterator ite = mstack.end();

		std::cout << "mstack.begin() " << *it << std::endl; 	// additional line
		std::cout << "mstack.end() " << *ite << std::endl; 		// additional line : is is out of stack! be careful
		++it;
		std::cout << "after ++it " << *it << std::endl; 		// additional line
		--it;
		std::cout << "after --it " << *it << std::endl;		 	// additional line
	
		while (it != ite) 
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << "copy of mstack(s) s.top() is " << s.top() << std::endl; // additional line
	}
	{
		std::cout << std::endl;
		colornote(PRINT, 2, "TEST1-2(same as subject) with std::list<int>", "");
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);

		std::cout << mstack.back() << std::endl;

		mstack.pop_back();
	
		std::cout << "after pop, the size is " << mstack.size() << std::endl;
		std::cout << "(sizeof this stack  is " << sizeof(mstack) << ")" << std::endl;   // additional line
		std::cout << "top of stack  is " << mstack.front() << std::endl;  // additional line

		mstack.push_back(3); 
		mstack.push_back(5);
		mstack.push_back(737); //[...] 
		mstack.push_back(0);
	
		std::cout << "after adding, the size is " << mstack.size() << std::endl; // additional line
		
		std::list<int>::iterator it = mstack.begin(); 
		std::list<int>::iterator ite = mstack.end();

		std::cout << "mstack.begin() " << *it << std::endl; 	// additional line
		std::cout << "mstack.end() " << *ite << std::endl; 		// additional line : is is out of stack! be careful
		++it;
		std::cout << "after ++it " << *it << std::endl; 		// additional line
		--it;
		std::cout << "after --it " << *it << std::endl;		 	// additional line
	
		while (it != ite) 
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
		std::cout << "copy of mstack(s) s.top() is " << s.front() << std::endl; // additional line
	}
	{
		std::cout << std::endl;
		colornote(PRINT, 2, "TEST2 with int and std::list<int>", "");
		MutantStack<int, std::list<int> > mstack;
		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;
	
		mstack.pop();
	
		std::cout << "after pop, the size is " << mstack.size() << std::endl;
		std::cout << "(sizeof this stack  is " << sizeof(mstack)  << ")" << std::endl;   // additional line
		std::cout << "top of stack  is " << mstack.top() << std::endl;  // additional line

		mstack.push(3); 
		mstack.push(5);
		mstack.push(737); //[...] 
		mstack.push(0);

		std::cout << "after adding, the size is " << mstack.size() << std::endl; // additional line
		
		MutantStack<int, std::list<int> >::iterator it = mstack.begin(); 
		MutantStack<int, std::list<int> >::iterator ite = mstack.end();

		std::cout << "mstack.begin() " << *it << std::endl; 	// additional line
		std::cout << "mstack.end() " << *ite << std::endl; 		// additional line out of stack(the content is not in this stack)
		++it;
		std::cout << "after ++it " << *it << std::endl; 
		--it;
		std::cout << "after --it " << *it << std::endl;		 // additional line

		while (it != ite) 
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int, std::list<int> > s(mstack);
		std::cout << "copy of mstack(s) s.top() is " << s.top() << std::endl; // additional line
	}
	{
		std::cout << std::endl;
		colornote(PRINT, 2, "TEST3 with int and std::vector<int>", "");
		MutantStack<int, std::vector<int> > mstack;
		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;
	
		mstack.pop();
	
		std::cout << "after pop, the size is " << mstack.size() << std::endl;
		std::cout << "(sizeof this stack  is " << sizeof(mstack) << ")" << std::endl;   // additional line
		std::cout << "top of stack  is " << mstack.top() << std::endl;  // additional line

		mstack.push(3); 
		mstack.push(5);
		mstack.push(737); //[...] 
		mstack.push(0);

		std::cout << "after adding, the size is " << mstack.size() << std::endl; // additional line
		
		MutantStack<int, std::vector<int> >::iterator it = mstack.begin(); 
		MutantStack<int, std::vector<int> >::iterator ite = mstack.end();

		std::cout << "mstack.begin() " << *it << std::endl; 	// additional line
		std::cout << "mstack.end() " << *ite << std::endl; 		// additional line out of stack(the content is not in this stack)
		++it;
		std::cout << "after ++it " << *it << std::endl; 
		--it;
		std::cout << "after --it " << *it << std::endl;		 // additional line

		while (it != ite) 
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int, std::vector<int> > s(mstack);
		std::cout << "copy of mstack(s) s.top() is " << s.top() << std::endl; // additional line
	}
	return (0);
}


