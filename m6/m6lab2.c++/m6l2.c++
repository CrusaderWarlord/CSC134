#include <iostream>
#include <string>
using namespace std;

// Constants for rooms and directions
const int NUM_ROOMS = 5;
const int NUM_DIRECTIONS = 4;
const int NO_CONNECTION = -1;

// Direction indices
const int NORTH = 0;
const int EAST = 1;
const int SOUTH = 2;
const int WEST = 3;

// Room indices
const int CENTRAL_CAMP = 0;
const int NORTH_SCOUT = 1;
const int EAST_SUPPLY = 2;
const int WEST_FORGE = 3;
const int SOUTH_ENTRYWAY = 4;
const int CEMETERY = 5;

// Function declarations
void printRoom(string roomNames[], string roomDescriptions[], int room);
void printExits(int connections[][NUM_DIRECTIONS], int room);
int commandToDirection(const string& command);

// =================================================================
// M6LAB2: The Orc Camp Map - Module 6: Arrays
// =================================================================
//
// THE BIG IDEA
// Our orc camp has 5 areas. Areas connect to neighbors via N / E / S / W.
// We need a way to answer: "If I'm in room X and I move north, where do I end up?"
//
// The answer: an ADJACENCY LIST stored as a 2D array.
// connections[fromRoom][direction] = destination room
//
// We ALSO use PARALLEL ARRAYS to hold each room's name and description.
//
// =================================================================

int main()
{
	// ----- Parallel arrays: both indexed by Room -----
	// roomNames[CENTRAL_CAMP] and roomDescriptions[CENTRAL_CAMP] describe the same place.
	string roomNames[NUM_ROOMS] = {
		"Central Camp",
		"North Scout Post",
		"East Stables And Storage",
		"West Blacksmith Forge",
		"South Entryway"
	};

	string roomDescriptions[NUM_ROOMS] = {
		"The heart of the orc camp. Tents circle a roaring bonfire. War banners snap in the wind, The leader and war room are beneath the well while the tower up noth decives potential enemies.",
		"A lookout post facing north. Scouts sharpen axes on weathered stone. Smoke signals rise to the sky, the tower stands tall, enemies will think the leader is up there.",
		"Stables for keeping mounts and supplies for raiding elven lands.",
		"A forge bellows with heat and flame. Blacksmiths hammer weapons on anvils. Sparks fly like angry fireflies, Axe launchers are the main product of the forge.",
		"The entrance to the orc camp. A wide path leads into the heart of the settlement."
	};

	// ----- The adjacency table (a 2D array) -----
	// connections[fromRoom][direction] = destination room (or NO_CONNECTION).
	int connections[NUM_ROOMS][NUM_DIRECTIONS];

	// Step 1: fill every cell with NO_CONNECTION. Clean slate.
	for (int i = 0; i < NUM_ROOMS; i++) {
		for (int d = 0; d < NUM_DIRECTIONS; d++) {
			connections[i][d] = NO_CONNECTION;
		}
	}

	// Step 2: Connect the rooms
	// Central Camp connections
	connections[CENTRAL_CAMP][NORTH] = NORTH_SCOUT;
	connections[CENTRAL_CAMP][EAST] = EAST_SUPPLY;
	connections[CENTRAL_CAMP][WEST] = WEST_FORGE;
	connections[CENTRAL_CAMP][SOUTH] = SOUTH_ENTRYWAY;

	// Outposts connect back to central camp
	connections[NORTH_SCOUT][SOUTH] = CENTRAL_CAMP;
	connections[EAST_SUPPLY][WEST] = CENTRAL_CAMP;
	connections[WEST_FORGE][EAST] = CENTRAL_CAMP;
	connections[SOUTH_ENTRYWAY][NORTH] = CENTRAL_CAMP;
    connections[WEST_FORGE][NORTH] = CEMETERY;
    connections[CEMETERY][SOUTH] = WEST_FORGE;

	// Step 3: Run the game loop
	int currentRoom = CENTRAL_CAMP;

	cout << "\n=== Welcome to the Orc Camp ===" << endl;
	cout << "You are an orc warrior. Explore the camp." << endl;
	cout << "Commands: north, south, east, west (or n, s, e, w), look, quit\n" << endl;

	while (true) {
		// Show current room info
		printRoom(roomNames, roomDescriptions, currentRoom);
		printExits(connections, currentRoom);

		// Get player command
		cout << "> ";
		string command;
		cin >> command;

		if (command == "quit") {
			break;
		}
		else if (command == "look") {
			// Just re-describe this room
			cout << "\n" << roomDescriptions[currentRoom] << "\n" << endl;
		}
		else {
			// Try to move in a direction - one array lookup.
			int direction = commandToDirection(command);
			if (direction == -1) {
				cout << "That's not a direction I understand." << endl;
			}
			else {
				int next = connections[currentRoom][direction];
				if (next == NO_CONNECTION) {
					cout << "A wall of darkness blocks you." << endl;
				}
				else {
					currentRoom = next;
					cout << "\n";
				}
			}
		}
	}

	cout << "\nYou leave the camp and fade into the wilderness. Farewell, warrior." << endl;
	return 0;
}

// =================================================================
// Function definitions
// =================================================================

// Print the current room's name and description.
void printRoom(string roomNames[], string roomDescriptions[], int room)
{
	cout << "\n[" << roomNames[room] << "]\n";
	cout << roomDescriptions[room] << "\n" << endl;
}

// Print available exits for this room.
// Arrays come in "by reference" even though the syntax hides it.
// The compiler needs to know how wide each row is to do the math.
void printExits(int connections[][NUM_DIRECTIONS], int room)
{
	const string dirNames[NUM_DIRECTIONS] = { "north", "east", "south", "west" };
	cout << "Exits: ";
	bool any = false;
	for (int d = 0; d < NUM_DIRECTIONS; d++) {
		if (connections[room][d] != NO_CONNECTION) {
			if (any) cout << ", ";
			cout << dirNames[d];
			any = true;
		}
	}
	if (!any) cout << "(none)";
	cout << endl;
}

// Turn a typed command into a direction index, or -1 if it isn't a direction.
// Keeping this in its own function means the game loop doesn't drown in
// four near-identical if/else branches.
int commandToDirection(const string& command)
{
	if (command == "north" || command == "n") return NORTH;
	if (command == "east" || command == "e") return EAST;
	if (command == "south" || command == "s") return SOUTH;
	if (command == "west" || command == "w") return WEST;
	return -1;
}