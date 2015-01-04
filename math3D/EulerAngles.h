#ifndef __EulerAngles_H_
#define __EulerAngles_H_


class EulerAngles {
public:
	EulerAngles(float const &heading = 0, float const &pitch = 0, float const &bank = 0);

	float const * heading() {
		return &_heading;
	}
	void heading(float const &value);

	float const * pitch() {
		return &_pitch;
	}
	void pitch(float const &value);

	float const * bank() {
		return &_bank;
	}
	void bank(float const &value);

	bool isCanonical() const;

	void canonize();

private:
	float _heading;
	float _pitch;
	float _bank;
};


#endif //__EulerAngles_H_
