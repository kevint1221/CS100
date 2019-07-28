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
#include "visitor.hpp"
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
	CountVisitor* v = new CountVisitor();
	thetree->first();
	while (!thetree->is_done()) {
	  cout << thetree->current()->stringify();
	  cout << endl;
	  thetree->current()->accept(v);
	  thetree->next();
	}

	cout << "Visits: " << endl;
	cout << "Add = " << v->add_count() << endl;
	cout << "Mult = " << v->mult_count() << endl;
	cout << "Div = " << v->div_count() << endl;
	cout << "Sub = " << v->sub_count() << endl;
	cout << "Op = " << v->op_count() << endl;
	cout << "Rand = " << v->rand_count() << endl;
	cout << "Ceil = " << v->ceil_count() << endl;
	cout << "Floor = " << v->floor_count() << endl;
	cout << "Abs = " << v->abs_count() << endl;
	cout << "Trunc = " << v->trunc_count() << endl;
	cout << "Paren = " << v->paren_count() << endl;
}
	