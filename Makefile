# C++ compiler flags - XXX config.gmk sets this already, so APPEND ONLY XXX
CXXFLAGS += -g -O3 -std=c++11 -fdiagnostics-color=always

ToolDAQPath=/HOME/ToolAnalysis/ToolDAQApplication/ToolDAQ

BoostLib= -L $(ToolDAQPath)/boost_1_66_0/install/lib -lboost_serialization -lboost_iostreams -lboost_regex
BoostInclude= -I $(ToolDAQPath)/boost_1_66_0/install/include

DataModelInclude= -I $(ToolDAQPath)/ToolDAQFramework/include
DataModelLib= -L $(ToolDAQPath)/ToolDAQFramework/lib -lStore

tester: JsonTester.cpp JsonParser.cpp JsonParser.h
	g++ $(CXXFLAGS) JsonTester.cpp JsonParser.cpp -I ./ $(DataModelInclude) $(BoostInclude) $(DataModelLib) $(BoostLib) -o $@
