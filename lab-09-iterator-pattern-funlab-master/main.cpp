#include <iostream>
#include <vector>
#include "add.hpp"
#include "div.hpp"
#include "mult.hpp"
#include "sub.hpp"
#include "op.hpp"
#include "pow.hpp"
#include "rand.hpp"
#include "nullIterator.hpp"
#include "iterator.hpp"
#include "base.hpp"
#include "unaryIterator.hpp"
#include "binaryIterator.hpp"
#include "preorderIterator.hpp"
using namespace std;


int main()
{

	Op* op5 = new Op(5);
	Op* op6 = new Op(6);
	Op* op7 = new Op(7);
	Op* op8 = new Op(8);
	Add* add = new Add(op5, op6);
	Sub* sub = new Sub(add,op7);
	Mult* mult = new Mult(sub,op8);

	//Root* root = new Root(sqr);
	cout << "the preorder tree is" <<endl;
	PreorderIterator* thetree = new PreorderIterator(mult);
	thetree->first();
	while (!thetree->is_done()) {
	  cout << thetree->current()->stringify();
	  cout << endl;
	  thetree->next();
	}

}
	