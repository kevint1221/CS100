#ifndef __COUNT_VISITOR_HPP__
#define __COUNT_VISITOR_HPP__

// #include "op.hpp"
// #include "rand.hpp"
// #include "mult.hpp"
// #include "div.hpp"
// #include "add.hpp"
// #include "sub.hpp"
// #include "pow.hpp"
// #include "Ceil.h"
// #include "Floor.h"
// #include "Abs.h"
// #include "Trunc.hpp"
// #include "Paren.hpp"

class CountVisitor{
    private:
        int ops;
        int rands;
        int mults;
        int divs;
        int add;
        int sub;
        int pow;
        
        int ceil;
        int floor;
        int abs;
        int trunc;
        int paren;

    public:
        CountVisitor() {
            ops = 0;
            rands = 0;
            mults = 0;
            divs = 0;
            add = 0;
            sub = 0;
            pow = 0;
            ceil = 0;
            floor = 0;
            abs = 0;
            trunc = 0;
            paren = 0;
        }

        void visit_op(){
            ops++;
        }
        int op_count(){
            return ops;
        }
        void visit_rand(){
            rands++;
        }
        int rand_count(){
            return rands;
        }
        void visit_mult(){
            mults++;
        }
        int mult_count(){
            return mults;
        }
        void visit_div(){
            divs++;
        }
        int div_count(){
            return divs;
        }
        void visit_add(){
            add++;
        }
        int add_count(){
            return add;
        }
        void visit_sub(){
            sub++;
        }
        int sub_count(){
            return sub;
        }
        void visit_pow(){
            pow++;
        }
        int pow_count(){
            return pow;
        }

        void visit_ceil(){
            ceil++;
        }
        int ceil_count(){
            return ceil;
        }
        void visit_floor(){
            floor++;
        }
        int floor_count(){
            return floor;
        }
        void visit_abs(){
            abs++;
        }
        int abs_count(){
            return abs;
        }
        void visit_trunc(){
            trunc++;
        }
        int trunc_count(){
            return trunc;
        }
        void visit_paren(){
            paren++;
        }
        int paren_count(){
            return paren;
        }
};

#endif //__COUNT_VISITOR_HPP__
