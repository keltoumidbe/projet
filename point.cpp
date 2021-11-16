point::point(double a, double b) {
	this->point.x = a;
	this->point.y = b;
}
point::translation(double a){
	this->point.x = x + a;
	this->point.y = y + a;
}
point::affiche() {
	cout << "(" << this->point.x << "," << this->point.y << ")";
}
