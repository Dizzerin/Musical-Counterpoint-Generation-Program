/*
 *	CPTR 142 Group Project (Project 3)
 *	Date: 2/12/19
 *	Authors: Caleb nelson
 *	Authors: Elliott Claus
 *	Description: A program which randomly generates a lower voice and then generates counterpoint for a corresponding upper voice according to the user's desired specifications.
 */

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include "ExportToFile.h"
#include "WritePhrase.h"
#include "HelperFunctions.h"

using namespace std;

int main() {

	// Seed the random number generation
	WritePhrase::setSeed(static_cast<unsigned>(time(0)));

	// Variables for inputs
	string numPhrasesDesired_string;
	int numPhrasesDesired_int;
	string keyDesired;
	int lengthDesired;
	int speciesTypeDesired;
	int beatsPerMeasureDesired; //only 2, 3, or 4 notes --> // only 2/4, 3/4, or 4/4
	string fileNameDesired;
	string authorInfoDesired;
	string titleDesired;

	// Print welcome info
	cout << "Counterpoint Generation Program" << endl;
	cout << "Written by: Caleb Nelson & Elliott Claus" << endl;
	cout << "Date: 2/12/2019" << endl << endl;

	cout << "Welcome to the counterpoint generation program!" << endl;
	cout << "This program will randomly generate a lower voice and then generate counterpoint for a corresponding upper voice according to your desired specifications" << endl;
	cout << "Simply:" << endl;
	cout << "	* Run the program" << endl;
	cout << "	* Follow the on screen instructions to choose the specifics of your desired counterpoint generation" << endl;
	cout << "	* Open www.hacklily.org in your browser" << endl;
	cout << "	* Copy the text in the generated output file" << endl;
	cout << "	* Paste it in the browser window" << endl;
	cout << "	* Admire the beauty(and click the play button at the top if you wish)" << endl << endl;

	// Initialize output class to be populated with phrases for exporting
	ExportToFile myFileExport;
	try {
		// Get number of phrases desired
		while (true) {
			getInput("Enter the number of phrases you want: ", numPhrasesDesired_string);
			// Note: The reason this is a string that is later cast to an int is because if it were an int, cin wouldn't fail in the case of an input like 123abc, it would simply keep the 123
			// so parsing it as a string first makes it possible to verify that there were only numbers in the original input
			if (!isNumeric(numPhrasesDesired_string) || stoi(numPhrasesDesired_string) <= 0) {
				cout << "Error, that is not a valid option, please try again!" << endl;
			}
			else {
				// Convert the string to an int and proceed
				numPhrasesDesired_int = stoi(numPhrasesDesired_string);
				break;
			}
		}
		// Loop through and get specifics for each phrase
		for (int i = 0; i < numPhrasesDesired_int; i++) {
			cout << "Choose specifics for phrase " << to_string(i + 1) << ":" << endl;

			// Output applicable info for selecting key and then get the desired key for this phrase
			cout << "	Options for Key: C, Db, D, Eb, E, F, F#, G, Ab, A, Bb, B" << endl;
			while (true) {
				getInput("	Enter the key you want phrase " + to_string(i + 1) + " to be in: ", keyDesired);
				// Verify first character is uppercase
				keyDesired.at(0) = toupper(keyDesired.at(0));
				if (!(isValidKey(keyDesired))) {
					cout << "	Error, that is not a valid key.  Please try again!" << endl;
				}
				else {
					break;
				}
			}
			// Get species type or this phrase
			while (true) {
				getInput("	Which species type would you like phrase " + to_string(i + 1) + " to be (0, 1 or 2): ", speciesTypeDesired);
				if (!(speciesTypeDesired == 0 || speciesTypeDesired == 1 || speciesTypeDesired == 2)) {
					// If not == 0 or 1 or 2
					cout << "	Error, that is not a valid option, please try again!" << endl;
				}
				else {
					break;
				}
			}
			// Get number of measures for this phrase
			while (true) {
				getInput("	Enter how many measures you want phrase " + to_string(i + 1) + " to consist of: ", lengthDesired);
				if (lengthDesired < 1) {
					cout << "	Error, phrase must be at least 1 measure long.  Please try again!" << endl;
				}
				else {
					break;
				}
			}
			// Print applicable options for notes per measure
			cout << "	Options for notes per measure: 2,";
			if (speciesTypeDesired != 2) cout << " 3,"; // Can't have 3 beats per measure with species 2
			cout << " 4" << endl;
			// Get notes per measure desired
			while (true) {
				getInput("	Enter how many notes you want per measure for phrase " + to_string(i + 1) + ": ", beatsPerMeasureDesired);
				if (!(beatsPerMeasureDesired == 2 || beatsPerMeasureDesired == 4 || beatsPerMeasureDesired == 3)) {
					// If not 2, 3, or 4... its invalid
					cout << "	Error, that is not a valid option, please try again!" << endl;
				}
				else if (speciesTypeDesired == 2 && beatsPerMeasureDesired == 3) {
					// Furthermore, if species is type 2 and beats per measure is 3... also invalid (3/4 timing does not work with species type 2)
					cout << "	Error, you cannot have 3 beats per measure when using species type 2.  Please try again!!" << endl;
				}
				else {
					break;
				}
			}

			// Write this phrase and add it to the file to be exported
			WritePhrase phrase(keyDesired, lengthDesired, speciesTypeDesired, beatsPerMeasureDesired);
			phrase.writeThePhrase();
			myFileExport.addPhrase(phrase.getPhrase());

		} // End of loop for getting specifics of each phrase

		getInput("Enter your desired output filename: ", fileNameDesired);
		getInput("Enter the composer of this piece: ", authorInfoDesired);
		getInput("Enter the title for this piece: ", titleDesired);

		myFileExport.setFileName(fileNameDesired);
		myFileExport.setComposer(authorInfoDesired);
		myFileExport.setTitle(titleDesired);
		myFileExport.WriteOutput();

	} // End of try block
	catch (runtime_error& exception) {
		cout << exception.what() << endl;
	}

	return 0;
}
