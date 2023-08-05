#ifndef WEIGHTEDMINKOWSKIPLUGIN_H
#define WEIGHTEDMINKOWSKIPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class WeightedMinkowskiPlugin : public Plugin
{
public: 
 std::string toString() {return "WeightedMinkowski";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
