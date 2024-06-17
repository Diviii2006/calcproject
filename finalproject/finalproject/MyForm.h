#pragma once
#include<math.h>
#include<cmath>

namespace finalproject {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;

	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;

























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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox1->Location = System::Drawing::Point(30, 27);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(719, 47);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Location = System::Drawing::Point(30, 94);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 55);
			this->button1->TabIndex = 1;
			this->button1->Text = L"sin";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Location = System::Drawing::Point(577, 94);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 55);
			this->button2->TabIndex = 2;
			this->button2->Text = L"sinh";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"Wingdings", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button3->Location = System::Drawing::Point(254, 93);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 55);
			this->button3->TabIndex = 3;
			this->button3->Text = L"";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Location = System::Drawing::Point(368, 94);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 55);
			this->button4->TabIndex = 4;
			this->button4->Text = L"AC";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(469, 94);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 55);
			this->button5->TabIndex = 5;
			this->button5->Text = L"%";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button6->Location = System::Drawing::Point(30, 162);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(90, 55);
			this->button6->TabIndex = 6;
			this->button6->Text = L"cos";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button7->Location = System::Drawing::Point(146, 162);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(90, 55);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button8->Location = System::Drawing::Point(254, 162);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(90, 55);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button9->Location = System::Drawing::Point(368, 162);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(90, 55);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button10->Location = System::Drawing::Point(469, 162);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(90, 55);
			this->button10->TabIndex = 10;
			this->button10->Text = L"/";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button11->Location = System::Drawing::Point(30, 227);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(90, 55);
			this->button11->TabIndex = 11;
			this->button11->Text = L"tan";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button12->Location = System::Drawing::Point(146, 227);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(90, 55);
			this->button12->TabIndex = 12;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button13->Location = System::Drawing::Point(254, 227);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(90, 55);
			this->button13->TabIndex = 13;
			this->button13->Text = L"5";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button14->Location = System::Drawing::Point(368, 227);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(90, 55);
			this->button14->TabIndex = 14;
			this->button14->Text = L"6";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(469, 227);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(90, 55);
			this->button15->TabIndex = 15;
			this->button15->Text = L"*";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button17->Location = System::Drawing::Point(146, 288);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(90, 55);
			this->button17->TabIndex = 17;
			this->button17->Text = L"1";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button18->Location = System::Drawing::Point(254, 288);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(90, 55);
			this->button18->TabIndex = 18;
			this->button18->Text = L"2";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button19->Location = System::Drawing::Point(368, 288);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(90, 55);
			this->button19->TabIndex = 19;
			this->button19->Text = L"3";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(469, 288);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(90, 55);
			this->button20->TabIndex = 20;
			this->button20->Text = L"-";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button21->Location = System::Drawing::Point(674, 95);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 55);
			this->button21->TabIndex = 21;
			this->button21->Text = L"x^x";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button22->Location = System::Drawing::Point(146, 349);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(90, 55);
			this->button22->TabIndex = 22;
			this->button22->Text = L"0";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(254, 349);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(90, 55);
			this->button23->TabIndex = 23;
			this->button23->Text = L".";
			this->button23->UseVisualStyleBackColor = false;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(30, 288);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(90, 116);
			this->button24->TabIndex = 24;
			this->button24->Text = L"=";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(469, 349);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(90, 55);
			this->button25->TabIndex = 25;
			this->button25->Text = L"+";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button26->Location = System::Drawing::Point(577, 165);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(81, 52);
			this->button26->TabIndex = 26;
			this->button26->Text = L"cosh";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button27->Location = System::Drawing::Point(577, 230);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(81, 52);
			this->button27->TabIndex = 27;
			this->button27->Text = L"tanh";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button28->Location = System::Drawing::Point(368, 352);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(90, 55);
			this->button28->TabIndex = 28;
			this->button28->Text = L"log";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button29->Location = System::Drawing::Point(577, 291);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(81, 55);
			this->button29->TabIndex = 29;
			this->button29->Text = L"pi";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button30->Location = System::Drawing::Point(577, 349);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(81, 55);
			this->button30->TabIndex = 30;
			this->button30->Text = L"e";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button31->Location = System::Drawing::Point(674, 165);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(75, 55);
			this->button31->TabIndex = 31;
			this->button31->Text = L"e^x";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(146, 94);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(90, 52);
			this->button32->TabIndex = 32;
			this->button32->Text = L" √";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button33->Location = System::Drawing::Point(676, 350);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(73, 52);
			this->button33->TabIndex = 33;
			this->button33->Text = L"x^2";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button34->Location = System::Drawing::Point(674, 226);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(75, 55);
			this->button34->TabIndex = 34;
			this->button34->Text = L"1/x";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button35->Location = System::Drawing::Point(676, 294);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(73, 52);
			this->button35->TabIndex = 35;
			this->button35->Text = L"mod";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(921, 459);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"/\\";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double num1, num2;
		String^ Sing;

private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "1";

}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "2";
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "3";
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "4";
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "5";
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "6";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "7";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "8";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "9";
}

	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "0";
	}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{
		num1 = System::Convert::ToDouble(textBox1->Text);
		textBox1->Text = " ";
		Sing = "-";
	}

}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{
		num1 = System::Convert::ToDouble(textBox1->Text);
		textBox1->Text = " ";
		Sing = "*";
	}

}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{
		num1 = System::Convert::ToDouble(textBox1->Text);
		textBox1->Text = " ";
		Sing = "/";
	}

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (textBox1->Text != "")
	{
		num1 = System::Convert::ToDouble(textBox1->Text);
		textBox1->Text = " ";
		Sing = "%";
	}


}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{
		num1 = System::Convert::ToDouble(textBox1->Text);
		num1 = num1 * 3.14159265359 / 180;

		Double d = sin(num1);
		textBox1->Text = System::Convert::ToString(d);
	}

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{
		num1 = System::Convert::ToDouble(textBox1->Text);
		num1 = num1 * 3.14159265359 / 180;

		float d = cos(num1);
		textBox1->Text = System::Convert::ToString(d);
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{
		num1 = System::Convert::ToDouble(textBox1->Text);
		num1 = num1 * 3.14159265359 / 180;

		float d = tan(num1);
		textBox1->Text = System::Convert::ToString(d);
	}

}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	

}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	Double num1, num2;

	num1 = System::Convert::ToDouble(textBox1->Text);
	num2 = System::Convert::ToDouble(textBox1->Text);
	float d = pow(num1, num2);
	textBox1->Text = System::Convert::ToString(round(d));

}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{
		num1 = System::Convert::ToDouble(textBox1->Text);
		textBox1->Text = " ";
		Sing = "+";
	}

}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	double result;
    if (Sing == "+" && textBox1->Text != "")
    {
        num2 = System::Convert::ToDouble(textBox1->Text);
        result = num1 + num2;
        textBox1->Text = System::Convert::ToString(result);
    }
    else if (Sing == "-" && textBox1->Text != "") // Corrected underscore to minus sign
    {
        num2 = System::Convert::ToDouble(textBox1->Text);
        result = num1 - num2;
        textBox1->Text = System::Convert::ToString(result);
    }
    else if (Sing == "*" && textBox1->Text != "") // Removed semicolon
    {
        num2 = System::Convert::ToDouble(textBox1->Text);
        result = num1 * num2;
        textBox1->Text = System::Convert::ToString(result);
    }
    else if (Sing == "/" && textBox1->Text != "") // Removed semicolon
    {
        num2 = System::Convert::ToDouble(textBox1->Text);
        result = num1 / num2;
        textBox1->Text = System::Convert::ToString(result);
    }
    else if (Sing == "%" && textBox1->Text != "") // Removed semicolon
    {
        num2 = System::Convert::ToDouble(textBox1->Text);
        result = fmod(num1,num2);
        textBox1->Text = System::Convert::ToString(result);
    }
    else if (Sing == "num1" && textBox1->Text != "") // Removed semicolon
		{
			num1 = System::Convert::ToDouble(textBox1->Text);
			result = sin(num1);
			textBox1->Text = System::Convert::ToString(result);
		}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{
		num1 = System::Convert::ToDouble(textBox1->Text);
		num1 = num1 * 3.14159265359 / 180;

		float d = sinh(num1);
		textBox1->Text = System::Convert::ToString(d);
	}

}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{
		num1 = System::Convert::ToDouble(textBox1->Text);
		num1 = num1 * 3.14159265359 / 180;

		float d = cosh(num1);
		textBox1->Text = System::Convert::ToString(d);
	}

}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	double d;
	num1 = System::Convert::ToDouble(textBox1->Text);
	d = exp(num1);
	textBox1->Text = System::Convert::ToString(d);

}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
	double d;
	num1 = System::Convert::ToDouble(textBox1->Text);
	d = 1.0 / (num1);
	textBox1->Text = System::Convert::ToString(d);

}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "")
	{
		num1 = System::Convert::ToDouble(textBox1->Text);
		num1 = num1 * 3.14159265359 / 180;

		float d = tanh(num1);
		textBox1->Text = System::Convert::ToString(d);
	}

}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	double d;
	num1 = System::Convert::ToDouble(textBox1->Text);
	d = 2.71828182846 * (num1);
	textBox1->Text = System::Convert::ToString(d);

}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	double d;
	num1 = System::Convert::ToDouble(textBox1->Text);
	d = log10(num1);
	textBox1->Text = System::Convert::ToString(d);

}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ inputText = textBox1->Text;
	try
	{
		double inputValue = System::Convert::ToDouble(inputText);
		double result = System::Math::Sqrt(inputValue);
		textBox1->Text = result.ToString();
	}
	catch (System::FormatException^)
	{
		MessageBox::Show("Please enter a valid number.");
	}

}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!String::IsNullOrEmpty(textBox1->Text))
	{
		double d = System::Convert::ToDouble(textBox1->Text);
		d = -d;
		textBox1->Text = System::Convert::ToString(d);
	}

}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	double num1 = Convert::ToDouble(textBox1->Text);
	double pi = 3.14159265358979323846 * num1;
	textBox1->Text = pi.ToString();
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
