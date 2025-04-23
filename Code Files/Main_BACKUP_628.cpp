/*
 *	CPTR 142 Group Project (Project 3)
 *	Date: 2/12/19
 *	Authors: Caleb nelson
 *	Authors: Elliott Claus
 *	Description: 
 *
 */

/*
 * Note, please read the readme for coding standards used in this project
 * (I haven't created an official readme yet, so I'll put some quick notes here)
 * 
 * For anything that is not done yet, is currently being worked on, or needs to be done, please mark with a //TODO comment
 * don't use //FIXME, as Visual Studio will recognize //TODO comments and format them differently and they will also show up in the task list explorer
 * so it is easy to see what needs to be done and where etc.  Other recognized keywords are HACK, TODO, UNDONE, and UnresolvedMergeConflict.
 * To view the task list explorer, you can use the keyboard shortcut CTRL+\,T
 * or go to the menu at the top and select view, then other windows, and then task list near the bottom.  Double clicking on any todo item in the task list will take you 
 * to the location of that item
 * 
 * All standard variables will be named using camelCase
 * All classes will be named using UpperCamelCase
 * All global variables will be ALL_CAPS
 * Most all braces and indentations will follow K&R style
 * 
 * There are many more of these types of things we can choose what we want to follow, it's just helpful to follow a standard as the code looks better
 * and is easier to read and understand, for example all methods (functions within a class) may follow one naming conventions while all functions (outside of classes) may follow
 * another so it is easy to tell if a given function is part of a class or not.  Also can be useful to tell if some given name is an enum or a class or a struct etc. with just a glance
 * based off of the naming convention followed.  ReSharper will keep track of all this for us once we set it up and make it really easy to remember what style to use when by
 * underlining and giving suggestions when the style is not followed.  It also also really easy to rename/refactor any variable or class later, you can simply right click on it and
 * select refactor, or have your text cursor in the name and hit F2 to refactor it and this will rename it everywhere it occurs.
 * ReSharper also will do automatic code formatting following the predefined coding styles.  It also makes it really easy to create new classes and to implement functions and methods
 * and keep them organized in ascending order in a separate .h file etc.  This may sound like a lot or overwhelming but its really all quite simple and really nice once you see how
 * it all works, so we'll just have to meet sometime and I can show you guys some of the cool stuff really quick.  It makes coding so much nicer, you can also easily move lines around
 * or see ever place a specific variable or class or function etc. is used etc.  The debugger in this program is also one of the best in the world, you can do things like
 * change the value of variables live while the program is running etc.
 * 
 * Also there is an automatically generated ClassDiagram at the top you can view if you want.  This Diagram's style can be changed and is automatically updated as classes
 * are outlined in the code.  It can also be easily exported to an image or PDF if we want to use it.  Up to you guys though.
 * 
 * All code and function documentation will be done using Doxygen tags -- this is again because it integrates nicely with Visual Studio.
 * For example. when you are writing code to call a function or are hovering over a function, VS will show you
 * what that function does, its description, its pre and post conditions, what it returns, and a description of each parameter and its purpose etc.
 * or whatever else you have documented about it using the doxygen tags
 * The full list of available tags can be found here: http://www.doxygen.nl/manual/commands.html
 * But the main ones we will use are:
 * @brief - http://www.doxygen.nl/manual/commands.html#cmdbrief
 * @param <parameter name> - http://www.doxygen.nl/manual/commands.html#cmdparam
 * @return - http://www.doxygen.nl/manual/commands.html#cmdreturn
 * @pre - http://www.doxygen.nl/manual/commands.html#cmdpre
 * @post - http://www.doxygen.nl/manual/commands.html#cmdpost
 * Note: the comment will need to be of the style that starts with "/ **" (without spaces) for these tags to work properly -- see below for an example
 * 
 * All comments will start with a space and capital letter after the //
 * // Like this
 * 
 */

// Function documentation outline example
/**
 * @brief
 *
 *
 * @pre
 *
 *
 * @post
 *
 *
 * @return
 *
 *
 * @param
 *
 */


#include <iostream>
#include <vector>
#include <string>
#include "ExportToFile.h"
#include "GenerateLowerVoice.h"
#include "SpeciesOne.h"
#include "WritePhrase.h"
#include "Phrase.h"
// #include "Note.h"
// #include "WritePhrase.h"
// #include "SpeciesTwo.h"

using namespace std;

//HACK TEMP DECLARATION
void GenerateNoteEnum();
void GenerateNoteConversionCases();
string getSuffix(int keyLabelNumber);
void tests();
void tests2();

int main() {

	WritePhrase::setSeed(12);
	try {
<<<<<<< HEAD
		//tests1();	// Tests ExportToFile
		tests2();	// Tests WritePhrase
			
=======
	tests2();			// testing out class WritePhrase
		//tests();
		
>>>>>>> 494c13c9589d909294fb5c2b5603f97c55553848
	}
	catch (runtime_error &exception) {
		cout << exception.what() << endl;
	}

	return 0;
}

/**
 * @brief
 * This function is used to generate the code for the Note enum -- please don't remove this function as we may want to use it later
 */
void GenerateNoteEnum() {
	char letter = 'A';
	int keyNumber = 0;
	int keyLabelNumber = 0;

	for (; keyNumber < 88; keyNumber++) {

		// Check and update letter and keyLabelNumber
		if (letter == 'H') letter = 'A';
		if (letter == 'C') keyLabelNumber++;

		// Print note assignment line for current note
		cout << "Note_" << letter << keyLabelNumber << " = " << keyNumber << "," << endl;

		// If necessary, print note assignment lines for sharps and flats
		if (letter != 'B' && letter != 'E' && keyNumber < 87) {
			keyNumber++;
			// Print note assignment line for current letter's sharp
			cout << "Note_" << letter << keyLabelNumber << "_sharp" << " = " << keyNumber << "," << endl;
			// Print note assignment line for next letter's flat
			char nextLetter = letter + 1;
			if (nextLetter == 'H') nextLetter = 'A';
			cout << "Note_" << nextLetter << keyLabelNumber << "_flat" << " = " << keyNumber << "," << endl;
		}

		// Increment values
		letter++;
	}
}
/**
 * @brief
 * This function is used to generate the code for the ExportToFile::convertNoteToOutput function -- please don't remove this function as we may want to use it later
 */
void GenerateNoteConversionCases() {
	char letter = 'A';
	int keyNumber = 0;
	int keyLabelNumber = 0;

	for (; keyNumber < 88; keyNumber++) {

		// Check and update letter and keyLabelNumber
		if (letter == 'H') letter = 'A';
		if (letter == 'C') keyLabelNumber++;

		// Print case for current note
		//TODO NOT DONE WITH THIS
		cout << "case Note_" << letter << keyLabelNumber << ":" << endl;
		cout << "	return \"" << static_cast<char>(tolower(letter)) << getSuffix(keyLabelNumber) << "\" + to_string(note.getLength());" << endl;
		cout << "	break;" << endl;

		/*
		 * case Note_A0:
		 *		return "a,," + to_string(note.getLength());
		 *		break;
		 */

		 // If necessary, print note assignment lines for sharps and flats
		if (letter != 'B' && letter != 'E' && keyNumber < 87) {
			keyNumber++;
			// Print case for current note's sharp
			cout << "case Note_" << letter << keyLabelNumber << "_sharp:" << endl;
			cout << "	return \"" << static_cast<char>(tolower(letter)) << "is" << getSuffix(keyLabelNumber) << "\" + to_string(note.getLength());" << endl;
			cout << "	break;" << endl;

			// Commented this out because it is unnecessary, as this note is the same as the one above and you can't have two options for the same thing in a switch statement
			// // Print case for next note's flat
			// char nextLetter = letter + 1;
			// if (nextLetter == 'H') nextLetter = 'A';
			// cout << "case Note_" << nextLetter << keyLabelNumber << "_flat:" << endl;
			// cout << "	return \"" << static_cast<char>(tolower(letter)) << "es" << getSuffix(keyLabelNumber) << "\" + to_string(note.getLength());" << endl;
			// cout << "	break;" << endl;
		}

		// Increment values
		letter++;
	}
}
/**
 * @brief
 * This function is a helper function for the one above used to generate the code for the ExportToFile::convertNoteToOutput function -- please don't remove this function as we may want to use it later
 */
string getSuffix(int keyLabelNumber) {
	switch (keyLabelNumber) {
	case 0:
		return ",,,";
		break;
	case 1:
		return ",,";
		break;
	case 2:
		return ",";
		break;
	case 3:
		return "";
		break;
	case 4:
		return "'";
		break;
	case 5:
		return "''";
		break;
	case 6:
		return "'''";
		break;
	case 7:
		return "''''";
		break;
	case 8:
		return "'''''";
		break;
	default:
		throw runtime_error("Error could not get proper suffix when converting NoteType to output for lily pond!");
	}
}

void tests() {

	GenerateNoteEnum();
	
	GenerateNoteConversionCases();

	// Test Final Export function
		Note note1(Note_C4, 4);
		Note note2(Note_C4, 2);
		Note note3(Note_D4, 4);
		Note note4(Note_D4, 2);

		vector<Note*> upperPhrase1 = { &note1, &note2 };
		vector<Note*> lowerPhrase1 = { &note3, &note4 };
		vector<Note*> upperPhrase2 = { &note2, &note1 };
		vector<Note*> lowerPhrase2 = { &note4, &note3 };

		//	Create some phrases
		Phrase phrase1(upperPhrase1, lowerPhrase1);
		Phrase phrase2(upperPhrase2, lowerPhrase2);

		ExportToFile exportTest("lilyPondOutput1", "noice title", "caleb is a great composer");
		exportTest.addPhrase(&phrase1);
		exportTest.addPhrase(&phrase2);
		// export
		exportTest.WriteOutput();

}

void tests2() {
	/*
	GenerateLowerVoice lvTest1;
	lvTest1.printLowerVoice();
	GenerateLowerVoice lvTest2(14);
	lvTest2.printLowerVoice();
	cout << endl << endl;

	SpeciesOne tijat;
	tijat.writeImitativeTwoVoices();
	cout << endl;
	tijat.writeImitativeTwoVoices(12);
	cout << endl;

	for (int i = 0; i < 10; i++) {
		GenerateLowerVoice test(12);
		test.printLowerVoice();
	}
	*/
	/*
	WritePhrase phrase1("C", 3);
	phrase1.writeThePhrase();
	phrase1.printPhraseI();
	phrase1.calculateInterval();
	cout << endl;
	phrase1.printPhraseN();
	cout << endl;
	
	WritePhrase phrase2("D", 3);
	phrase2.setSpeciesType(0);
	phrase2.writeThePhrase();
	phrase2.printPhraseI();
	phrase2.calculateInterval();
	cout << endl;
	phrase2.printPhraseN();

	WritePhrase phrase3("Bb", 3);
	phrase3.writeThePhrase();
	phrase3.printPhraseI();
	phrase3.calculateInterval();
	cout << endl;
	phrase3.printPhraseN();
	cout << endl;
	*/
	WritePhrase phrase4("D", 4);
	phrase4.setSpeciesType(2);
	phrase4.writeThePhrase();
	phrase4.printPhraseI();
	phrase4.calculateInterval();
	cout << endl;
	phrase4.printPhraseN();
	

	WritePhrase phrase5("C", 3);
	phrase5.setSpeciesType(2);
	phrase5.writeThePhrase();
	phrase5.printPhraseI();
	cout << endl;
	phrase5.printPhraseN();

	//Phrase phrase11(phrase1.getUpperVoice(), phrase1.getLowerVoice(), phrase1.getKey(), phrase1.getTimeSignature());
	//Phrase phrase22(phrase2.getUpperVoice(), phrase2.getLowerVoice(), phrase2.getKey(), phrase2.getTimeSignature());
	//Phrase phrase33(phrase3.getUpperVoice(), phrase3.getLowerVoice(), phrase3.getKey(), phrase3.getTimeSignature());
	Phrase phrase44(phrase4.getUpperVoice(), phrase4.getLowerVoice(), phrase4.getKey(), phrase4.getTimeSignature());
	Phrase phrase55(phrase5.getUpperVoice(), phrase5.getLowerVoice(), phrase5.getKey(), phrase5.getTimeSignature());


	ExportToFile exportTest("lilyPondOutput1.9", "SpeciesTwo test part 4", "TheProgarm (duh)");
	//exportTest.addPhrase(&phrase11);
	//exportTest.addPhrase(&phrase22);
	//exportTest.addPhrase(&phrase33);
	exportTest.addPhrase(&phrase44);
	exportTest.addPhrase(&phrase55);
	// export
	exportTest.WriteOutput();
}