#include "Header.h"

bool mouseLeftButtonState = 0;
double lastMousePosX = 0;
double lastMousePosY = 0;
int xOffset = 0;
int yOffset = 0;

function objF;
intrface objintr; 
common objcmn;


void intrface::chpar()
{
    system("cls");
    cout << "==================================================" << endl;
    cout << "     Введите параметры \"a\" и \"b\" и отрезок" << endl
        << "==================================================" << endl;
}

void intrface::def()
{
    cout << "Графика под таким номером НЕТ. Попробуйте ещё раз!" << endl;
    cout << "==================================================" << endl;
    system("pause");
    system("cls");
}

void intrface::chctg()
{
    system("cls");
    cout << "==================================================" << endl;
    cout << "                    ВЫБЕРИТЕ: " << endl << "==================================================" << endl <<
        "1) | График без параметра (единичный)" << endl <<
        "2) | График с параметрами (y = a * ctg(b * x))" << endl << endl;
    if (trunc(objF.b1) > 0 || trunc(objF.b1) == 0)
        cout << "y = " << trunc(objF.a) << "сtg(" << trunc(objF.b * objF.x) << ")" << "+" << trunc(objF.b1) << endl;
    else
        cout << "y = " << trunc(objF.a) << "сtg(" << trunc(objF.b * objF.x) << ")" << trunc(objF.b1) << endl;
    cout << endl;
    cout << "Если хотите ВЫЙТИ в меню нажмите \"0\"" << endl;
    objF.a = 1;
    objF.b = 1;
    objF.x = 1;
    objF.b1 = 1;
}

void intrface::chtg()
{
    system("cls");
    cout << "==================================================" << endl;
    cout << "                    ВЫБЕРИТЕ: " << endl
        << "==================================================" << endl
        << "1) | График без параметра (единичный)" << endl
        << "2) | График с параметрами (y = a * tg(b * x))" << endl << endl;
    if (trunc(objF.b1) > 0 || trunc(objF.b1) == 0)
        cout << "y = " << trunc(objF.a) << "tg(" << trunc(objF.b * objF.x) << ")" << "+" << trunc(objF.b1) << endl;
    else
        cout << "y = " << trunc(objF.a) << "tg(" << trunc(objF.b * objF.x) << ")" << trunc(objF.b1) << endl;
    cout << endl;
    cout << "Если хотите ВЫЙТИ в меню нажмите \"0\"" << endl;
    objF.a = 1;
    objF.b = 1;
    objF.x = 1;
    objF.b1 = 1;
}

void intrface::chln()
{
    system("cls");
    cout << "==================================================" << endl;
    cout << "                    ВЫБЕРИТЕ: " << endl
        << "==================================================" << endl
        << "1) | График без параметра (единичный)" << endl
        << "2) | График с параметрами (y = a * ln(b * x))" << endl << endl;
    if (trunc(objF.b1) > 0 || trunc(objF.b1) == 0)
        cout << "y = " << trunc(objF.a) << "ln(" << trunc(objF.b * objF.x) << ")" << "+" << trunc(objF.b1) << endl;
    else
        cout << "y = " << trunc(objF.a) << "ln(" << trunc(objF.b * objF.x) << ")" << trunc(objF.b1) << endl;
    cout << endl;
    cout << "Если хотите ВЫЙТИ в меню нажмите \"0\"" << endl;
    objF.a = 1;
    objF.b = 1;
    objF.x = 1;
    objF.b1 = 1;
}

void intrface::chcos()
{
    system("cls");
    cout << "==================================================" << endl;
    cout << "                    ВЫБЕРИТЕ: " << endl
        << "==================================================" << endl
        << "1) | График без параметра (единичный)" << endl
        << "2) | График с параметрами (y = a * cos(b * x))" << endl << endl;
    if (trunc(objF.b1) > 0 || trunc(objF.b1) == 0)
        cout << "y = " << trunc(objF.a) << "cos(" << trunc(objF.b * objF.x) << ")" << "+" << trunc(objF.b1) << endl;
    else
        cout << "y = " << trunc(objF.a) << "cos(" << trunc(objF.b * objF.x) << ")" << trunc(objF.b1) << endl;
    cout << endl;
    cout << "Если хотите ВЫЙТИ в меню нажмите \"0\"" << endl;
    objF.a = 1;
    objF.b = 1;
    objF.x = 1;
    objF.b1 = 1;
}

void intrface::chsin()
{
    system("cls");
    cout << "==================================================" << endl;
    cout << "                    ВЫБЕРИТЕ: " << endl
        << "==================================================" << endl
        << "1) | График без параметра (единичный)" << endl
        << "2) | График с параметрами (y = a * sin(b * x))" << endl << endl;
    if (trunc(objF.b1) > 0 || trunc(objF.b1) == 0)
        cout << "y = " << trunc(objF.a) << "sin(" << trunc(objF.b * objF.x) << ")" << "+" << trunc(objF.b1) << endl;
    else
        cout << "y = " << trunc(objF.a) << "sin(" << trunc(objF.b * objF.x) << ")" << trunc(objF.b1) << endl;
    cout << endl;
    cout << "Если хотите ВЫЙТИ в меню нажмите \"0\"" << endl;
    objF.a = 1;
    objF.b = 1;
    objF.x = 1;
    objF.b1 = 1;
}

void intrface::err()
{
    system("cls");
    cout << "==================================================" << endl;
    cout << "                     ОШИБКА" << endl;
    cout << "==================================================" << endl;
    system("pause");
    system("cls");
}

void intrface::menu()
{
    cout << "====================================================" << endl;
    cout << "                 Выберите график: " << endl;
    cout << "====================================================" << endl;
    cout << "                 1. | График sin(x)" << endl;
    cout << "                 2. | График cos(x)" << endl;
    cout << "                 3. | График ln(x)" << endl;
    cout << "                 4. | График tg(x)" << endl;
    cout << "                 5. | График сtg(x)" << endl;
    cout << endl << "Если хотите ЗАВЕРШИТЬ работу программы нажмите \"0\"" << endl;
}

const double ik = -1;

double function::chert(double ik)
{
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-1.0, 0.0);
    glVertex2f(1.0, 0.0);
    glVertex2f(0.0, 1.0);
    glVertex2f(0.0, -1.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    for (double ik = -1; ik < 0.9; ik += 0.1)
    {
        glVertex2f(-0.01, ik);
        glVertex2f(0.01, ik);
        glVertex2f(ik, -0.01);
        glVertex2f(ik, 0.01);
    }
    glEnd();

    glBegin(GL_TRIANGLES); 
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 1);
    glVertex2f(-0.01, 0.95);
    glVertex2f(0.01, 0.95);
    glEnd();

    glBegin(GL_TRIANGLES); 
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(1, 0);
    glVertex2f(0.95, -0.01);
    glVertex2f(0.95, 0.01);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.02, 0.99);
    glVertex2f(0.04, 0.96);
    glVertex2f(0.02, 0.96);
    glVertex2f(0.04, 0.99);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.02, 0.99);
    glVertex2f(0.04, 0.96);
    glVertex2f(0.02, 0.96);
    glVertex2f(0.04, 0.99);

    glVertex2f(0.98, 0.04);
    glVertex2f(0.97, 0.06);
    glVertex2f(0.97, 0.025);
    glVertex2f(0.99, 0.06);
    glEnd();
    return 0;
}

static void CursorPosCallback(GLFWwindow* window, double xPos, double yPos );
void cursorEnterCallback(GLFWwindow* window, int Entered);
void mouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
void scrollCallback(GLFWwindow* window, double xOffset, double yOffset);




double function::glsin(double a, double b, int w1, int w2)
{
    GLFWwindow* window;
    setlocale(LC_ALL, "ru");


    float th = 0.0f;

    

    /* Initialize the library */
    if (!glfwInit())
        return -1;


    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(1000,1000 , "Graphic", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glViewport(0, 0, 1000, 1000);

    glfwSetCursorPosCallback(window, CursorPosCallback);
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);

    glfwSetCursorEnterCallback(window, cursorEnterCallback);

    glfwSetMouseButtonCallback(window, mouseButtonCallback);
    glfwSetInputMode(window, GLFW_STICKY_MOUSE_BUTTONS, 1);

    glfwSetScrollCallback(window, scrollCallback);

    /* Make the window's context current */
    glfwMakeContextCurrent(window);


    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window)) /*игровой цикл*/
    {
        /* Render here */

        //cout << lastMousePosX << " " << lastMousePosY << endl;

        //cout << a1 << " " << b1 << endl;

        glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        
        chert(ik);
        objF.a = a;
        objF.b = b;
        float y = 0;
        glPointSize(2);
        glBegin(GL_POINTS);
            for (float i = w1; i < w2; i += 0.0002)
            {
                if (mouseLeftButtonState)
                {
                    a1 += xOffset / 45000000.;
                    b1 += yOffset / 45000000.;
                    objF.a1 = a1;
                    objF.b1 = b1;
                }
                    x = i + a1;
                    objF.x = x;
                    y = a * sin(b * i) + b1;
                    glVertex2f((x / 10), (y / 10));
            }
        glEnd();
        system("cls");


        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}

static void CursorPosCallback(GLFWwindow* window, double xPos, double yPos)
{
    xOffset = xPos - lastMousePosX;
    yOffset = lastMousePosY - yPos; // т.к. y начинается сверху вниз
    lastMousePosX = xPos;
    lastMousePosY = yPos;
}

void cursorEnterCallback(GLFWwindow* window, int Entered)
{
    /*if (Entered)
    {
        cout << "in" << endl;
    }
    else
    {
        cout << "out" << endl;
    }*/
}

void mouseButtonCallback(GLFWwindow* window, int button, int action, int mods)
{
    if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_PRESS)
    {
        mouseLeftButtonState = 1;
    }
    else if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_RELEASE)
    {
        mouseLeftButtonState = 0;
    }
}

void scrollCallback(GLFWwindow* window, double xOffset, double yOffset)
{
    /*cout << xOffset * 1.5 << "  :  " << yOffset * 1.5<< endl;*/
}



double function::glcos(double a, double b, int w1, int w2)
{
    GLFWwindow* window;
    setlocale(LC_ALL, "ru");


    float th = 0.0f;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(1000, 1000, "Graphic", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glViewport(0, 0, 1000, 1000);

    glfwSetCursorPosCallback(window, CursorPosCallback);
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);

    glfwSetCursorEnterCallback(window, cursorEnterCallback);

    glfwSetMouseButtonCallback(window, mouseButtonCallback);
    glfwSetInputMode(window, GLFW_STICKY_MOUSE_BUTTONS, 1);

    glfwSetScrollCallback(window, scrollCallback);

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    double a1 = 0, b1 = 0;

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */

        glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        chert(ik);
        objF.a = a;
        objF.b = b;
        float y = 0;
        glPointSize(2);
        glBegin(GL_POINTS);
        for (float i = w1; i < w2; i += 0.0002)
        {
            if (mouseLeftButtonState)
            {
                a1 += xOffset / 45000000.;
                b1 += yOffset / 45000000.;
                objF.a1 = a1;
                objF.b1 = b1;
            }
            x = i + a1;
            objF.x = x;
            y = a * cos(b * i) + b1;
            glVertex2f((x / 10), (y / 10));
        }
        glEnd();
        system("cls");

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}

double function::glln(double a, double b, int w1, int w2)
{
    GLFWwindow* window;
    setlocale(LC_ALL, "ru");


    float th = 0.0f;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(1000, 1000, "Graphic", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glViewport(0, 0, 1000, 1000);

    glfwSetCursorPosCallback(window, CursorPosCallback);
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);

    glfwSetCursorEnterCallback(window, cursorEnterCallback);

    glfwSetMouseButtonCallback(window, mouseButtonCallback);
    glfwSetInputMode(window, GLFW_STICKY_MOUSE_BUTTONS, 1);

    glfwSetScrollCallback(window, scrollCallback);

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    double a1 = 0, b1 = 0;

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */

        glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        chert(ik);
        objF.a = a;
        objF.b = b;
        float y = 0;
        glPointSize(2);
        glBegin(GL_POINTS);
        for (float i = w1; i < w2; i += 0.0002)
        {
            if (mouseLeftButtonState)
            {
                a1 += xOffset / 45000000.;
                b1 += yOffset / 45000000.;
                objF.a1 = a1;
                objF.b1 = b1;
            }
            x = i + a1;
            objF.x = x;
            y = a * log(b * i) + b1;
            glVertex2f((x / 10), (y / 10));
        }
        glEnd();

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}

double function::gltan(double a, double b, int w1, int w2)
{
    GLFWwindow* window;
    setlocale(LC_ALL, "ru");


    float th = 0.0f;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(1000, 1000, "Graphic", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glViewport(0, 0, 1000, 1000);

    glfwSetCursorPosCallback(window, CursorPosCallback);
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);

    glfwSetCursorEnterCallback(window, cursorEnterCallback);

    glfwSetMouseButtonCallback(window, mouseButtonCallback);
    glfwSetInputMode(window, GLFW_STICKY_MOUSE_BUTTONS, 1);

    glfwSetScrollCallback(window, scrollCallback);

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    double a1 = 0, b1 = 0;

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */

        glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        chert(ik);
        objF.a = a;
        objF.b = b;
        float y = 0;
        glPointSize(2);
        glBegin(GL_POINTS);
        for (float i = w1; i < w2; i += 0.0002)
        {
            if (mouseLeftButtonState)
            {
                a1 += xOffset / 45000000.;
                b1 += yOffset / 45000000.;
                objF.a1 = a1;
                objF.b1 = b1;
            }
            x = i + a1;
            objF.x = x;
            y = a * (tan(b * i)) + b1;
            glVertex2f((x / 10), (y / 10));
        }
        glEnd();

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}

double function::glctan(double a, double b, int w1, int w2)
{
    GLFWwindow* window;
    setlocale(LC_ALL, "ru");


    float th = 0.0f;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(1000, 1000, "Graphic", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glViewport(0, 0, 1000, 1000);

    glfwSetCursorPosCallback(window, CursorPosCallback);
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);

    glfwSetCursorEnterCallback(window, cursorEnterCallback);

    glfwSetMouseButtonCallback(window, mouseButtonCallback);
    glfwSetInputMode(window, GLFW_STICKY_MOUSE_BUTTONS, 1);

    glfwSetScrollCallback(window, scrollCallback);

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    double a1 = 0, b1 = 0;

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */

        glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        chert(ik);
        objF.a = a;
        objF.b = b;
        float y = 0;
        glPointSize(2);
        glBegin(GL_POINTS);
        for (float i = w1; i < w2; i += 0.0002)
        {
            if (mouseLeftButtonState)
            {
                a1 += xOffset / 45000000.;
                b1 += yOffset / 45000000.;
                objF.a1 = a1;
                objF.b1 = b1;
            }
            x = i + a1;
            objF.x = x;
            y = a * pow(tan(b * i), -1) + b1;
            glVertex2f((x / 10), (y / 10));
        }
        glEnd();

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}

