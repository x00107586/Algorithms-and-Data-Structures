#include <map>
#include <string>
#include <utility> 
#include <fstream> 
#include <iostream> 
using namespace std;

int main()
{
	
	int numberOfRatings, rating;
	string name;
	map<string, int> totalRatings;  // Create a map to count the ratings
	map<string, int> counts;         // Create a map to count the reviews

	
	ifstream ratingsFile;    
	ratingsFile.open("Film Ratings.txt");	// Open the file 
	
	if (ratingsFile.fail())
	{
		cout << "Could not find the file you are looking for." << endl;
		exit(1);
	}

	// Store the integers from the file into number
	ratingsFile >> numberOfRatings;
	for (int i = 0; i < numberOfRatings; i++)
	{
		//throw away the new line character to get to next line
		ratingsFile.ignore();
		getline(ratingsFile, name);
		ratingsFile >> rating;

		// Create an iterator and go through the map of ratings and find the movie
		map<string, int>::iterator it;
		it = totalRatings.find(name);

		// Create another iterator to go through the map of review counts
		map<string, int>::iterator it1;
		it1 = counts.find(name);

		// If the iterator is at the end of the map
		if (it == totalRatings.end())
		{
			// Create a pair using the movie name and the rating
			pair<string, int> ratingPair(name, rating);

			// Create another pair for the movie name and the number of times its been reviewed, set initial value to 1.
			pair<string, int> countPair(name, 1);
			
			// Add the pair to totalRatings.
			totalRatings.insert(ratingPair);
			// Add the pair tp counts
			counts.insert(countPair);
		}
		else
		{
			// Set the iterator rating to the value in the rating variable
			it->second += rating;
			// Set the iterator count to 1
			it1->second += 1;
		}
	}

	cout << "---------------------------" << endl;
	cout << "Reviews and Average Ratings" << endl;
	cout << "---------------------------" << endl;
	// Iterate over the map(s)   
	map<string, int>::const_iterator ratingIt = totalRatings.begin();
	map<string, int>::const_iterator countIt = counts.begin();
	while (ratingIt != totalRatings.end())
	{
		// Store the first valuein the ratings iterator into a string
		string movie = ratingIt->first;
		
		// Print out the string and number of times it has been reviewed
		cout << movie << ": " << countIt->second;
		if (countIt->second == 1)
		{
			cout << " review," << endl << "Average rating of: ";
		}
		else
		{
			cout << " reviews," << endl << "Average rating of: ";
		}

		// Setting the decimal point precision
		cout << fixed;
		cout.precision(1);

		// Storing iterator values into variables
		double val1 = ratingIt->second;
		double val2 = countIt->second;
		double avg = (val1 / val2);
		// Calculating and printing the average
		cout << avg << " " << endl << endl;

		// Incrementing iterators
		ratingIt++;
		countIt++;

	}

	system("pause");
	return 0;
}
