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
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loginScreen::typeid));
			this->loginTitle = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// loginTitle
			// 
			resources->ApplyResources(this->loginTitle, L"loginTitle");
			this->loginTitle->Name = L"loginTitle";
			this->loginTitle->Click += gcnew System::EventHandler(this, &loginScreen::label1_Click);
			// 
			// loginScreen
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
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
	};
}
