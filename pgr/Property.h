/*  Property.h   */
/*
 *
 */

#ifndef PGR_PROPERTY_H
#define PGR_PROPERTY_H

#include <string>

#include <Tags.h>



namespace pgr {

    class Property {
    public:
        Property(const Property& right);
        ~Property();
        Property& operator=(const Property& right);


        // Tag operations
        //
        std::string getTag(std::string& t)             { pTags.get(t); }
        bool hasTag(std::string& t)                    { pTags.has(t); }
        bool matchTag(std::string& t, std::string& v)  { pTags.match(t,v); }
        bool matchTags(const Tags& t)                  { pTags.matchAll(t); }
        void setTag(std::string& t, std::string& v)    { pTags.set(t,v); }
        void clearTag(std::string& t)                  { pTags.clear(t); }

    private:
        Property();
    
        // ns   - NameSpace
        // ???

        // name - Name (key)
        std::string pName;

        // val  - Value
        std::string pVal;

        // tags[k, v]
        Tags pTags;
    };

}

#endif /* PGR_PROPERTY_H */

/* Local Variables:   */
/* mode: c++          */
/* End:               */
