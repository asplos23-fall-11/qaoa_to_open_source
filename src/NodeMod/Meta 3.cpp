#ifndef META_NODEMOD_CPP
#define META_NODEMOD_CPP

#include "Meta.hpp"
#include "NodeMod.hpp"
#include "GreedyMapper.hpp"
//#include "OptMapper.hpp"
#include <string>
#include <tuple>
using namespace std;

const int NUMNODEMODS = 1;
tuple<NodeMod*, string, string> nodeMods[NUMNODEMODS] = {
	make_tuple(new GreedyMapper(),
				"GreedyMapper",
				"Deletes default initial mapping, and greedily maps qubits in ready CX gates"),
	//make_tuple(new OptMapper(),
	//			"OptMapper",
	//			"Optimal mapper, for use with small benchmarks"),
};

#endif