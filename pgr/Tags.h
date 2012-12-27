/*  Tags.h   */
/*
 *
 */

#ifndef PGR_TAGS_H
#define PGR_TAGS_H

#include <string>



namespace pgr {

    class Tags {
    public:
        Tags();
        Tags(const Tags& right);
        ~Tags();
        Tags& operator=(const Tags& right);


        std::string get(const std::string& key);

        bool has(const std::string& key);
        bool match(const std::string& key, std::string& value);
        bool matchAll(const Tags& right);

        void set(const std::string& key, std::string& value);
        void clear(const std::string& key);

    private:

    };

}

#endif /* PGR_TAGS_H */

/* Local Variables:   */
/* mode: c++          */
/* End:               */
