#pragma once

namespace GoGO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			
		}
	private: void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Synchr_Click(sender, e);
	}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Close_button;
	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Create_button;
	private: System::Windows::Forms::Button^ Edit_button;
	private: System::Windows::Forms::Button^ Delete_button;
	private: System::Windows::Forms::ListBox^ List;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ Stealth_label;
	private: System::Windows::Forms::Button^ OK_button;
	private: System::Windows::Forms::Button^ Save_button;






	protected:

	protected:

	protected:













	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Close_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Create_button = (gcnew System::Windows::Forms::Button());
			this->Edit_button = (gcnew System::Windows::Forms::Button());
			this->Delete_button = (gcnew System::Windows::Forms::Button());
			this->List = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Stealth_label = (gcnew System::Windows::Forms::Label());
			this->OK_button = (gcnew System::Windows::Forms::Button());
			this->Save_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Close_button
			// 
			this->Close_button->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Close_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Close_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Close_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Close_button->ForeColor = System::Drawing::Color::OrangeRed;
			this->Close_button->Location = System::Drawing::Point(620, -1);
			this->Close_button->Name = L"Close_button";
			this->Close_button->Size = System::Drawing::Size(51, 33);
			this->Close_button->TabIndex = 0;
			this->Close_button->Text = L"X";
			this->Close_button->UseVisualStyleBackColor = false;
			this->Close_button->Click += gcnew System::EventHandler(this, &MyForm::close_button_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Полный список";
			// 
			// Create_button
			// 
			this->Create_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Create_button->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Create_button->Location = System::Drawing::Point(12, 358);
			this->Create_button->Name = L"Create_button";
			this->Create_button->Size = System::Drawing::Size(106, 32);
			this->Create_button->TabIndex = 3;
			this->Create_button->Text = L"Создать";
			this->Create_button->UseVisualStyleBackColor = true;
			this->Create_button->Click += gcnew System::EventHandler(this, &MyForm::Create_button_Click);
			// 
			// Edit_button
			// 
			this->Edit_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Edit_button->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Edit_button->Location = System::Drawing::Point(124, 358);
			this->Edit_button->Name = L"Edit_button";
			this->Edit_button->Size = System::Drawing::Size(158, 32);
			this->Edit_button->TabIndex = 4;
			this->Edit_button->Text = L"Редактировать";
			this->Edit_button->UseVisualStyleBackColor = true;
			this->Edit_button->Click += gcnew System::EventHandler(this, &MyForm::Edit_button_Click);
			// 
			// Delete_button
			// 
			this->Delete_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Delete_button->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Delete_button->Location = System::Drawing::Point(288, 358);
			this->Delete_button->Name = L"Delete_button";
			this->Delete_button->Size = System::Drawing::Size(106, 32);
			this->Delete_button->TabIndex = 5;
			this->Delete_button->Text = L"Удалить";
			this->Delete_button->UseVisualStyleBackColor = true;
			this->Delete_button->Click += gcnew System::EventHandler(this, &MyForm::Delete_button_Click);
			// 
			// List
			// 
			this->List->FormattingEnabled = true;
			this->List->Location = System::Drawing::Point(12, 35);
			this->List->Name = L"List";
			this->List->Size = System::Drawing::Size(583, 303);
			this->List->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(404, 370);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(177, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->Visible = false;
			// 
			// Stealth_label
			// 
			this->Stealth_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Stealth_label->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Stealth_label->Location = System::Drawing::Point(400, 344);
			this->Stealth_label->Name = L"Stealth_label";
			this->Stealth_label->Size = System::Drawing::Size(172, 23);
			this->Stealth_label->TabIndex = 7;
			this->Stealth_label->Text = L"Введите данные";
			this->Stealth_label->Visible = false;
			// 
			// OK_button
			// 
			this->OK_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->OK_button->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->OK_button->Location = System::Drawing::Point(616, 358);
			this->OK_button->Name = L"OK_button";
			this->OK_button->Size = System::Drawing::Size(51, 32);
			this->OK_button->TabIndex = 8;
			this->OK_button->Text = L"OK";
			this->OK_button->UseVisualStyleBackColor = true;
			this->OK_button->Click += gcnew System::EventHandler(this, &MyForm::OK_button_Click);
			// 
			// Save_button
			// 
			this->Save_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Save_button->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Save_button->Location = System::Drawing::Point(601, 38);
			this->Save_button->Name = L"Save_button";
			this->Save_button->Size = System::Drawing::Size(70, 32);
			this->Save_button->TabIndex = 9;
			this->Save_button->Text = L"Save";
			this->Save_button->UseVisualStyleBackColor = true;
			this->Save_button->Click += gcnew System::EventHandler(this, &MyForm::Save_button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(679, 402);
			this->Controls->Add(this->Save_button);
			this->Controls->Add(this->OK_button);
			this->Controls->Add(this->Stealth_label);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Delete_button);
			this->Controls->Add(this->Edit_button);
			this->Controls->Add(this->Create_button);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->List);
			this->Controls->Add(this->Close_button);
			this->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"GoGO";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//обьявление функций
	private: System::Void close_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Delete_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Edit_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Create_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void OK_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Save_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Synchr_Click(System::Object^ sender, System::EventArgs^ e);

};
}
