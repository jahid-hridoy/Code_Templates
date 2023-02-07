#include<bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE

#define deb(args...)       cerr << "[ " #args << " ] : " , debug(args);
#define debx(args...)      (Debugger(" ")),args
#define debug(args...)     (Debugger()) , args

class Debugger
{
public:
    Debugger(const std::string& _separator = ", ") :
        first(true), separator(_separator) {}

    template<typename ObjectType>
    Debugger& operator , (const ObjectType& v)
    {
        if (!first)
            std::cerr << separator;
        std::cerr << v;
        first = false;
        return *this;
    }
    ~Debugger() {  std::cerr << endl;}

private:
    bool first;
    std::string separator;
};

template <typename T1, typename T2>
inline std::ostream& operator << (std::ostream& os, const std::pair<T1, T2>& p)
{
    return os << "(" << p.first << ", " << p.second << ")";
}

template<typename T>
inline std::ostream &operator << (std::ostream & os, const std::vector<T>& v)
{
    bool first = true;
    os << "[";
    for (unsigned int i = 0; i < v.size(); i++)
    {
        if (!first)
            os << ", ";
        os << v[i];
        first = false;
    }
    return os << "]";
}

template<typename T>
inline std::ostream &operator << (std::ostream & os, const std::set<T>& v)
{
    bool first = true;
    os << "[";
    for (typename std::set<T>::const_iterator ii = v.begin(); ii != v.end(); ++ii)
    {
        if (!first)
            os << ", ";
        os << *ii;
        first = false;
    }
    return os << "]";
}

template<typename T>
inline std::ostream &operator << (std::ostream & os, const std::multiset<T>& v)
{
    bool first = true;
    os << "[";
    for (typename std::set<T>::const_iterator ii = v.begin(); ii != v.end(); ++ii)
    {
        if (!first)
            os << ", ";
        os << *ii;
        first = false;
    }
    return os << "]";
}

template<typename T1, typename T2>
inline std::ostream &operator << (std::ostream & os, const std::map<T1, T2>& v)
{
    bool first = true;
    os << "[";
    for (typename std::map<T1, T2>::const_iterator ii = v.begin(); ii != v.end(); ++ii)
    {
        if (!first)
            os << ", ";
        os << *ii ;
        first = false;
    }
    return os << "]";
}

#else

#define deb(args...)
#define debx(args...)
#define debug(args...)

#endif
