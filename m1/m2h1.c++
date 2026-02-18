// Get Variables

double number_of_guests, number_of_slices_available, number_of_slices_needed, number_of_pizzas;
double number_of_remaining_slices;

// Do calculations

number_of_slices_needed = number_of_guests * 3; 
number_of_slices_available = number_of_pizzas / 8;
number_of_remaining_slices = number_of_slices_available - number_of_slices_needed;

//Get how many pizza slices are needed

cout << "how many guests do you have";
cin >> number_of_guests;

cout << "how many pizzas are you getting";
cin >> number_of_pizzas;

cout << "You will need " << number_of_slices_needed << " slices of pizza"
cout << "You have " << number_of_slices_available << " slices of pizza"