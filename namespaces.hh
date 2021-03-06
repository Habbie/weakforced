#ifndef PDNS_NAMESPACES_HH
#define PDNS_NAMESPACES_HH
#include <boost/lexical_cast.hpp>
#include <boost/tuple/tuple.hpp>

#include <boost/shared_array.hpp>
#include <boost/scoped_array.hpp>
#include <boost/optional.hpp>
#include <boost/any.hpp>
#include <boost/function.hpp>
#include <boost/format.hpp>
#include <boost/algorithm/string.hpp>
#include <memory>
#include <vector>
#include <map>
#include <set>
#include <deque>
#include <string>
#include <iostream>

using std::vector;
using std::map;
using std::pair;
using std::make_pair;
using std::runtime_error;
using std::ostringstream;
using std::set;
using std::deque;
using std::cerr;
using std::cout;
using std::clog;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::ostream;
using std::min; // these are a bit scary, everybody uses 'min'
using std::max;

namespace pdns {
  typedef std::string string;  
};

typedef pdns::string string;

using boost::lexical_cast;
using boost::tie;
using std::shared_ptr;
using boost::shared_array;
using boost::scoped_array;
using boost::tuple;
using boost::format;
using boost::make_tuple;
using boost::optional;
using boost::any_cast;
using boost::any;
using boost::function;
using boost::trim;
using boost::trim_left;
using boost::trim_right;
using boost::is_any_of;
using boost::trim_right_copy_if;
using boost::equals;
using boost::ends_with;
using boost::iends_with;
#endif
