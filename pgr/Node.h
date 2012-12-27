/*  Node.h   */
/*
 *
 */

#ifndef PGR_NODE_H
#define PGR_NODE_H

namespace pgr {

    class Node {
    public:
        Node(const Node& right);
        ~Node();
        Node& operator=(const Node& right);

        


    private:
        Node();
    };

}

#endif /* PGR_NODE_H */

/* Local Variables:   */
/* mode: c++          */
/* End:               */
