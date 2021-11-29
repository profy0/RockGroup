class group {

private:
	std::string nameOfGroup;

public:
	group() {}
	group(std::string name) {
		setName(name);
	}
	void setName(std::string nameOfGroup) {
		this->nameOfGroup = nameOfGroup;
	}
	std::string getName() {
		return nameOfGroup;
	}
	friend std::ostream& operator<< (std::ostream& out, const group& Group);
};

std::ostream& operator<< (std::ostream& out, const group& Group) {
	out << "Group name: " << Group.nameOfGroup << "\n";
	return out;
}