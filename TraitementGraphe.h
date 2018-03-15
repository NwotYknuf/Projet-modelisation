#pragma once
#include "Graphe.h"
#include "DonneesArete.h"
#include "DonneesSommet.h"

class TraitementGraphe{

private:
	Graphe<DonneesArete, DonneesSommet>* graphe;

	Maillon<Sommet<DonneesSommet>> * prefixeInverse = NULL;
	Maillon<Sommet<DonneesSommet>> * suffixeInverse = NULL;

public:

	TraitementGraphe() = delete;
	TraitementGraphe(const TraitementGraphe&) = delete;
	TraitementGraphe(Graphe<DonneesArete, DonneesSommet>* _graphe) : graphe(_graphe) { };
	~TraitementGraphe() { }
	
	template<class Traitement>
	void parcoursComposante(Sommet<DonneesSommet> * sommet, Traitement traitementPrefixe, Traitement traitementSuffixe);

	template<class Traitement>
	void parcoursDFS(Traitement traitementPrefixe, Traitement traitementSuffixe);

	void affiche(Sommet<DonneesSommet> * sommet);

	void neFaisRien(Sommet<DonneesSommet> * sommet) { }

	void ordrePefixeInverse(Sommet<DonneesSommet> * sommet);

	void ordreSuffixeInverse(Sommet<DonneesSommet> * sommet);

	void NumeroteGraphe();

	void pccDijkstra(Sommet<DonneesSommet> * depart);

};