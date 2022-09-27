#include "JsonParser.h"
#include "BoostStore.h"
#include <iostream>

int main(){
//	std::string testjson="{\"not true\": [0, false], \"true\": true, \"not null\": [0, 1, false, true, {\"obj\": null}, \"a string\"] }";
//	std::string testjson="{}";
//	std::string testjson="[0]";
//	std::string testjson="{\"Sally\": \"Father McKenzie, I thought you were DEAD!\", \"McKenzie\": \"I vas!\"}";
//	std::string testjson="[{   \"why\":null} ]";
//	std::string testjson="{ \"xvals\":[\"2022-09-23 02:04:55\",\"2022-09-23 01:48:08\",\"2022-09-23 01:31:45\"], \"yvals\":[0.497962,0.502168,0.498470] }";
//	std::string testjson="{\"purefit\":1, \"fits\":[ {\"method\":\"raw\", \"absfit\":1, \"peakdiff\":0.135514, \"gdconc\":0.055772 }, {\"method\":\"simple\", \"absfit\":1, \"peakdiff\":0.118749, \"gdconc\":0.055036 }, {\"method\":\"complex\", \"absfit\":1, \"peakdiff\":0.120748, \"gdconc\":0.055113 } ] }";
//	std::string testjson="{\"runnum\":128,\"start\":\"2022-09-09T00:21:09.356056\",\"stop\":null,\"runconfig\":1,\"notes\":\"\nfirst in-situ run with database, marcusanalysis, transparency and web page updating.\",\"git_tag\":\"V2.1.2-76-g2b4c532\",  \"output_file\": \"05SeptEGADS\" }";
//	std::string testjson="[ 1, 2, 3.4 ]";  // returns std::vector<double>
// all the following convert to std::vector<BoostStore>
//	std::string testjson="[ 1, true ]";
//	std::string testjson="[ 1, 1.1, true ]";
//	std::string testjson="[ 1, 2.2, \"three\"]";
//	std::string testjson="[ 1, null ]";
//	std::string testjson="[ 1, true, null ]";
//	std::string testjson="[ 1, true, null, \"potato\" ]";
	std::string testjson="[ [1,2,3], [4.4,5.5,6.6] ]";

	
	BoostStore store{};
	JSONP parser{};
	bool ok = parser.Parse(testjson, store);
	std::cout<<"parser ok? "<<ok<<std::endl;
	std::cout<<"Store contents:\n";
	std::cout<<"================"<<std::endl;
	store.Print(false);
	std::cout<<"================"<<std::endl;
	
	return 0;
}
