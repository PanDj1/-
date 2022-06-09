#pragma comment (lib, "opengl32.lib")
#ifndef SOURCE
#define SOURCE
#include <iostream>
#include <fstream>
#include <string>
#include <GLFW/glfw3.h>
#include <cmath>
#include <Windows.h>
#include <string>
#include <sstream>
#include <cstdlib>


using namespace std;

static void CursorPosCallback(GLFWwindow* window, double xPos, double yPos);
void cursorEnterCallback(GLFWwindow* window, int Entered);
void mouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
void scrollCallback(GLFWwindow* window, double xOffset, double yOffset);

class common
{
protected:
	string graphic;
};

class intrface : protected common
{
public:
	void menu();
	void chpar();
	void chsin();
	void chcos();
	void chln();
	void chtg();
	void chctg();
	void err();
	void def();
};

class function : protected common
{
public:
	double glsin(double a, double b, int w1, int w2);
	double glcos(double a, double b, int w1, int w2);
	double glln(double a, double b, int w1, int w2);
	double gltan(double a, double b, int w1, int w2);
	double glctan(double a, double b, int w1, int w2);
	double a1 = 1, b1 = 1;
	float x = 1;
	double a = 1;
	double b = 1;
private:
	double chert(double i);
	const double ik = -1;
};

#endif