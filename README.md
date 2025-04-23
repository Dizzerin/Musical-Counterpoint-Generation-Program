# Musical Counterpoint Generation Program
This is a C++ program which randomly generates a lower voice and then generates melodic counterpoint for a corresponding upper voice according to the user's desired specifications.

Counterpoint Definition: "The art or technique of setting, writing, or playing a melody or melodies in conjunction with another, according to fixed rules." (Source: Oxford Language Dictionaries)

# User operation instructions
Operation of this program is fairly simlly and straight forward.  Simply:
* Run the program
* Follow the on screen instructions to choose the specifics of your desired counterpoint generation
* Open www.hacklily.org in your browser
* Copy the text in the generated output file
* Paste it in the broswer window
* Admire the beauty (and click the play button at the top if you wish)

# Known bugs
* While the program functionally works fine as it is, there is a small "bug" in that the generated output is not always exactly how it would be written in normal music.  While the notes written and pitches produced are correct, this program will write a sharp instead of a flat for some notes in some flat keys.  The reason for this is known, but as it wasn't a functional limitation to the program, it was lower priority and didn't get fixed in time.
* There is also a bug where some notes are sometimes put in the wrong octave.  This can then break the logic for the counterpoint generation of future notes.
