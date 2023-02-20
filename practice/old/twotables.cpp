#include <iostream>
#include <cmath>

using namespace std;

struct Rect{
	int x1,x2,y1,y2;
	int orx2, ory2;
	int width() {
		return x2-x1;
	}
	int height() {
		return y2-y1;
	}
};
int intersect(Rect p, Rect q) {
	int a = min(p.x2, q.x2) - max(p.x1, q.x1);
	int b = min(p.y2, q.y2) - max(p.y1, q.y1);
	return (a*b);
	// if 0, touching. if (a*b) < 0, apart.
}

double distance(Rect p) {
	double a = (p.x2 - p.orx2); a*=a;
	double b = (p.y2 - p.ory2); b*=b;
	return sqrt(a+b);
}
void solve(int(&is)[8], bool debug) {
	int W, H, X1, X2, Y1, Y2, w, h;
	W=is[0]; H=is[1]; X1=is[2]; Y1=is[3]; X2=is[4]; Y2=is[5]; w=is[6]; h=is[7];
	// cin >> W >> H >> X1 >> Y1 >> X2 >> Y2 >> w >> h;
	// cout << W << H << X1 << Y1 << X2 << Y2 << w << h << endl;
	Rect room; room.x1 = 0; room.y1 = 0; room.x2 = W; room.y2 = H;
	Rect t1; t1.x1 = X1; t1.y1 = Y1; t1.x2 = X2; t1.y2 = Y2;
	Rect t2; t2.x1 = 0; t2.y1 = 0; t2.y2 = h; t2.x2 = w;

	if (intersect(t1, t2)<=0){cout << 0 << endl;return;}

	t1.x1 = 0; t1.y1 = Y1+(H-Y2); t1.x2 = X2 + (0-X1); t1.y2 = H; t1.orx2 = X2; t1.ory2 = Y2;
	double d = distance(t1);					

	if (t1.width()+t2.width() > room.width() && t1.height()+t2.height() > room.height())
		cout << -1 << endl;
	else {
		for (int x = 0; x<W; x++) {
			for (int y = 0; y<H; y++) {
				if (intersect(t1,t2)<=0) {
					if (d>distance(t1))
						d=distance(t1);
						if (debug) cout << intersect(t1, t2) << endl;
						if (debug) cout << "Coordinates (d: " << d <<"): (" << t1.x1 << "," << t1.y1 << ")" << " (" << t1.x2 << "," << t1.y2 << ")" << endl;
				} else {
					if (t1.y1 > 0) {
						t1.y1--;
						t1.y2--;
					}
					 if (debug) cout << "Coordinates: (" << t1.x1 << "," << t1.y1 << ")" << " (" << t1.x2 << "," << t1.y2 << ")" << endl;
				}
			}
			t1.x1++;
			t1.x2++;
		}
		cout << d << endl;
	}
}
void codeforces() {
	int n;
	cin >> n;
	int is[n][8];
	for (int(&r)[8] : is) {
		for (int &i : r)
			cin >> i;
	}
	
	for (int(&d)[8]:is)
		solve(d, false);
}
int main() {
	// codeforces();
	int d[] = {1,2,0,0,1,1,1,1};
	solve(d, true);
	return 0;
}