#include <windows.h>
#include <mmsystem.h>
#include <glut.h>

using namespace std;

void playSound(const char* soundFilePath) {

	PlaySoundA(soundFilePath, NULL, SND_FILENAME | SND_ASYNC);
}