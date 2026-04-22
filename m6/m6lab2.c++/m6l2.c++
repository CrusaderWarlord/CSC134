#include <iostream>
#include <string>
using namespace std;

// Constants for rooms and directions
const int NUM_ROOMS = 6;
const int NUM_DIRECTIONS = 4;
const int NO_CONNECTION = -1;

// Direction indices
const int NORTH = 0;
const int EAST = 1;
const int SOUTH = 2;
const int WEST = 3;

// Room indices
const int DESECRATED_ALTAR = 0;
const int DEMON_GUARD_POST = 1;
const int CURSED_LIBRARY = 2;
const int TORTURE_CHAMBER = 3;
const int RUINED_ENTRANCE = 4;
const int FORGOTTEN_CRYPT = 5;
const int ROOFTOP = 6;

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
		"Desecrated Altar",
		"Demon Guard Post",
		"Cursed Library",
		"Torture Chamber",
		"Ruined Entrance",
		"Forgotten Crypt"
		"Rooftop"
	};

	string roomDescriptions[NUM_ROOMS] = {
		"An altar defiled with dark magic. The air is thick with the stench of decay and the whispers of lost souls. Demonic symbols are etched into the stone, pulsing with an eerie glow.",
		"Demonic sentinels patrol this post, their eyes burning with malevolent intent. The ground is scorched from their fiery breath, and the air is filled with the sound of their guttural growls.",
		"Torture devices are strewn across this room, whatever has happened here is best left undisturbed.",
		"The Enryway to the temple. The ground is littered with broken weapons and the remnants of past battles. The air is thick with tension, as if the very walls are watching and waiting for intruders.",
		"A crypt long forgotten, its entrance hidden beneath layers of moss and vines. The air is cold and damp, and the silence is broken only by the distant echoes of dripping water. The walls are adorned with faded murals depicting ancient rituals and forgotten deities.",
		"The roof of the temple, this is where you face the demon lord. The air is thick with the stench of sulfur and brimstone, and the ground is scorched from countless battles. The sky above is perpetually dark, with flashes of lightning illuminating the twisted spires of the temple. The demon lord's throne sits at the center, a grotesque monument to his power and cruelty."
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
	connections[DESECRATED_ALTAR][NORTH] = DEMON_GUARD_POST;
	connections[DESECRATED_ALTAR][EAST] = CURSED_LIBRARY;
	connections[DESECRATED_ALTAR][WEST] = TORTURE_CHAMBER;
	connections[DESECRATED_ALTAR][SOUTH] = RUINED_ENTRANCE;

	// Outposts connect back to central camp
	connections[DEMON_GUARD_POST][SOUTH] = DESECRATED_ALTAR;
	connections[CURSED_LIBRARY][WEST] = DESECRATED_ALTAR;
	connections[TORTURE_CHAMBER][EAST] = DESECRATED_ALTAR;
	connections[RUINED_ENTRANCE][NORTH] = DESECRATED_ALTAR;
    connections[FORGOTTEN_CRYPT][NORTH] = RUINED_ENTRANCE;
    connections[RUINED_ENTRANCE][SOUTH] = FORGOTTEN_CRYPT;

	// Step 3: Run the game loop
	int currentRoom = DESECRATED_ALTAR; // Start in the central camp

	cout << "\n=== Welcome to the Desecrated Temple ===" << endl;
	cout << "You are an adventurer. Explore the temple overrun by demons." << endl;
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

	cout << "\nYou leave the temple, probably better off that way." << endl;
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