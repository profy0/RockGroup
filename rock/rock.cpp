#include <iostream>
#include <string>
#include <vector>
#include "group.h"
#include "album.h"
#include "song.h"
#include "musician.h"

using namespace std;

int main() {

	cout << "Enter the name of the music group: ";
	string name;
	getline(cin, name);
	group coolGroup(name);
	cout << "Enter the number of group members: ";
	int n;
	cin >> n;
	cin.ignore(256, '\n');
	vector <musician> members;
	for (int i = 0; i < n; i++) {
		cout << "Enter information about the " << i + 1 << " musician.\n";
		musician now;
		string nameOfMusician, musicalInstrument;
		int ageOfMusician;
		cout << "Enter the musician's name: ";
		getline(cin, nameOfMusician);
		cout << "Enter the musical instrument on which this musician plays: ";
		getline(cin, musicalInstrument);
		cout << "Enter the age of the musician: ";
		cin >> ageOfMusician;
		cin.ignore(256, '\n');
		now.setNameOfMusician(nameOfMusician);
		now.setMusicalInstrument(musicalInstrument);
		try {
			now.setAgeOfMusician(ageOfMusician);
		}
		catch (exception a) {
			cout << a.what();
			exit(0);
		}
		members.push_back(now);
	}
	cout << "Enter album information.\n";
	vector <album> albums;
	cout << "Enter the number of albums: ";
	cin >> n;
	cin.ignore(256, '\n');
	for (int i = 0; i < n; i++) {
		cout << "Enter information about the " << i + 1 << " album.\n";
		album now;
		string nameOfAlbum;
		int dateOfCreation;
		cout << "Enter the album name: ";
		getline(cin, nameOfAlbum);
		cout << "Enter the creation date of the album: ";
		cin >> dateOfCreation;
		cin.ignore(256, '\n');
		now.setNameOfAlbum(nameOfAlbum);
		try {
			now.setDateOfCreation(dateOfCreation);
		}
		catch (exception a) {
			cout << a.what();
			exit(0);
		}
		albums.push_back(now);
	}
	cout << "Enter information about the songs.\n";
	vector <song> songs;
	cout << "Enter the number of songs: ";
	cin >> n;
	cin.ignore(256, '\n');
	for (int i = 0; i < n; i++) {
		cout << "Enter information about the " << i + 1 << " song.\n";
		song now;
		string nameOfSong;
		int dateOfCreation;
		cout << "Enter the song name: ";
		getline(cin, nameOfSong);
		cout << "Enter the creatin date of the song: ";
		cin >> dateOfCreation;
		cin.ignore(256, '\n');
		now.setNameOfSong(nameOfSong);
		try {
			now.setDateOfCreation(dateOfCreation);
		} 
		catch (exception a) {
			cout << a.what();
			exit(0);
		}
		songs.push_back(now);
	}
	cout << "\n\n\n";
	cout << coolGroup;
	cout << "\nMusicians.\n";
	for (int i = 0; i < members.size(); i++) {
		cout << "Musician " << i + 1 << ":\n" << members[i];
	}
	cout << "\nAlbums.\n";
	for (int i = 0; i < albums.size(); i++) {
		cout << "Album " << i + 1 << ":\n" << albums[i];
	}
	cout << "\nSongs.\n";
	for (int i = 0; i < songs.size(); i++) {
		cout << "Song " << i + 1 << ":\n" << songs[i];
	}
}
