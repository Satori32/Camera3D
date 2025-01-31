#include <stdio.h>

#include "Point3D.h"

struct Camera3D{
	//type T = double;
	typedef double T;
	Point3D<T> Camera = { 0, };
	Point3D<T> Look = { 0, };
	T Zoom = 0;
	T Gray = 0;
};

template<class T>
Camera3D ConstructCamera3D<T>(Point3D<T>& Camera, Point3D<T>& Look, T& Zoom) {
	Camera3D C;
	C.Camera = Camera;
	C.Look = Look;
	C.Zoom = Zoom;
	C.Gray = 1;
	
	return C;
}

bool Free(Camera3D& In) {
	Free(In.Camera);
	Free(In.Look);
	Free(In.Zoom);
	Free(In.Gray);

	return true;
}