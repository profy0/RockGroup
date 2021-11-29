class song : public group {

private:
	std::string nameOfSong;
	int dateOfCreation;

public:
	song() {}
	song(std::string nameOfGroup, std::string nameOfSong, int dateOfCreation) : group(nameOfGroup) {
		setNameOfSong(nameOfSong);
		setDateOfCreation(dateOfCreation);
	}
	void setNameOfSong(std::string nameOfSong) {
		this->nameOfSong = nameOfSong;
	}
	void setDateOfCreation(int dateOfCreation) {
		if (dateOfCreation <= 0 || dateOfCreation > 2021) throw std::exception("Wrong date!");
		this->dateOfCreation = dateOfCreation;
	}
	std::string getNameOfSong() {
		return nameOfSong;
	}
	int getDateOfCreation() {
		return dateOfCreation;
	}
	friend std::ostream& operator<< (std::ostream& out, const song& Song);
};

std::ostream& operator<< (std::ostream& out, const song& Song) {
	out << "Song name: " << Song.nameOfSong << "\n" << "Date of creation: " << Song.dateOfCreation << "\n";
	return out;
}