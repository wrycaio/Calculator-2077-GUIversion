#pragma once

char operacao;
int numero1, numero2;
int resultado;

namespace Calculator207720 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ botaoigual;
	protected:

	protected:

		
	private: System::Windows::Forms::Button^ botaomenos;





	private: System::Windows::Forms::Button^ botaovezes;
	private: System::Windows::Forms::Button^ botaodivisao;


	private: System::Windows::Forms::Button^ botao0;

	private: System::Windows::Forms::Button^ botao1;
	private: System::Windows::Forms::Button^ botao2;
	private: System::Windows::Forms::Button^ botao3;
	private: System::Windows::Forms::Button^ botao4;
	private: System::Windows::Forms::Button^ botao5;
	private: System::Windows::Forms::Button^ botao6;
	private: System::Windows::Forms::Button^ botao7;
	private: System::Windows::Forms::Button^ botao8;
	private: System::Windows::Forms::Button^ botao9;









	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ botaomais;
	private: System::Windows::Forms::Button^ botaoac;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->botaoigual = (gcnew System::Windows::Forms::Button());
			this->botaomais = (gcnew System::Windows::Forms::Button());
			this->botaomenos = (gcnew System::Windows::Forms::Button());
			this->botaovezes = (gcnew System::Windows::Forms::Button());
			this->botaodivisao = (gcnew System::Windows::Forms::Button());
			this->botao0 = (gcnew System::Windows::Forms::Button());
			this->botao1 = (gcnew System::Windows::Forms::Button());
			this->botao2 = (gcnew System::Windows::Forms::Button());
			this->botao3 = (gcnew System::Windows::Forms::Button());
			this->botao4 = (gcnew System::Windows::Forms::Button());
			this->botao5 = (gcnew System::Windows::Forms::Button());
			this->botao6 = (gcnew System::Windows::Forms::Button());
			this->botao7 = (gcnew System::Windows::Forms::Button());
			this->botao8 = (gcnew System::Windows::Forms::Button());
			this->botao9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->botaoac = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// botaoigual
			// 
			this->botaoigual->BackColor = System::Drawing::Color::White;
			this->botaoigual->ForeColor = System::Drawing::Color::Black;
			this->botaoigual->Location = System::Drawing::Point(151, 170);
			this->botaoigual->Name = L"botaoigual";
			this->botaoigual->Size = System::Drawing::Size(55, 59);
			this->botaoigual->TabIndex = 1;
			this->botaoigual->Text = L"=";
			this->botaoigual->UseVisualStyleBackColor = false;
			this->botaoigual->Click += gcnew System::EventHandler(this, &MyForm::botaoigual_Click);
			// 
			// botaomais
			// 
			this->botaomais->Location = System::Drawing::Point(222, 76);
			this->botaomais->Name = L"botaomais";
			this->botaomais->Size = System::Drawing::Size(55, 37);
			this->botaomais->TabIndex = 5;
			this->botaomais->Text = L"+";
			this->botaomais->UseVisualStyleBackColor = true;
			this->botaomais->Click += gcnew System::EventHandler(this, &MyForm::botaomais_Click);
			// 
			// botaomenos
			// 
			this->botaomenos->Location = System::Drawing::Point(222, 119);
			this->botaomenos->Name = L"botaomenos";
			this->botaomenos->Size = System::Drawing::Size(55, 37);
			this->botaomenos->TabIndex = 6;
			this->botaomenos->Text = L"-";
			this->botaomenos->UseVisualStyleBackColor = true;
			this->botaomenos->Click += gcnew System::EventHandler(this, &MyForm::botaomenos_Click);
			// 
			// botaovezes
			// 
			this->botaovezes->Location = System::Drawing::Point(222, 206);
			this->botaovezes->Name = L"botaovezes";
			this->botaovezes->Size = System::Drawing::Size(55, 37);
			this->botaovezes->TabIndex = 7;
			this->botaovezes->Text = L"x";
			this->botaovezes->UseVisualStyleBackColor = true;
			this->botaovezes->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// botaodivisao
			// 
			this->botaodivisao->Location = System::Drawing::Point(222, 163);
			this->botaodivisao->Name = L"botaodivisao";
			this->botaodivisao->Size = System::Drawing::Size(55, 37);
			this->botaodivisao->TabIndex = 8;
			this->botaodivisao->Text = L"/";
			this->botaodivisao->UseVisualStyleBackColor = true;
			this->botaodivisao->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// botao0
			// 
			this->botao0->Location = System::Drawing::Point(62, 170);
			this->botao0->Name = L"botao0";
			this->botao0->Size = System::Drawing::Size(44, 23);
			this->botao0->TabIndex = 9;
			this->botao0->Text = L"0";
			this->botao0->UseVisualStyleBackColor = true;
			this->botao0->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// botao1
			// 
			this->botao1->Location = System::Drawing::Point(62, 134);
			this->botao1->Name = L"botao1";
			this->botao1->Size = System::Drawing::Size(44, 23);
			this->botao1->TabIndex = 10;
			this->botao1->Text = L"1";
			this->botao1->UseVisualStyleBackColor = true;
			this->botao1->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// botao2
			// 
			this->botao2->Location = System::Drawing::Point(112, 134);
			this->botao2->Name = L"botao2";
			this->botao2->Size = System::Drawing::Size(44, 23);
			this->botao2->TabIndex = 11;
			this->botao2->Text = L"2";
			this->botao2->UseVisualStyleBackColor = true;
			this->botao2->Click += gcnew System::EventHandler(this, &MyForm::botao2_Click);
			// 
			// botao3
			// 
			this->botao3->Location = System::Drawing::Point(162, 134);
			this->botao3->Name = L"botao3";
			this->botao3->Size = System::Drawing::Size(44, 23);
			this->botao3->TabIndex = 12;
			this->botao3->Text = L"3";
			this->botao3->UseVisualStyleBackColor = true;
			this->botao3->Click += gcnew System::EventHandler(this, &MyForm::botao3_Click);
			// 
			// botao4
			// 
			this->botao4->Location = System::Drawing::Point(62, 105);
			this->botao4->Name = L"botao4";
			this->botao4->Size = System::Drawing::Size(44, 23);
			this->botao4->TabIndex = 13;
			this->botao4->Text = L"4";
			this->botao4->UseVisualStyleBackColor = true;
			this->botao4->Click += gcnew System::EventHandler(this, &MyForm::botao4_Click);
			// 
			// botao5
			// 
			this->botao5->Location = System::Drawing::Point(112, 105);
			this->botao5->Name = L"botao5";
			this->botao5->Size = System::Drawing::Size(44, 23);
			this->botao5->TabIndex = 14;
			this->botao5->Text = L"5";
			this->botao5->UseVisualStyleBackColor = true;
			this->botao5->Click += gcnew System::EventHandler(this, &MyForm::botao5_Click);
			// 
			// botao6
			// 
			this->botao6->Location = System::Drawing::Point(162, 105);
			this->botao6->Name = L"botao6";
			this->botao6->Size = System::Drawing::Size(44, 23);
			this->botao6->TabIndex = 15;
			this->botao6->Text = L"6";
			this->botao6->UseVisualStyleBackColor = true;
			this->botao6->Click += gcnew System::EventHandler(this, &MyForm::botao6_Click);
			// 
			// botao7
			// 
			this->botao7->Location = System::Drawing::Point(62, 76);
			this->botao7->Name = L"botao7";
			this->botao7->Size = System::Drawing::Size(44, 23);
			this->botao7->TabIndex = 16;
			this->botao7->Text = L"7";
			this->botao7->UseVisualStyleBackColor = true;
			this->botao7->Click += gcnew System::EventHandler(this, &MyForm::botao7_Click);
			// 
			// botao8
			// 
			this->botao8->Location = System::Drawing::Point(112, 76);
			this->botao8->Name = L"botao8";
			this->botao8->Size = System::Drawing::Size(44, 23);
			this->botao8->TabIndex = 17;
			this->botao8->Text = L"8";
			this->botao8->UseVisualStyleBackColor = true;
			this->botao8->Click += gcnew System::EventHandler(this, &MyForm::botao8_Click);
			// 
			// botao9
			// 
			this->botao9->Location = System::Drawing::Point(162, 76);
			this->botao9->Name = L"botao9";
			this->botao9->Size = System::Drawing::Size(44, 23);
			this->botao9->TabIndex = 18;
			this->botao9->Text = L"9";
			this->botao9->UseVisualStyleBackColor = true;
			this->botao9->Click += gcnew System::EventHandler(this, &MyForm::botao9_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(29, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(230, 40);
			this->label1->TabIndex = 19;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// botaoac
			// 
			this->botaoac->Location = System::Drawing::Point(1, 76);
			this->botaoac->Name = L"botaoac";
			this->botaoac->Size = System::Drawing::Size(55, 52);
			this->botaoac->TabIndex = 22;
			this->botaoac->Text = L"AC";
			this->botaoac->UseVisualStyleBackColor = true;
			this->botaoac->Click += gcnew System::EventHandler(this, &MyForm::botaoac_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(289, 249);
			this->Controls->Add(this->botaoac);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->botao9);
			this->Controls->Add(this->botao8);
			this->Controls->Add(this->botao7);
			this->Controls->Add(this->botao6);
			this->Controls->Add(this->botao5);
			this->Controls->Add(this->botao4);
			this->Controls->Add(this->botao3);
			this->Controls->Add(this->botao2);
			this->Controls->Add(this->botao1);
			this->Controls->Add(this->botao0);
			this->Controls->Add(this->botaodivisao);
			this->Controls->Add(this->botaovezes);
			this->Controls->Add(this->botaomenos);
			this->Controls->Add(this->botaomais);
			this->Controls->Add(this->botaoigual);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"Calculator 2077 GUI";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		numero1 = Convert::ToInt32(label1->Text);
		label1->Text = "0";
		operacao = '*';
	}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	numero1 = Convert::ToInt32(label1->Text);
	label1->Text = "0";
	operacao = '/';
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//Botão 0
	if (label1->Text == "0") {
		label1->Text = "0";
	}
	else {
		label1->Text = Convert::ToInt32(label1->Text) + "0";
	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//Botão 1
	if (label1->Text == "0") {
		label1->Text = "1";
	}
	else {
		label1->Text = Convert::ToInt32(label1->Text) + "1";
	}
}

private: System::Void botao2_Click(System::Object^ sender, System::EventArgs^ e) {
	//Botão 2
	if (label1->Text == "0") {
		label1->Text = "2";
	}
	else {
		label1->Text = Convert::ToInt32(label1->Text) + "2";
	}
}
private: System::Void botao3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label1->Text == "0") {
		label1->Text = "3";
	}
	else {
		label1->Text = Convert::ToInt32(label1->Text) + "3";
	}
}
private: System::Void botao4_Click(System::Object^ sender, System::EventArgs^ e) {

	if (label1->Text == "0") {
		label1->Text = "4";
	}
	else {
		label1->Text = Convert::ToInt32(label1->Text) + "4";
	}
}
private: System::Void botao5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label1->Text == "0") {
		label1->Text = "5";
	}
	else {
		label1->Text = Convert::ToInt32(label1->Text) + "5";
	}
}
private: System::Void botao6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label1->Text == "0") {
		label1->Text = "6";
	}
	else {
		label1->Text = Convert::ToInt32(label1->Text) + "6";
	}
}
private: System::Void botao7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label1->Text == "0") {
		label1->Text = "7";
	}
	else {
		label1->Text = Convert::ToInt32(label1->Text) + "7";
	}
}
private: System::Void botao8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label1->Text == "0") {
		label1->Text = "8";
	}
	else {
		label1->Text = Convert::ToInt32(label1->Text) + "8";
	}
}
private: System::Void botao9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label1->Text == "0") {
		label1->Text = "9";
	}
	else {
		label1->Text = Convert::ToInt32(label1->Text) + "9";
	}
}
private: System::Void botaoac_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//Botão de Reinicio
	label1->Text = "0";
	numero1 = 0;
	numero2 = 0;
	resultado = 0;

}
private: System::Void botaomais_Click(System::Object^ sender, System::EventArgs^ e) {
	numero1 = Convert::ToInt32(label1->Text);
	label1->Text = "0";
	operacao = '+';
}
private: System::Void botaomenos_Click(System::Object^ sender, System::EventArgs^ e) {
	numero1 = Convert::ToInt32(label1->Text);
	label1->Text = "0";
	operacao = '-';
}
private: System::Void botaoigual_Click(System::Object^ sender, System::EventArgs^ e) {
	numero2 = Convert::ToInt32(label1->Text);
	switch (operacao)
	{
	case '+': {
		resultado = numero1 + numero2;
		String^ reconvertido = System::Convert::ToString(resultado);
		label1->Text = reconvertido;
		break;
	}case '-': {
		resultado = numero1 - numero2;
		String^ reconvertido = System::Convert::ToString(resultado);
		label1->Text = reconvertido;
		break;
	}case '*': {
		resultado = numero1 * numero2;
		String^ reconvertido = System::Convert::ToString(resultado);
		label1->Text = reconvertido;
		break;
	}case '/': {
		resultado = numero1 / numero2;
		String^ reconvertido = System::Convert::ToString(resultado);
		label1->Text = reconvertido;
		break;
	}
	default:
		label1->Text = "0";
		break;
	}

}
};
}

