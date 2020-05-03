#include <iostream>
#include <string>
#include <vector>
#include <cctype>
//#include <chrono>
#include <thread>
using namespace std;

enum en_DIRS {NORTH, EAST, SOUTH, WEST};

enum en_ROOMS { STAGING_AREA, TERRAFORMER, MAIN_ENGINEERING, HOLDING_AREA, TECH_CENTER, ALPHA_QUARDENT, RESEARCH_LAB, EVEN_SIMPLER, TERROR_CORE, ALTAR_OF_PAIN, DARK_CITADEL, EYE_OF_THE_STORM, DARK_ENTRIES, BLOOD_KEEP, WATCH_YOUR_STEP, SPAWNED_FEAR, THE_SPIRAL, BREAKDOWN, PITFALLS, BURNT_OFFERINGS, UNHOLY_TEMPLE, THE_ABSOLUTION, HARDCORE, PLAYGROUND, HETIC, OUTPOST_OMEGA, THE_LAIR, IN_THE_VOID, FINAL_JUDGEMENT, PORTAL};

enum en_VERBS {GET, DROP, USE, OPEN, CLOSE, EXAMINE, INVENTORY, LOOK, TRANSPORT, SUPERJUMP};

enum en_NOUNS { FISTS, PISTOL, CHAINSAW, LIGHTINGGUN, RIFLE, GAUSSGUN, BOOMSTICK, BFG, TARDIS, UNMAYKR, ROCKET_LAUNCHER, CRUCIBLE, BALLISTA, CHAINGUN, DOOMBLADE};

const int NONE = 51;
const int DIRS = 4;
const int ROOMS = 30;
const int VERBS = 10;
const int NOUNS = 15;

class player {
private:
	int health;
	int shields;
public:
	void setHealth (int) {
		health = 50;
	}
	int getHealth() {
		return health;
	}
};

class words {
public:
	string word;
	int code;
	words();
	~words();
};

words::words() {
	enum en_VERBS { GET, DROP, USE, OPEN, CLOSE, EXAMINE, INVENTORY, LOOK, TRANSPORT, SUPERJUMP };

}

words::~words() {
	enum en_VERBS { GET, DROP, USE, OPEN, CLOSE, EXAMINE, INVENTORY, LOOK, TRANSPORT, SUPERJUMP };
}

class room {
public:
	string description;
	int exits_to_room[DIRS];
	room();
	~room();
private:
	string roomname;
};

room::room() {
	enum en_ROOMS {STAGING_AREA, TERRAFORMER, MAIN_ENGINEERING, HOLDING_AREA, TECH_CENTER, ALPHA_QUARDENT, RESEARCH_LAB, EVEN_SIMPLER, TERROR_CORE, ALTAR_OF_PAIN,
	DARK_CITADEL, EYE_OF_THE_STORM, DARK_ENTRIES, BLOOD_KEEP, WATCH_YOUR_STEP, SPAWNED_FEAR, THE_SPIRAL, BREAKDOWN, PITFALLS, BURNT_OFFERINGS, UNHOLY_TEMPLE,
	THE_ABSOLUTION, HARDCORE, PLAYGROUND, HETIC, OUTPOST_OMEGA, THE_LAIR, IN_THE_VOID, FINAL_JUDGEMENT, PORTAL};
}

room::~room() {
	enum en_ROOMS {STAGING_AREA, TERRAFORMER, MAIN_ENGINEERING, HOLDING_AREA, TECH_CENTER, ALPHA_QUARDENT, RESEARCH_LAB, EVEN_SIMPLER, TERROR_CORE, ALTAR_OF_PAIN,
	DARK_CITADEL, EYE_OF_THE_STORM, DARK_ENTRIES, BLOOD_KEEP, WATCH_YOUR_STEP, SPAWNED_FEAR, THE_SPIRAL, BREAKDOWN, PITFALLS, BURNT_OFFERINGS, UNHOLY_TEMPLE,
	THE_ABSOLUTION, HARDCORE, PLAYGROUND, HETIC, OUTPOST_OMEGA, THE_LAIR, IN_THE_VOID, FINAL_JUDGEMENT, PORTAL};
}

class noun {
public:
	string word;
	string description;
	int code;
	int location;
	bool can_carry;
	noun();
	~noun();
};

noun::noun() {
	enum en_NOUNS { FISTS, PISTOL, CHAINSAW, LIGHTINGGUN, RIFLE, GAUSSGUN, BOOMSTICK, BFG, TARDIS, UNMAYKR, ROCKET_LAUNCHER, CRUCIBLE, BALLISTA, CHAINGUN, DOOMBLADE };
}

noun::~noun() {
	enum en_NOUNS { FISTS, PISTOL, CHAINSAW, LIGHTINGGUN, RIFLE, GAUSSGUN, BOOMSTICK, BFG, TARDIS, UNMAYKR, ROCKET_LAUNCHER, CRUCIBLE, BALLISTA, CHAINGUN, DOOMBLADE };
}

void set_rooms(room *rms) {
	rms[STAGING_AREA].description.assign("Staging Area");
	rms[STAGING_AREA].exits_to_room[NORTH] = PORTAL;
	rms[STAGING_AREA].exits_to_room[EAST] = FINAL_JUDGEMENT;
	rms[STAGING_AREA].exits_to_room[SOUTH] = TECH_CENTER;
	rms[STAGING_AREA].exits_to_room[WEST] = HARDCORE;

	rms[TERRAFORMER].description.assign("Terraformer");
	rms[TERRAFORMER].exits_to_room[NORTH] = BURNT_OFFERINGS;
	rms[TERRAFORMER].exits_to_room[EAST] = BLOOD_KEEP;
	rms[TERRAFORMER].exits_to_room[SOUTH] = MAIN_ENGINEERING;
	rms[TERRAFORMER].exits_to_room[WEST] = NONE;

	rms[MAIN_ENGINEERING].description.assign("Main Engineering");
	rms[MAIN_ENGINEERING].exits_to_room[NORTH] = TERRAFORMER;
	rms[MAIN_ENGINEERING].exits_to_room[EAST] = HARDCORE;
	rms[MAIN_ENGINEERING].exits_to_room[SOUTH] = NONE;
	rms[MAIN_ENGINEERING].exits_to_room[WEST] = HETIC;

	rms[HOLDING_AREA].description.assign("Holding Area");
	rms[HOLDING_AREA].exits_to_room[NORTH] = ALPHA_QUARDENT;
	rms[HOLDING_AREA].exits_to_room[EAST] = OUTPOST_OMEGA;
	rms[HOLDING_AREA].exits_to_room[SOUTH] = WATCH_YOUR_STEP;
	rms[HOLDING_AREA].exits_to_room[WEST] = NONE;

	rms[TECH_CENTER].description.assign("Tech Center");
	rms[TECH_CENTER].exits_to_room[NORTH] = STAGING_AREA;
	rms[TECH_CENTER].exits_to_room[EAST] = IN_THE_VOID;
	rms[TECH_CENTER].exits_to_room[SOUTH] = PITFALLS;
	rms[TECH_CENTER].exits_to_room[WEST] = THE_ABSOLUTION;

	rms[ALPHA_QUARDENT].description.assign("Alpha Quadrant");
	rms[ALPHA_QUARDENT].exits_to_room[NORTH] = NONE;
	rms[ALPHA_QUARDENT].exits_to_room[EAST] = THE_SPIRAL;
	rms[ALPHA_QUARDENT].exits_to_room[SOUTH] = HOLDING_AREA;
	rms[ALPHA_QUARDENT].exits_to_room[WEST] = NONE;

	rms[RESEARCH_LAB].description.assign("Research Lab");
	rms[RESEARCH_LAB].exits_to_room[NORTH] = NONE;
	rms[RESEARCH_LAB].exits_to_room[EAST] = NONE;
	rms[RESEARCH_LAB].exits_to_room[SOUTH] = TERROR_CORE;
	rms[RESEARCH_LAB].exits_to_room[WEST] = ALTAR_OF_PAIN;

	rms[EVEN_SIMPLER].description.assign("Even Simpler");
	rms[EVEN_SIMPLER].exits_to_room[NORTH] = HETIC;
	rms[EVEN_SIMPLER].exits_to_room[EAST] = NONE;
	rms[EVEN_SIMPLER].exits_to_room[SOUTH] = NONE;
	rms[EVEN_SIMPLER].exits_to_room[WEST] = NONE;

	rms[TERROR_CORE].description.assign("Terror Core");
	rms[TERROR_CORE].exits_to_room[NORTH] = RESEARCH_LAB;
	rms[TERROR_CORE].exits_to_room[EAST] = NONE;
	rms[TERROR_CORE].exits_to_room[SOUTH] = NONE;
	rms[TERROR_CORE].exits_to_room[WEST] = NONE;

	rms[ALTAR_OF_PAIN].description.assign("Alter of Pain");
	rms[ALTAR_OF_PAIN].exits_to_room[NORTH] = NONE;
	rms[ALTAR_OF_PAIN].exits_to_room[EAST] = RESEARCH_LAB;
	rms[ALTAR_OF_PAIN].exits_to_room[SOUTH] = NONE;
	rms[ALTAR_OF_PAIN].exits_to_room[WEST] = PLAYGROUND;

	rms[DARK_CITADEL].description.assign("Dark Citadel");
	rms[DARK_CITADEL].exits_to_room[NORTH] = DARK_ENTRIES;
	rms[DARK_CITADEL].exits_to_room[EAST] = NONE;
	rms[DARK_CITADEL].exits_to_room[SOUTH] = NONE;
	rms[DARK_CITADEL].exits_to_room[WEST] = FINAL_JUDGEMENT;

	rms[EYE_OF_THE_STORM].description.assign("Eye of the Storm");
	rms[EYE_OF_THE_STORM].exits_to_room[NORTH] = BREAKDOWN;
	rms[EYE_OF_THE_STORM].exits_to_room[EAST] = DARK_ENTRIES;
	rms[EYE_OF_THE_STORM].exits_to_room[SOUTH] = FINAL_JUDGEMENT;
	rms[EYE_OF_THE_STORM].exits_to_room[WEST] = PORTAL;

	rms[DARK_ENTRIES].description.assign("Dark Entries");
	rms[DARK_ENTRIES].exits_to_room[NORTH] = PLAYGROUND;
	rms[DARK_ENTRIES].exits_to_room[EAST] = NONE;
	rms[DARK_ENTRIES].exits_to_room[SOUTH] = DARK_CITADEL;
	rms[DARK_ENTRIES].exits_to_room[WEST] = EYE_OF_THE_STORM;

	rms[BLOOD_KEEP].description.assign("Blood Keep");
	rms[BLOOD_KEEP].exits_to_room[NORTH] = WATCH_YOUR_STEP;
	rms[BLOOD_KEEP].exits_to_room[EAST] = PORTAL;
	rms[BLOOD_KEEP].exits_to_room[SOUTH] = HARDCORE;
	rms[BLOOD_KEEP].exits_to_room[WEST] = TERRAFORMER;

	rms[WATCH_YOUR_STEP].description.assign("Watch Your Step");
	rms[WATCH_YOUR_STEP].exits_to_room[NORTH] = HOLDING_AREA;
	rms[WATCH_YOUR_STEP].exits_to_room[EAST] = SPAWNED_FEAR;
	rms[WATCH_YOUR_STEP].exits_to_room[SOUTH] = BLOOD_KEEP;
	rms[WATCH_YOUR_STEP].exits_to_room[WEST] = BURNT_OFFERINGS;

	rms[SPAWNED_FEAR].description.assign("Spawned Fear");
	rms[SPAWNED_FEAR].exits_to_room[NORTH] = OUTPOST_OMEGA;
	rms[SPAWNED_FEAR].exits_to_room[EAST] = BREAKDOWN;
	rms[SPAWNED_FEAR].exits_to_room[SOUTH] = PORTAL;
	rms[SPAWNED_FEAR].exits_to_room[WEST] = WATCH_YOUR_STEP;

	rms[THE_SPIRAL].description.assign("The Spiral");
	rms[THE_SPIRAL].exits_to_room[NORTH] = NONE;
	rms[THE_SPIRAL].exits_to_room[EAST] = THE_LAIR;
	rms[THE_SPIRAL].exits_to_room[SOUTH] = OUTPOST_OMEGA;
	rms[THE_SPIRAL].exits_to_room[WEST] = NONE;

	rms[BREAKDOWN].description.assign("Breakdown");
	rms[BREAKDOWN].exits_to_room[NORTH] = NONE;
	rms[BREAKDOWN].exits_to_room[EAST] = PLAYGROUND;
	rms[BREAKDOWN].exits_to_room[SOUTH] = EYE_OF_THE_STORM;
	rms[BREAKDOWN].exits_to_room[WEST] = NONE;

	rms[PITFALLS].description.assign("Pitfalls");
	rms[PITFALLS].exits_to_room[NORTH] = TECH_CENTER;
	rms[PITFALLS].exits_to_room[EAST] = NONE;
	rms[PITFALLS].exits_to_room[SOUTH] = NONE;
	rms[PITFALLS].exits_to_room[WEST] = UNHOLY_TEMPLE;

	rms[BURNT_OFFERINGS].description.assign("Burnt Offerings");
	rms[BURNT_OFFERINGS].exits_to_room[NORTH] = NONE;
	rms[BURNT_OFFERINGS].exits_to_room[EAST] = WATCH_YOUR_STEP;
	rms[BURNT_OFFERINGS].exits_to_room[SOUTH] = TERRAFORMER;
	rms[BURNT_OFFERINGS].exits_to_room[WEST] = NONE;

	rms[UNHOLY_TEMPLE].description.assign("Unholy Temple");
	rms[UNHOLY_TEMPLE].exits_to_room[NORTH] = THE_ABSOLUTION;
	rms[UNHOLY_TEMPLE].exits_to_room[EAST] = PITFALLS;
	rms[UNHOLY_TEMPLE].exits_to_room[SOUTH] = NONE;
	rms[UNHOLY_TEMPLE].exits_to_room[WEST] = NONE;

	rms[THE_ABSOLUTION].description.assign("The Absolution");
	rms[THE_ABSOLUTION].exits_to_room[NORTH] = NONE;
	rms[THE_ABSOLUTION].exits_to_room[EAST] = TECH_CENTER;
	rms[THE_ABSOLUTION].exits_to_room[SOUTH] = UNHOLY_TEMPLE;
	rms[THE_ABSOLUTION].exits_to_room[WEST] = NONE;

	rms[HARDCORE].description.assign("Hardcore");
	rms[HARDCORE].exits_to_room[NORTH] = BLOOD_KEEP;
	rms[HARDCORE].exits_to_room[EAST] = STAGING_AREA;
	rms[HARDCORE].exits_to_room[SOUTH] = THE_ABSOLUTION;
	rms[HARDCORE].exits_to_room[WEST] = NONE;

	rms[PLAYGROUND].description.assign("Playground");
	rms[PLAYGROUND].exits_to_room[NORTH] = NONE;
	rms[PLAYGROUND].exits_to_room[EAST] = ALTAR_OF_PAIN;
	rms[PLAYGROUND].exits_to_room[SOUTH] = DARK_ENTRIES;
	rms[PLAYGROUND].exits_to_room[WEST] = BREAKDOWN;

	rms[HETIC].description.assign("Hetic");
	rms[HETIC].exits_to_room[NORTH] = NONE;
	rms[HETIC].exits_to_room[EAST] = MAIN_ENGINEERING;
	rms[HETIC].exits_to_room[SOUTH] = EVEN_SIMPLER;
	rms[HETIC].exits_to_room[WEST] = NONE;

	rms[OUTPOST_OMEGA].description.assign("Outpost Omega");
	rms[OUTPOST_OMEGA].exits_to_room[NORTH] = THE_SPIRAL;
	rms[OUTPOST_OMEGA].exits_to_room[EAST] = NONE;
	rms[OUTPOST_OMEGA].exits_to_room[SOUTH] = SPAWNED_FEAR;
	rms[OUTPOST_OMEGA].exits_to_room[WEST] = HOLDING_AREA;

	rms[THE_LAIR].description.assign("The Lair");
	rms[THE_LAIR].exits_to_room[NORTH] = NONE;
	rms[THE_LAIR].exits_to_room[EAST] = NONE;
	rms[THE_LAIR].exits_to_room[SOUTH] = NONE;
	rms[THE_LAIR].exits_to_room[WEST] = THE_SPIRAL;

	rms[IN_THE_VOID].description.assign("In The Void");
	rms[IN_THE_VOID].exits_to_room[NORTH] = FINAL_JUDGEMENT;
	rms[IN_THE_VOID].exits_to_room[EAST] = NONE;
	rms[IN_THE_VOID].exits_to_room[SOUTH] = NONE;
	rms[IN_THE_VOID].exits_to_room[WEST] = TECH_CENTER;

	rms[FINAL_JUDGEMENT].description.assign("Final Judgement");
	rms[FINAL_JUDGEMENT].exits_to_room[NORTH] = EYE_OF_THE_STORM;
	rms[FINAL_JUDGEMENT].exits_to_room[EAST] = DARK_CITADEL;
	rms[FINAL_JUDGEMENT].exits_to_room[SOUTH] = IN_THE_VOID;
	rms[FINAL_JUDGEMENT].exits_to_room[WEST] = STAGING_AREA;

	rms[PORTAL].description.assign("Portal");
	rms[PORTAL].exits_to_room[NORTH] = SPAWNED_FEAR;
	rms[PORTAL].exits_to_room[EAST] = EYE_OF_THE_STORM;
	rms[PORTAL].exits_to_room[SOUTH] = STAGING_AREA;
	rms[PORTAL].exits_to_room[WEST] = BLOOD_KEEP;
}

void set_directions(words *dir) {
	dir[NORTH].code = NORTH;
	dir[NORTH].word = "NORTH";
	dir[EAST].code = EAST;
	dir[EAST].word = "EAST";
	dir[SOUTH].code = SOUTH;
	dir[SOUTH].word = "SOUTH";
	dir[WEST].code = WEST;
	dir[WEST].word = "WEST";
}

void set_verbs(words *vbs) {
	vbs[GET].code = GET;
	vbs[GET].word = "GET";
	vbs[DROP].code = DROP;
	vbs[DROP].word = "DROP";
	vbs[USE].code = USE;
	vbs[USE].word = "USE";
	vbs[OPEN].code = OPEN;
	vbs[OPEN].word = "OPEN";
	vbs[CLOSE].code = CLOSE;
	vbs[CLOSE].word = "CLOSE";
	vbs[EXAMINE].code = EXAMINE;
	vbs[EXAMINE].word = "EXAMINE";
	vbs[INVENTORY].code = INVENTORY;
	vbs[INVENTORY].word = "INVENTORY";
	vbs[LOOK].code = LOOK;
	vbs[LOOK].word = "LOOK";
	vbs[TRANSPORT].code = TRANSPORT;
	vbs[TRANSPORT].word = "TRANSPORT";
	vbs[SUPERJUMP].code = SUPERJUMP;
	vbs[SUPERJUMP].word = "SUPERJUMP";
}

void set_nouns(noun *nns) {
	nns[FISTS].word = "FISTS";
	nns[FISTS].code = FISTS;
	nns[FISTS].description = "a powerfull fist";
	nns[FISTS].can_carry = true;
	nns[FISTS].location = NONE;

	nns[PISTOL].word = "PISTOL";
	nns[PISTOL].code = PISTOL;
	nns[PISTOL].description = "Pistol";
	nns[PISTOL].can_carry = true;
	nns[PISTOL].location = ALPHA_QUARDENT;

	nns[CHAINSAW].word = "CHAINSAW";
	nns[CHAINSAW].code = CHAINSAW;
	nns[CHAINSAW].description = "a warm chainsaw";
	nns[CHAINSAW].can_carry = true;
	nns[CHAINSAW].location = BLOOD_KEEP;

	nns[LIGHTINGGUN].word = "LIGHTINGGUN";
	nns[LIGHTINGGUN].code = LIGHTINGGUN;
	nns[LIGHTINGGUN].description = "Lighting Gun";
	nns[LIGHTINGGUN].can_carry = false;
	nns[LIGHTINGGUN].location = THE_ABSOLUTION;

	nns[RIFLE].word = "RIFLE";
	nns[RIFLE].code = RIFLE;
	nns[RIFLE].description = "a Rifle";
	nns[RIFLE].can_carry = true;
	nns[RIFLE].location = NONE;

	nns[GAUSSGUN].word = "GAUSSGUN";
	nns[GAUSSGUN].code = GAUSSGUN;
	nns[GAUSSGUN].description = "a Gauss Gun";
	nns[GAUSSGUN].can_carry = false;
	nns[GAUSSGUN].location = NONE;

	nns[BOOMSTICK].word = "BOOMSTICK";
	nns[BOOMSTICK].code = BOOMSTICK;
	nns[BOOMSTICK].description = "boomstick";
	nns[BOOMSTICK].can_carry = false;
	nns[BOOMSTICK].location = PORTAL;

	nns[BFG].word = "BFG";
	nns[BFG].code = BFG;
	nns[BFG].description = "the big f*$king gun 9000";
	nns[BFG].can_carry = false;
	nns[BFG].location = FINAL_JUDGEMENT;

	nns[TARDIS].word = "TARDIS";
	nns[TARDIS].code = TARDIS;
	nns[TARDIS].description = "a small Tardis";
	nns[TARDIS].can_carry = false;
	nns[TARDIS].location = NONE;

	nns[UNMAYKR].word = "UNMAYKR";
	nns[UNMAYKR].code = UNMAYKR;
	nns[UNMAYKR].description = "the Unmaykr";
	nns[UNMAYKR].can_carry = false;
	nns[UNMAYKR].location = WATCH_YOUR_STEP;

	nns[ROCKET_LAUNCHER].word = "ROCKET_LAUNCHER";
	nns[ROCKET_LAUNCHER].code = ROCKET_LAUNCHER;
	nns[ROCKET_LAUNCHER].description = "a Rocket Launcher";
	nns[ROCKET_LAUNCHER].can_carry = false;
	nns[ROCKET_LAUNCHER].location = THE_SPIRAL;

	nns[CRUCIBLE].word = "CRUCIBLE";
	nns[CRUCIBLE].code = CRUCIBLE;
	nns[CRUCIBLE].description = "a Crucible";
	nns[CRUCIBLE].can_carry = true;
	nns[CRUCIBLE].location = MAIN_ENGINEERING;

	nns[BALLISTA].word = "BALLISTA";
	nns[BALLISTA].code = BALLISTA;
	nns[BALLISTA].description = "the Ballista";
	nns[BALLISTA].can_carry = false;
	nns[BALLISTA].location = NONE;

	nns[CHAINGUN].word = "CHAINGUN";
	nns[CHAINGUN].code = CHAINGUN;
	nns[CHAINGUN].description = "a Chaingun";
	nns[CHAINGUN].can_carry = false;
	nns[CHAINGUN].location = NONE;

	nns[DOOMBLADE].word = "DOOMBLADE";
	nns[DOOMBLADE].code = DOOMBLADE;
	nns[DOOMBLADE].description = "the Doomblade";
	nns[DOOMBLADE].can_carry = false;
	nns[DOOMBLADE].location = HARDCORE;
}

void section_command(string Cmd, string &wd1, string &wd2) {
	string sub_str;
	vector<string> words;
	char search = ' ';
	size_t i, j;

	for (i = 0; i < Cmd.size(); i++) {
		if (Cmd.at(i) != search)
		{
			sub_str.insert(sub_str.end(), Cmd.at(i));
		}
		if (i == Cmd.size() - 1)
		{
			words.push_back(sub_str);
			sub_str.clear();
		}
		if (Cmd.at(i) == search)
		{
			words.push_back(sub_str);
			sub_str.clear();
		}
	}
	for (i = words.size() - 1; i > 0; i--) {
		if (words.at(i) == " ")
		{
			words.erase(words.begin() + i);
		}
	}
	for (i = 0; i < words.size(); i++) {
		for (j = 0; j < words.at(i).size(); j++) {
			if (islower(words.at(i).at(j)))
			{
				words.at(i).at(j) = toupper(words.at(i).at(j));
			}
		}
	}
	if (words.size() == 0)
	{
		cout << "No command was given.\n";
	}
	if (words.size() == 1)
	{
		wd1 = words.at(0);
	}
	if (words.size() == 2)
	{
		wd1 = words.at(0);
		wd2 = words.at(1);
	}
	if (words.size() > 2)
	{
		cout << "Command is too long. Only type one or two words (direction or verb and noun)\n";
	}
}

void look_around(int loc, room *rms, words *dir, noun *nns) {
	int i;
	cout << "I am in the " << rms[loc].description << ".\n";

	for (i = 0; i < DIRS; i++) {
		if (rms[loc].exits_to_room[i] != NONE)
		{
			cout << "There is an exit " << dir[i].word << " to the " << rms[rms[loc].exits_to_room[i]].description << ".\n";
		}
	}
	for (i = 0; i < NOUNS; i++) {
		if (nns[i].location == loc)
		{
			cout << "I see " << nns[i].description << ".\n";
		}
	}
}
bool parser(int &loc, string wd1, string wd2, words *dir, words *vbs, room *rms, noun *nns) {
	vector<string> inventory;
	vector<string>::iterator changeIter;
	vector<string>::const_iterator readIter;
	string input;
	cout << "Your Current Inventory:\n";
	inventory.push_back("Pistol");
	inventory.push_back("Rifle");
	static bool door_state = false; // false is a closed door
	int i;
	for (i = 0; i < DIRS; i++) {
		if (wd1 == dir[i].word) {
			if (rms[loc].exits_to_room[dir[i].code] != NONE) {
				loc = rms[loc].exits_to_room[dir[i].code];
				cout << "I am now in " << rms[loc].description << ".\n";
				if (loc == STAGING_AREA || loc == TECH_CENTER) {
					nns[STAGING_AREA].location = loc;
				}
				return true;
			}
			else {
				cout << "No exit that way.\n";
				return true;
			}
		}
	}
	int NOUN_MATCH = NONE;
	int VERB_ACTION = NONE;

	for (i = 0; i < VERBS; i++) {
		if (wd1 == vbs[i].word)
		{
			VERB_ACTION = vbs[i].code;
			break;
		}
	}
	if (wd2 != " ") {
		for (i = 0; i < NOUNS; i++) {
			if (wd2 == nns[i].word)
			{
				NOUN_MATCH = nns[i].code;
				break;
			}
		}
	}
	if (VERB_ACTION == NONE)
	{
		cout << "No valid command entered.\n";
		return true;
	}
	if (VERB_ACTION == LOOK)
	{
		look_around(loc, rms, dir, nns);
		return true;
	}
	if (VERB_ACTION == OPEN) {
		if (NOUN_MATCH == STAGING_AREA) {
			if (door_state == false) {
				door_state = true;
				rms[STAGING_AREA].exits_to_room[EAST] = FINAL_JUDGEMENT;
				rms[STAGING_AREA].exits_to_room[NORTH] = PORTAL;
				nns[STAGING_AREA].description.clear();
				nns[STAGING_AREA].description.assign("an open store room door");
				cout << "I have opened the door\n";
				return true;
			}
			else if (door_state == true)
			{
				cout << "The door is already open\n";
				return true;
			}
		}
		else {
			cout << "Opening that is not possible" << endl;
			return true;
		}
	}
	if (VERB_ACTION == GET) {
		cout << "What would you like to add to your inventory?: \n";
		cout << "Dust\n";
		getline(cin, input);
		inventory.push_back(input);
		return true;
	}
	if (VERB_ACTION == DROP) {
		string dropItem;
		cout << "What would you like to drop?:\n ";
		cout << "Chainsaw1\n";
		cout << "Chainsaw2\n";
		cout << "Chainsaw3\n";
		cout << input;
		getline(cin, dropItem);
		if (dropItem == "Chainsaw1" || dropItem == "Chainsaw1") {
			changeIter = inventory.begin();
			inventory.erase(changeIter);
			cout << "\nYour items:\n";
			for (readIter = inventory.begin(); readIter != inventory.end(); readIter++) {
				cout << *readIter << endl;
			}
		}
		else if (dropItem == "Chainsaw2" || dropItem == "Chainsaw2") {
			changeIter = inventory.begin() + 1;
			inventory.erase(changeIter);
			cout << "\nYour items:\n";
			for (readIter = inventory.begin(); readIter != inventory.end(); readIter++) {
				cout << *readIter << endl;
			}
		}
		else if (dropItem == "Chainsaw3" || dropItem == "Chainsaw3") {
			changeIter = inventory.begin() + 2;
			inventory.erase(changeIter);
		 	cout << "\nYour items:\n";
			for (readIter = inventory.begin(); readIter != inventory.end(); readIter++) {
				cout << *readIter << endl;
			}
		}
		else if (dropItem == input) {
			changeIter = inventory.begin() + 3;
			inventory.erase(changeIter);
			cout << "\nYour items:\n";
			for (readIter = inventory.begin(); readIter != inventory.end(); readIter++) {
				cout << *readIter << endl;
			}
		}
		return true;
	}
	if (VERB_ACTION == TRANSPORT) {
		cout << "You are sucked into a portal and are now in the Tech Center." << endl;
		nns[TECH_CENTER].location = loc;
		return true;
	}
	if (VERB_ACTION == SUPERJUMP) {
		cout << "You jumped yourself right back to the start.\n";
		nns[STAGING_AREA].location = loc;
		return true;
	}
	if (VERB_ACTION == INVENTORY) {
		for (readIter = inventory.begin(); readIter != inventory.end(); readIter++) {
			cout << *readIter << endl;
		}
		return true;
	}
	if (VERB_ACTION == EXAMINE) {
		string examineItem;
		cout << en_NOUNS() << endl;
		cout << "What would you like to examine?: \n";
		getline(cin, examineItem);
		if (examineItem == "FISTS") {
			cout << nns[FISTS].description << " - Made popular by a Mr. Nukem.\n";
		}
		else if (examineItem == "PISTOL") {
			cout << nns[PISTOL].description << " - Pew-Pew.\n";
		}
		else if (examineItem == "CHAINSAW") {
			cout << nns[CHAINSAW].description << " - Cuts trees, or demons.\n";
		}
		else if (examineItem == "LIGHTING GUN") {
			cout << nns[LIGHTINGGUN].description << " - Thor in gun form.\n";
		}
		else if (examineItem == "RIFLE") {
			cout << nns[RIFLE].description << " - shoots bullets really far.\n";
		}
		else if (examineItem == "GAUSS GUN") {
			cout << nns[GAUSSGUN].description << " - engery weapon. Left by Freeman.\n";
		}
		else if (examineItem == "BOOMSTICK") {
			cout << nns[BOOMSTICK].description << " - a shotgun for kicking ass!\n";
		}
		else if (examineItem == "BFG 9000") {
			cout << nns[BFG].description << " - The biggest f*%king gun you will ever see!\n";
		}
		else if (examineItem == "TARDIS") {
			cout << nns[TARDIS].description << " - left here by some doctor.\n";
		}
		else if (examineItem == "UNMAYKR") {
			cout << nns[UNMAYKR].description << " - nonhuman weapon.\n";
		}
		else if (examineItem == "ROCKET LAUNCHER") {
			cout << nns[ROCKET_LAUNCHER].description << " - shoots rockets.....\n";
		}
		else if (examineItem == "CRUCIBLE") {
			cout << nns[CRUCIBLE].description << " - engery blade.\n";
		}
		else if (examineItem == "BALLISTA") {
			cout << nns[BALLISTA].description << " - good a killing flying anything.\n";
		}
		else if (examineItem == "CHAINGUN") {
			cout << nns[CHAINGUN].description << " - shots bullets really, really fast.\n";
		}
	}
	return true;
}

int main() {
	string command;
	string word_1;
	string word_2;

	room rooms[ROOMS];
	set_rooms(rooms);

	words directions[DIRS];
	set_directions(directions);

	words verbs[VERBS];
	set_verbs(verbs);

	noun nouns[NOUNS];
	set_nouns(nouns);

	int location = STAGING_AREA;

	while (word_1 != "QUIT") {
		command.clear();
		cout << "What shall I do?\n";
		getline(cin, command);

		word_1.clear();
		word_2.clear();

		section_command(command, word_1, word_2);

		if (word_1 != "QUIT") {
			parser(location, word_1, word_2, directions, verbs, rooms, nouns);
		}
	}
	return 0;
}
