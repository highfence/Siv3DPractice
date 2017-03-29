
# include <Siv3D.hpp>

void Main()
{
	Graphics::SetBackground(Color(160, 200, 100));

	GUI loginGui(GUIStyle::Default);
	loginGui.setTitle(L"Login");

	// 버튼 구성.
	loginGui.add(L"loginBtn", GUIButton::Create(L"LOGIN"));
	loginGui.add(L"cancelBtn", GUIButton::Create(L"EXIT"));

	// 창 위치 지정.
	loginGui.setCenter(Window::Center());

	while (System::Update())
	{
		if (loginGui.button(L"cancelBtn").pushed)
		{
			System::Exit();
		}
	}

	return;
}
