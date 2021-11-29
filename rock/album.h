class album : public group {

private:
	std::string nameOfAlbum;
	int dateOfCreation;

public:
	album() {}
	album(std::string nameOfGroup, std::string nameOfAlbum, int dateOfCreation) : group(nameOfGroup) {
		setNameOfAlbum(nameOfAlbum);
		setDateOfCreation(dateOfCreation);
	}
	void setNameOfAlbum(std::string nameOfAlbum) {
		this->nameOfAlbum = nameOfAlbum;
	}
	void setDateOfCreation(int dateOfCreation) {
		if (dateOfCreation <= 0 || dateOfCreation > 2021) throw std::exception("Wrong date!");
		this->dateOfCreation = dateOfCreation;
	}
	std::string getNameOfAlbum() {
		return nameOfAlbum;
	}
	int getDateOfCreation() {
		return dateOfCreation;
	}
	friend std::ostream& operator<< (std::ostream& out, const album& Album);
};

std::ostream& operator<< (std::ostream& out, const album& Album) {
	out << "Album name: " << Album.nameOfAlbum << "\n" << "Date of creation: " << Album.dateOfCreation << "\n";
	return out;
}