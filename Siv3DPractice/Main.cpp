
# include <Siv3D.hpp>

void Main()
{
	Graphics::SetBackground(Color(160, 200, 100));

	GUI loginGui(GUIStyle::Default);
	loginGui.setTitle(L"Login");

	// 텍스트 필드
	loginGui.add(L"idLabel", GUIText::Create(L"ID :  "));
	loginGui.addln(L"idField", GUITextField::Create(none));
	loginGui.add(L"passwordLabel", GUIText::Create(L"PW :"));
	loginGui.addln(L"passwordField", GUITextField::Create(none));

	//// 구분선
	//loginGui.addln(L"divideLine", GUIHorizontalLine::Create(1));
	//loginGui.horizontalLine(L"divideLine").style.color = Color(127);

	// 버튼 구성.
	loginGui.add(L"loginBtn", GUIButton::Create(L"LOGIN"));
	loginGui.addln(L"cancelBtn", GUIButton::Create(L"EXIT"));

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
