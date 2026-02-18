// Declare variables

double number_of_pizzas_ordered, number_of_guests, number_of_slices_needed;
double number_of_slices_available, number_of_slices_remaining;


//calculations

number_of_slices_available = number_of_pizzas_ordered % 8;
number_of_slices_needed = number_of_guests * 3;

cin >> number_of_pizzas_ordered endl;

cout << "You have " << number_of_slices_available << " pizza slices" endl;
cin >> number_of_guests;
cout << "You will need " << number_of_slices_needed << "pizza slices." endl;