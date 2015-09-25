#ifndef __ConfigurationSetter__H
#define __ConfigurationSetter__H

#include <string>

class ConfigurationSetter {
public:
  /**
   *  \class ConfigurationSetter
   *  Modifes the SimpleConfigurables, given a string.
   */
  static void set ( const std::string & data );
};
#endif
