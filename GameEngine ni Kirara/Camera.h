#ifndef CAMERA_H
#define CAMERA_H

class Camera {
private:
	float
		eyeX,
		eyeY,
		eyeZ,
		centerX,
		centerY,
		centerZ,
		upX,
		upY,
		upZ;

public:

	Camera();

	void cameraControl(float eyeX, float eyeY, float eyeZ,
		float centerX, float centerY, float centerZ,
		float upX, float upY, float upZ);
};

#endif