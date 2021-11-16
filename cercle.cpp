#include<iostream>
{
cercle::cercle(double ra, point c) {
	this->cercle.rayon = ra;
	this->cercle.centre = c;

}
void affiche(){
	cout << "les caracteristiques du cercle:";
	cout << "le rayon est:" << this->cercle.rayon << endl;
	cout << "le centre est :" << this->cercle.centre << endl;
}
cercle::changementrayon(double r) {
	this->cercle.rayon = r;
}
void translation(double a) {
	centre.translation(a);
}
double calculsurface(double ra) {
	return ra* ra * 3.14;
	
}
double calculperimetre(double ra) {
	return 2 * 3.14 * ra;
}
bool appartenance(point p, double ra) {
	if (cercle.centre.distance(p) <= ra) {
		return true;
	}
	return false
}
