#pragma once

namespace AirConsturct {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for loginScreen
	/// </summary>
	public ref class loginScreen : public System::Windows::Forms::Form
	{
	public:
		loginScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~loginScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ loginTitle;
	private: System::Windows::Forms::TextBox^ txt_login;
	private: System::Windows::Forms::TextBox^ txt_password;


	private: System::Windows::Forms::Button^ btn_loginSubmit;


	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loginScreen::typeid));
			this->loginTitle = (gcnew System::Windows::Forms::Label());
			this->txt_login = (gcnew System::Windows::Forms::TextBox());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->btn_loginSubmit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// loginTitle
			// 
			resources->ApplyResources(this->loginTitle, L"loginTitle");
			this->loginTitle->Name = L"loginTitle";
			this->loginTitle->Click += gcnew System::EventHandler(this, &loginScreen::label1_Click);
			// 
			// txt_login
			// 
			this->txt_login->ForeColor = System::Drawing::Color::Gray;
			resources->ApplyResources(this->txt_login, L"txt_login");
			this->txt_login->Name = L"txt_login";
			this->txt_login->TextChanged += gcnew System::EventHandler(this, &loginScreen::txt_login_TextChanged);
			this->txt_login->Enter += gcnew System::EventHandler(this, &loginScreen::txt_login_Enter);
			this->txt_login->Leave += gcnew System::EventHandler(this, &loginScreen::txt_login_Leave);
			// 
			// txt_password
			// 
			resources->ApplyResources(this->txt_password, L"txt_password");
			this->txt_password->Name = L"txt_password";
			this->txt_password->UseSystemPasswordChar = true;
			this->txt_password->TextChanged += gcnew System::EventHandler(this, &loginScreen::txt_password_TextChanged);
			this->txt_password->Enter += gcnew System::EventHandler(this, &loginScreen::txt_password_Enter);
			this->txt_password->Leave += gcnew System::EventHandler(this, &loginScreen::txt_password_Leave);
			// 
			// btn_loginSubmit
			// 
			resources->ApplyResources(this->btn_loginSubmit, L"btn_loginSubmit");
			this->btn_loginSubmit->Name = L"btn_loginSubmit";
			this->btn_loginSubmit->UseVisualStyleBackColor = true;
			this->btn_loginSubmit->Click += gcnew System::EventHandler(this, &loginScreen::button1_Click);
			// 
			// loginScreen
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btn_loginSubmit);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->txt_login);
			this->Controls->Add(this->loginTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"loginScreen";
			this->ShowIcon = false;
			this->Load += gcnew System::EventHandler(this, &loginScreen::loginScreen_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void loginScreen_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txt_login_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txt_login_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (txt_login->Text == "Login") {
			txt_login->Text = "";
			txt_login->ForeColor = System::Drawing::Color::Black;
		}
	}

	private: System::Void txt_login_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (txt_login->Text == "") {
			txt_login->Text = "Login";
			txt_login->ForeColor = System::Drawing::Color::Gray;
		}
	}
	private: System::Void txt_password_Enter(System::Object ^ sender, System::EventArgs ^ e) {
		if (txt_password->Text == "Login") {
			txt_password->Text = "";
			txt_password->ForeColor = System::Drawing::Color::Black;
		}
	}

	private: System::Void txt_password_Leave(System::Object ^ sender, System::EventArgs ^ e) {
		if (txt_password->Text == "") {
			txt_password->Text = "Login";
			txt_password->ForeColor = System::Drawing::Color::Gray;
		}
	}

	private: System::Void txt_password_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
	}
