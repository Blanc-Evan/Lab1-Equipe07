#pragma once
#include <string>

class Concepteur
{
public:
	//[DONE]
	//TODO: Un constructeur par d�faut et un constructeur param�tr�.
	Concepteur() = default;

	Concepteur(const std::string nom, const unsigned anneeNaissance, const std::string pays) {

		this->nom_ = nom;
		this->anneeNaissance_ = anneeNaissance;
		this->pays_ = pays;
	}

	Concepteur(const Concepteur& c) : Concepteur(c.nom_, c.anneeNaissance_, c.pays_) {};

	const std::string& getNom() const     { return nom_; }
	void setNom(const std::string& nom)   { nom_ = nom; }
	int getAnneeNaissance() const         { return anneeNaissance_; }
	void setAnneeNaissance(int annee)     { anneeNaissance_ = annee; }
	const std::string& getPays() const    { return pays_; }
	void setPays(const std::string& pays) { pays_ = pays; }

private:
	std::string nom_;
	unsigned anneeNaissance_;
	std::string pays_;
};
