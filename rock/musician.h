class musician : public group {

private:
	std::string nameOfMusician;
	std::string musicalInstrument;
	int ageOfMusician;

public:
	musician() {}
	musician(std::string nameOfGroup, std::string nameOfMusician, std::string musicalInstrument, int ageOfMusician) : group(nameOfGroup) {
		setNameOfMusician(nameOfMusician);
		setMusicalInstrument(musicalInstrument);
		setAgeOfMusician(ageOfMusician);
	}
	void setNameOfMusician(std::string nameOfMusician) {
		this->nameOfMusician = nameOfMusician;
	}
	void setMusicalInstrument(std::string musicalInstrument) {
		this->musicalInstrument = musicalInstrument;
	}
	void setAgeOfMusician(int ageOfMusician) {
		if (ageOfMusician < 0) throw std::exception("Wrong age!");
		this->ageOfMusician = ageOfMusician;
	}
	std::string getNameOfMusician() {
		return nameOfMusician;
	}
	std::string getMusicalInstrument() {
		return musicalInstrument;
	}
	int getAgeOfMusician() {
		return ageOfMusician;
	}
	friend std::ostream& operator<< (std::ostream& out, const musician& Musician);
};

std::ostream& operator<< (std::ostream& out, const musician& Musician) {
	out << "Musician's name: " << Musician.nameOfMusician << "\n" << "Musical Instrument: " << Musician.musicalInstrument << "\n" << "Age: " << Musician.ageOfMusician << "\n";
	return out;
}