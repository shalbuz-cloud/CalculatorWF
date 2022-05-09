#pragma once

namespace CalculatorWF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>

	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ CalculationBox;
	private: System::Windows::Forms::Button^ btnPercent;
	private: System::Windows::Forms::Button^ btnClearEntry;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnBackSpace;
	private: System::Windows::Forms::Button^ btnInverse;
	private: System::Windows::Forms::Button^ btnPow;
	private: System::Windows::Forms::Button^ btnSqrt;
	private: System::Windows::Forms::Button^ btnDivide;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btnMultiply;
	private: System::Windows::Forms::Button^ btnMinus;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btnPlus;
	private: System::Windows::Forms::Button^ btnPlusMinus;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btnComma;
	private: System::Windows::Forms::Button^ btnEquals;
	private: System::Windows::Forms::Label^ labelShowOperation;


	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->CalculationBox = (gcnew System::Windows::Forms::TextBox());
			this->btnPercent = (gcnew System::Windows::Forms::Button());
			this->btnClearEntry = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnBackSpace = (gcnew System::Windows::Forms::Button());
			this->btnInverse = (gcnew System::Windows::Forms::Button());
			this->btnPow = (gcnew System::Windows::Forms::Button());
			this->btnSqrt = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnPlusMinus = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnComma = (gcnew System::Windows::Forms::Button());
			this->btnEquals = (gcnew System::Windows::Forms::Button());
			this->labelShowOperation = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// CalculationBox
			// 
			this->CalculationBox->BackColor = System::Drawing::SystemColors::Control;
			this->CalculationBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->CalculationBox->Enabled = false;
			this->CalculationBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CalculationBox->ForeColor = System::Drawing::Color::Black;
			this->CalculationBox->Location = System::Drawing::Point(6, 76);
			this->CalculationBox->MaxLength = 18;
			this->CalculationBox->Multiline = true;
			this->CalculationBox->Name = L"CalculationBox";
			this->CalculationBox->ReadOnly = true;
			this->CalculationBox->Size = System::Drawing::Size(297, 50);
			this->CalculationBox->TabIndex = 0;
			this->CalculationBox->TabStop = false;
			this->CalculationBox->Text = L"0";
			this->CalculationBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->CalculationBox->WordWrap = false;
			this->CalculationBox->TextChanged += gcnew System::EventHandler(this, &MainForm::CalculationBox_TextChanged);
			// 
			// btnPercent
			// 
			this->btnPercent->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPercent->Location = System::Drawing::Point(3, 143);
			this->btnPercent->Name = L"btnPercent";
			this->btnPercent->Size = System::Drawing::Size(75, 45);
			this->btnPercent->TabIndex = 1;
			this->btnPercent->Text = L"%";
			this->btnPercent->UseVisualStyleBackColor = true;
			this->btnPercent->Click += gcnew System::EventHandler(this, &MainForm::btnPercent_Click);
			// 
			// btnClearEntry
			// 
			this->btnClearEntry->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClearEntry->Location = System::Drawing::Point(79, 143);
			this->btnClearEntry->Name = L"btnClearEntry";
			this->btnClearEntry->Size = System::Drawing::Size(75, 45);
			this->btnClearEntry->TabIndex = 1;
			this->btnClearEntry->Text = L"CE";
			this->btnClearEntry->UseVisualStyleBackColor = true;
			this->btnClearEntry->Click += gcnew System::EventHandler(this, &MainForm::btnClearEntry_Click);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClear->Location = System::Drawing::Point(155, 143);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(75, 45);
			this->btnClear->TabIndex = 1;
			this->btnClear->Text = L"C";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MainForm::btnClear_Click);
			// 
			// btnBackSpace
			// 
			this->btnBackSpace->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnBackSpace->Location = System::Drawing::Point(231, 143);
			this->btnBackSpace->Name = L"btnBackSpace";
			this->btnBackSpace->Size = System::Drawing::Size(75, 45);
			this->btnBackSpace->TabIndex = 1;
			this->btnBackSpace->Text = L"⌫";
			this->btnBackSpace->UseVisualStyleBackColor = true;
			this->btnBackSpace->Click += gcnew System::EventHandler(this, &MainForm::btnBackSpace_Click);
			// 
			// btnInverse
			// 
			this->btnInverse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnInverse->Location = System::Drawing::Point(3, 189);
			this->btnInverse->Name = L"btnInverse";
			this->btnInverse->Size = System::Drawing::Size(75, 45);
			this->btnInverse->TabIndex = 1;
			this->btnInverse->Tag = L"";
			this->btnInverse->Text = L"⅟ₓ";
			this->btnInverse->UseVisualStyleBackColor = true;
			this->btnInverse->Click += gcnew System::EventHandler(this, &MainForm::btnInverse_Click);
			// 
			// btnPow
			// 
			this->btnPow->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPow->Location = System::Drawing::Point(79, 189);
			this->btnPow->Name = L"btnPow";
			this->btnPow->Size = System::Drawing::Size(75, 45);
			this->btnPow->TabIndex = 1;
			this->btnPow->Tag = L"";
			this->btnPow->Text = L"x²";
			this->btnPow->UseVisualStyleBackColor = true;
			this->btnPow->Click += gcnew System::EventHandler(this, &MainForm::btnPow_Click);
			// 
			// btnSqrt
			// 
			this->btnSqrt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSqrt->Location = System::Drawing::Point(155, 189);
			this->btnSqrt->Name = L"btnSqrt";
			this->btnSqrt->Size = System::Drawing::Size(75, 45);
			this->btnSqrt->TabIndex = 1;
			this->btnSqrt->Tag = L"";
			this->btnSqrt->Text = L"√";
			this->btnSqrt->UseVisualStyleBackColor = true;
			this->btnSqrt->Click += gcnew System::EventHandler(this, &MainForm::btnSqrt_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDivide->Location = System::Drawing::Point(231, 189);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(75, 45);
			this->btnDivide->TabIndex = 1;
			this->btnDivide->Tag = L"";
			this->btnDivide->Text = L"÷";
			this->btnDivide->UseVisualStyleBackColor = true;
			this->btnDivide->Click += gcnew System::EventHandler(this, &MainForm::Arithmetic);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn7->Location = System::Drawing::Point(3, 235);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(75, 45);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MainForm::btnDigit_Click);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn4->Location = System::Drawing::Point(3, 281);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(75, 45);
			this->btn4->TabIndex = 1;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MainForm::btnDigit_Click);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn8->Location = System::Drawing::Point(79, 235);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(75, 45);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MainForm::btnDigit_Click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn5->Location = System::Drawing::Point(79, 281);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(75, 45);
			this->btn5->TabIndex = 1;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MainForm::btnDigit_Click);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn9->Location = System::Drawing::Point(155, 235);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(75, 45);
			this->btn9->TabIndex = 1;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MainForm::btnDigit_Click);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn6->Location = System::Drawing::Point(155, 281);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(75, 45);
			this->btn6->TabIndex = 1;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MainForm::btnDigit_Click);
			// 
			// btnMultiply
			// 
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMultiply->Location = System::Drawing::Point(231, 235);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(75, 45);
			this->btnMultiply->TabIndex = 1;
			this->btnMultiply->Tag = L"";
			this->btnMultiply->Text = L"×";
			this->btnMultiply->UseVisualStyleBackColor = true;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &MainForm::Arithmetic);
			// 
			// btnMinus
			// 
			this->btnMinus->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMinus->Location = System::Drawing::Point(231, 281);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(75, 45);
			this->btnMinus->TabIndex = 1;
			this->btnMinus->Tag = L"";
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &MainForm::Arithmetic);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn1->Location = System::Drawing::Point(3, 327);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(75, 45);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MainForm::btnDigit_Click);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn2->Location = System::Drawing::Point(79, 327);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(75, 45);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MainForm::btnDigit_Click);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn3->Location = System::Drawing::Point(155, 327);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(75, 45);
			this->btn3->TabIndex = 1;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MainForm::btnDigit_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPlus->Location = System::Drawing::Point(231, 327);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(75, 45);
			this->btnPlus->TabIndex = 1;
			this->btnPlus->Tag = L"";
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &MainForm::Arithmetic);
			// 
			// btnPlusMinus
			// 
			this->btnPlusMinus->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPlusMinus->Location = System::Drawing::Point(3, 374);
			this->btnPlusMinus->Name = L"btnPlusMinus";
			this->btnPlusMinus->Size = System::Drawing::Size(75, 45);
			this->btnPlusMinus->TabIndex = 1;
			this->btnPlusMinus->Tag = L"";
			this->btnPlusMinus->Text = L"+/-";
			this->btnPlusMinus->UseVisualStyleBackColor = true;
			this->btnPlusMinus->Click += gcnew System::EventHandler(this, &MainForm::btnPlusMinus_Click);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn0->Location = System::Drawing::Point(79, 374);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(75, 45);
			this->btn0->TabIndex = 1;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MainForm::btnDigit_Click);
			// 
			// btnComma
			// 
			this->btnComma->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnComma->Location = System::Drawing::Point(155, 374);
			this->btnComma->Name = L"btnComma";
			this->btnComma->Size = System::Drawing::Size(75, 45);
			this->btnComma->TabIndex = 1;
			this->btnComma->Text = L",";
			this->btnComma->UseVisualStyleBackColor = true;
			this->btnComma->Click += gcnew System::EventHandler(this, &MainForm::btnComma_Click);
			// 
			// btnEquals
			// 
			this->btnEquals->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnEquals->Location = System::Drawing::Point(231, 374);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(75, 45);
			this->btnEquals->TabIndex = 1;
			this->btnEquals->Text = L"=";
			this->btnEquals->UseVisualStyleBackColor = true;
			this->btnEquals->Click += gcnew System::EventHandler(this, &MainForm::btnEquals_Click);
			// 
			// labelShowOperation
			// 
			this->labelShowOperation->BackColor = System::Drawing::SystemColors::Control;
			this->labelShowOperation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelShowOperation->ForeColor = System::Drawing::Color::Gray;
			this->labelShowOperation->Location = System::Drawing::Point(6, 7);
			this->labelShowOperation->MaximumSize = System::Drawing::Size(297, 90);
			this->labelShowOperation->Name = L"labelShowOperation";
			this->labelShowOperation->Size = System::Drawing::Size(297, 50);
			this->labelShowOperation->TabIndex = 2;
			this->labelShowOperation->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(310, 424);
			this->Controls->Add(this->labelShowOperation);
			this->Controls->Add(this->btnEquals);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnMultiply);
			this->Controls->Add(this->btnBackSpace);
			this->Controls->Add(this->btnComma);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btnSqrt);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btnPow);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btnClearEntry);
			this->Controls->Add(this->btnPlusMinus);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnInverse);
			this->Controls->Add(this->btnPercent);
			this->Controls->Add(this->CalculationBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(326, 463);
			this->MinimumSize = System::Drawing::Size(326, 463);
			this->Name = L"MainForm";
			this->Text = L"Calculator";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::MainForm_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	double firstNum = Double::NaN;
	double secondNum = Double::NaN;
	double result = Double::NaN;
	String^ currentOper;
	bool isCalculated = false;


	// button C
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
		CalculationBox->Text = "0";
		labelShowOperation->Text = "";
		result = Double::NaN;
		firstNum = Double::NaN;
		secondNum = Double::NaN;
		isCalculated = false;
		currentOper = "";
	}


	// number buttons
	private: System::Void btnDigit_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ numbers = safe_cast<Button^>(sender);

		if (CalculationBox->Text == "0")
		{
			CalculationBox->Text = numbers->Text;
		}
		else if (CalculationBox->Text->Length < CalculationBox->MaxLength)
		{
			CalculationBox->Text += numbers->Text;
		}
		isCalculated = false;
	}


	// operator event
	private: System::Void Arithmetic(System::Object^ sender, System::EventArgs^ e) {
		Button^ operators = safe_cast<Button^>(sender);
		String^ outNumber;

		// second operation
		if (labelShowOperation->Text != "")
		{
			// second number
			if (!isCalculated)
			{
				secondNum = Double::Parse(CalculationBox->Text);
			}
			
			if (Double::IsNaN(result))
			{
				calculate();
			}
			else
			{
				firstNum = result;
				if (!isCalculated)
				{
					calculate();
				}
			}
			outNumber = System::Convert::ToString(result);
		}
		else  // first operation
		{
			firstNum = Double::Parse(CalculationBox->Text);
			outNumber = System::Convert::ToString(firstNum);
		}

		currentOper = operators->Text;
		CalculationBox->Text = "";
		labelShowOperation->Text = outNumber + " " + currentOper;
	}
	

	void calculate()
	{
		if (!Double::IsNaN(firstNum) && !Double::IsNaN(secondNum))
		{ 
			if (currentOper == L"+")
			{
				result = firstNum + secondNum;
			}
			else if (currentOper == L"-")
			{
				result = firstNum - secondNum;
			}
			else if (currentOper == L"×")
			{
				result = firstNum * secondNum;
			}
			else if (currentOper == L"÷")
			{
				if (secondNum != 0)
				{
					result = firstNum / secondNum;
				}
				else
				{
					MessageBox::Show("Division by Zero", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
			}

			labelShowOperation->Text += String::Format(" {0} =", secondNum);
			CalculationBox->Text = System::Convert::ToString(result);
			isCalculated = true;
		}
	}


	// equals button
	private: System::Void btnEquals_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (!isCalculated)
		{
			//firstNum = Double::IsNaN(result) ? firstNum : result;
			secondNum = Double::Parse(CalculationBox->Text);
		}
		else
		{
			//firstNum = result;
			labelShowOperation->Text = String::Format("{0} {1}", firstNum, currentOper);
		}
		
		firstNum = Double::IsNaN(result) ? firstNum : result;
		//secondNum = isCalculated ? secondNum : Double::Parse(CalculationBox->Text);

		calculate();

	}


	// backspace button
	private: System::Void btnBackSpace_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CalculationBox->Text->Length > 0)
		{
			CalculationBox->Text = CalculationBox->Text->Remove(CalculationBox->Text->Length - 1, 1);
		}
	}


	private: System::Void CalculationBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		// default back 0
		if (CalculationBox->Text == "")
		{
			CalculationBox->Text = "0";
		}
	}


	// button comma
	private: System::Void btnComma_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!CalculationBox->Text->Contains(","))
		{
			CalculationBox->Text += ",";
		}
	}


	// button plus & minus
	private: System::Void btnPlusMinus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CalculationBox->Text->Contains("-"))
		{
			CalculationBox->Text = CalculationBox->Text->Remove(0, 1);
		}
		else
		{
			CalculationBox->Text = "-" + CalculationBox->Text;
		}
	}


	// button CE
	private: System::Void btnClearEntry_Click(System::Object^ sender, System::EventArgs^ e) {
		CalculationBox->Text = "";
	}


	// hotkeys
	private: System::Void MainForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

		switch (e->KeyCode)
		{
		case Keys::D0:
			btn0->PerformClick();
			break;
		case Keys::D1:
			btn1->PerformClick();
			break;
		case Keys::D2:
			btn2->PerformClick();
			break;
		case Keys::D3:
			btn3->PerformClick();
			break;
		case Keys::D4:
			btn4->PerformClick();
			break;
		case Keys::D5:
			btn5->PerformClick();
			break;
		case Keys::D6:
			btn6->PerformClick();
			break;
		case Keys::D7:
			btn7->PerformClick();
			break;
		case Keys::D8:
			e->Shift ? btnMultiply->PerformClick() : btn8->PerformClick();
			break;
		case Keys::D9:
			btn9->PerformClick();
			break;
		case Keys::Back:
			btnBackSpace->PerformClick();
			break;
		case Keys::Oemplus:
			e->Shift ? btnPlus->PerformClick() : btnEquals->PerformClick();
			break;
		case Keys::Multiply:
			btnMultiply->PerformClick();
			break;
		case Keys::Subtract:
			btnMinus->PerformClick();
			break;
		case Keys::OemMinus:
			btnMinus->PerformClick();
			break;
		case Keys::OemQuestion:
			btnDivide->PerformClick();
			break;
		case Keys::Oemcomma:
			btnComma->PerformClick();
			break;
		default:
			break;
		}
	
	}


	// button x² (sqr)
	private: System::Void btnPow_Click(System::Object^ sender, System::EventArgs^ e) {
		labelShowOperation->Text = String::Format("sqr ({0})", CalculationBox->Text);
		CalculationBox->Text = System::Convert::ToString(Math::Pow(Double::Parse(CalculationBox->Text), 2));
		
	}
	

	// button √ (sqrt)
	private: System::Void btnSqrt_Click(System::Object^ sender, System::EventArgs^ e) {
		labelShowOperation->Text = String::Format("sqrt ({0})", CalculationBox->Text);
		CalculationBox->Text = System::Convert::ToString(Math::Sqrt(Double::Parse(CalculationBox->Text)));
	}


	// button %
	private: System::Void btnPercent_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!Double::IsNaN(firstNum) && labelShowOperation->Text != "")
		{
			CalculationBox->Text = System::Convert::ToString(firstNum / 100 * Double::Parse(CalculationBox->Text));
		}
	}


	// button 1/x
	private: System::Void btnInverse_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CalculationBox->Text != "0")
		{
			labelShowOperation->Text = String::Format("1/({0})", CalculationBox->Text);
			CalculationBox->Text = System::Convert::ToString(1 / Double::Parse(CalculationBox->Text));
		}
	}


};
}
