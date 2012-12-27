/*  Environment.h   */
/*
 *
 */

#ifndef PGR_ENVIRONMENT_H
#define PGR_ENVIRONMENT_H

namespace pgr {

    class Environment {
    public:
        Environment(const Environment& right);
        ~Environment();
        Environment& operator=(const Environment& right);

        


    private:
        Environment();
    };

}

#endif /* PGR_ENVIRONMENT_H */

/* Local Variables:   */
/* mode: c++          */
/* End:               */
