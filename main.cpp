#include <SFML/Graphics.hpp>

using namespace sf;
const float WINDOOW_WIDTH = 800;
const float WINDOOW_HEIGHT = 600;
const std::string WINDOOW_TITLE = "SFML Lesson2";
int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(WINDOOW_WIDTH, WINDOOW_HEIGHT), WINDOOW_TITLE);
	//массив кругов
	const int size = 8;
	CircleShape arr_circles[size];

	//квадрат
	RectangleShape arr_rect[size];
	RectangleShape arr_rect1[size];


	//устанавливаем свойства каждого круга:радиус цвет позиция
	/*for (int i = 0; i < size; i++) {
		float radius = 200.f - 40.f * i;
		arr_circles[i].setRadius(radius);
		arr_circles[i].setFillColor(Color{ (Uint8)(rand() % 256),(Uint8)(rand() % 256),(Uint8)(rand() % 256)});
		arr_circles[i].setPosition(
			(WINDOOW_WIDTH - 2 * radius) / 2, (WINDOOW_HEIGHT - 2 * radius) / 2
		);

	}*/
	//устанавливаем свойства каждого квадрата:радиус цвет позиция
	const float a = 50.f;
	/*for (int i = 0; i < size; i++) {
		arr_rect[i].setSize(Vector2f(a,a));
		arr_rect[i].setFillColor(Color{ (Uint8)(rand() % 256),(Uint8)(rand() % 256),(Uint8)(rand() % 256) });
		arr_rect[i].setPosition(
			(a+a)*i , 0
		);
	
	}
	for (int i = 0; i < size; i++) {
		arr_rect1[i].setSize(Vector2f(a, a));
		arr_rect1[i].setFillColor(Color{ (Uint8)(rand() % 256),(Uint8)(rand() % 256),(Uint8)(rand() % 256) });
		arr_rect1[i].setPosition(
			WINDOOW_WIDTH-a, (a + a) * i+a
		);

	}*/
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < size; j++) {
			arr_rect[i].setSize(Vector2f(a, a));
			arr_rect[i].setFillColor(Color{ (Uint8)(rand() % 256),(Uint8)(rand() % 256),(Uint8)(rand() % 256) });
			arr_rect[i].setPosition(
				(a + a) * j, a
			);
		}
		for (int k = 0; k < size - 1; k++) {
			arr_rect1[i].setSize(Vector2f(a, a));
			arr_rect1[i].setFillColor(Color{ (Uint8)(rand() % 256),(Uint8)(rand() % 256),(Uint8)(rand() % 256) });
			arr_rect1[i].setPosition(
				(a + a) * k + a, a
			);
		}
	}
		// Главный цикл приложения. Выполняется, пока открыто окно
		while (window.isOpen())
		{
			// Обрабатываем очередь событий в цикле
			Event event;
			while (window.pollEvent(event))
			{
				// Пользователь нажал на «крестик» и хочет закрыть окно?
				if (event.type == Event::Closed)
					// тогда закрываем его
					window.close();
			}
			// Отрисовка окна 
			/*for (int i = 0; i < size; i++) {
				window.draw(arr_circles[i]);
			}*/
			for (int i = 0; i < 6; i++) {
				for (int j = 0; j < size; j++) {
					window.draw(arr_rect[i]);
				}
				for (int k = 0; k < size-1; k++) {
					window.draw(arr_rect1[i]);
				}
			}
			window.display();
		
		}

	return 0;
}