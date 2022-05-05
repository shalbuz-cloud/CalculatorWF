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
			this->CalculationBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->CalculationBox->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CalculationBox->Location = System::Drawing::Point(12, 12);
			this->CalculationBox->Multiline = true;
			this->CalculationBox->Name = L"CalculationBox";
			this->CalculationBox->Size = System::Drawing::Size(263, 73);
			this->CalculationBox->TabIndex = 0;
			this->CalculationBox->Text = L"0";
			this->CalculationBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->CalculationBox->TextChanged += gcnew System::EventHandler(this, &MainForm::CalculationBox_TextChanged);
			// 
			// btnPercent
			// 
			this->btnPercent->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPercent->Location = System::Drawing::Point(14, 99);
			this->btnPercent->Name = L"btnPercent";
			this->btnPercent->Size = System::Drawing::Size(60, 40);
			this->btnPercent->TabIndex = 1;
			this->btnPercent->Text = L"%";
			this->btnPercent->UseVisualStyleBackColor = true;
			// 
			// btnClearEntry
			// 
			this->btnClearEntry->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClearEntry->Location = System::Drawing::Point(81, 99);
			this->btnClearEntry->Name = L"btnClearEntry";
			this->btnClearEntry->Size = System::Drawing::Size(60, 40);
			this->btnClearEntry->TabIndex = 1;
			this->btnClearEntry->Text = L"CE";
			this->btnClearEntry->UseVisualStyleBackColor = true;
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClear->Location = System::Drawing::Point(148, 99);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(60, 40);
			this->btnClear->TabIndex = 1;
			this->btnClear->Text = L"C";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MainForm::btnClear_Click);
			// 
			// btnBackSpace
			// 
			this->btnBackSpace->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnBackSpace->Location = System::Drawing::Point(215, 99);
			this->btnBackSpace->Name = L"btnBackSpace";
			this->btnBackSpace->Size = System::Drawing::Size(60, 40);
			this->btnBackSpace->TabIndex = 1;
			this->btnBackSpace->Text = L"⌫";
			this->btnBackSpace->UseVisualStyleBackColor = true;
			this->btnBackSpace->Click += gcnew System::EventHandler(this, &MainForm::btnBackSpace_Click);
			// 
			// btnInverse
			// 
			this->btnInverse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnInverse->Location = System::Drawing::Point(14, 145);
			this->btnInverse->Name = L"btnInverse";
			this->btnInverse->Size = System::Drawing::Size(60, 40);
			this->btnInverse->TabIndex = 1;
			this->btnInverse->Text = L"⅟ₓ";
			this->btnInverse->UseVisualStyleBackColor = true;
			// 
			// btnPow
			// 
			this->btnPow->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPow->Location = System::Drawing::Point(81, 145);
			this->btnPow->Name = L"btnPow";
			this->btnPow->Size = System::Drawing::Size(60, 40);
			this->btnPow->TabIndex = 1;
			this->btnPow->Text = L"x²";
			this->btnPow->UseVisualStyleBackColor = true;
			// 
			// btnSqrt
			// 
			this->btnSqrt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSqrt->Location = System::Drawing::Point(148, 145);
			this->btnSqrt->Name = L"btnSqrt";
			this->btnSqrt->Size = System::Drawing::Size(60, 40);
			this->btnSqrt->TabIndex = 1;
			this->btnSqrt->Text = L"√";
			this->btnSqrt->UseVisualStyleBackColor = true;
			// 
			// btnDivide
			// 
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDivide->Location = System::Drawing::Point(215, 145);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(60, 40);
			this->btnDivide->TabIndex = 1;
			this->btnDivide->Text = L"÷";
			this->btnDivide->UseVisualStyleBackColor = true;
			this->btnDivide->Click += gcnew System::EventHandler(this, &MainForm::Arithmetic);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn7->Location = System::Drawing::Point(14, 191);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(60, 40);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MainForm::btnDigit_Click);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn4->Location = System::Drawing::Point(14, 237);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(60, 40);
			this->btn4->TabIndex = 1;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MainForm::btnDigit_Click);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn8->Location = System::Drawing::Point(81, 191);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(60, 40);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MainForm::btnDigit_Click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn5->Location = System::Drawing::Point(81, 237);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(60, 40);
			this->btn5->TabIndex = 1;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MainForm::btnDigit_Click);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn9->Location = System::Drawing::Point(148, 191);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(60, 40);
			this->btn9->TabIndex = 1;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MainForm::btnDigit_Click);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn6->Location = System::Drawing::Point(148, 237);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(60, 40);
			this->btn6->TabIndex = 1;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MainForm::btnDigit_Click);
			// 
			// btnMultiply
			// 
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMultiply->Location = System::Drawing::Point(215, 191);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(60, 40);
			this->btnMultiply->TabIndex = 1;
			this->btnMultiply->Text = L"×";
			this->btnMultiply->UseVisualStyleBackColor = true;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &MainForm::Arithmetic);
			// 
			// btnMinus
			// 
			this->btnMinus->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMinus->Location = System::Drawing::Point(215, 237);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(60, 40);
			this->btnMinus->TabIndex = 1;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &MainForm::Arithmetic);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn1->Location = System::Drawing::Point(14, 283);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(60, 40);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MainForm::btnDigit_Click);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn2->Location = System::Drawing::Point(81, 283);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(60, 40);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MainForm::btnDigit_Click);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn3->Location = System::Drawing::Point(148, 283);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(60, 40);
			this->btn3->TabIndex = 1;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MainForm::btnDigit_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPlus->Location = System::Drawing::Point(215, 283);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(60, 40);
			this->btnPlus->TabIndex = 1;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &MainForm::Arithmetic);
			// 
			// btnPlusMinus
			// 
			this->btnPlusMinus->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPlusMinus->Location = System::Drawing::Point(14, 329);
			this->btnPlusMinus->Name = L"btnPlusMinus";
			this->btnPlusMinus->Size = System::Drawing::Size(60, 40);
			this->btnPlusMinus->TabIndex = 1;
			this->btnPlusMinus->Text = L"+/-";
			this->btnPlusMinus->UseVisualStyleBackColor = true;
			this->btnPlusMinus->Click += gcnew System::EventHandler(this, &MainForm::btnPlusMinus_Click);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn0->Location = System::Drawing::Point(81, 329);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(60, 40);
			this->btn0->TabIndex = 1;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MainForm::btnDigit_Click);
			// 
			// btnComma
			// 
			this->btnComma->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnComma->Location = System::Drawing::Point(148, 329);
			this->btnComma->Name = L"btnComma";
			this->btnComma->Size = System::Drawing::Size(60, 40);
			this->btnComma->TabIndex = 1;
			this->btnComma->Text = L",";
			this->btnComma->UseVisualStyleBackColor = true;
			this->btnComma->Click += gcnew System::EventHandler(this, &MainForm::btnComma_Click);
			// 
			// btnEquals
			// 
			this->btnEquals->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnEquals->Location = System::Drawing::Point(215, 329);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(60, 40);
			this->btnEquals->TabIndex = 1;
			this->btnEquals->Text = L"=";
			this->btnEquals->UseVisualStyleBackColor = true;
			this->btnEquals->Click += gcnew System::EventHandler(this, &MainForm::btnEquals_Click);
			// 
			// labelShowOperation
			// 
			this->labelShowOperation->AutoSize = true;
			this->labelShowOperation->BackColor = System::Drawing::Color::White;
			this->labelShowOperation->Location = System::Drawing::Point(17, 17);
			this->labelShowOperation->Name = L"labelShowOperation";
			this->labelShowOperation->Size = System::Drawing::Size(0, 13);
			this->labelShowOperation->TabIndex = 2;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(289, 385);
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
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(305, 424);
			this->Name = L"MainForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	double iFirstnum;
	double iSecondnum;
	double iResult;
	String^ iOperator;


	// button C
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
		CalculationBox->Text = "0";
		labelShowOperation->Text = "";
	}


	// number buttons
	private: System::Void btnDigit_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ numbers = safe_cast<Button^>(sender);

		if (CalculationBox->Text == "0")
		{
			CalculationBox->Text = numbers->Text;
		}
		else
		{
			CalculationBox->Text += numbers->Text;
		}
	}


	// operator event
	private: System::Void Arithmetic(System::Object^ sender, System::EventArgs^ e) {
		Button^ operators = safe_cast<Button^>(sender);
		iFirstnum = Double::Parse(CalculationBox->Text);
		CalculationBox->Text = "";
		iOperator = operators->Text;
		labelShowOperation->Text = System::Convert::ToString(iFirstnum) + " " + iOperator;
	}
	

	// equals button
	private: System::Void btnEquals_Click(System::Object^ sender, System::EventArgs^ e) {
		labelShowOperation->Text = "";
		iSecondnum = Double::Parse(CalculationBox->Text);  // FIXME: Несколько операций 

		if (iOperator == "+")
		{
			iResult = iFirstnum + iSecondnum;
			CalculationBox->Text = System::Convert::ToString(iResult);
		}
		else if (iOperator == "-")
		{
			iResult = iFirstnum - iSecondnum;
			CalculationBox->Text = System::Convert::ToString(iResult);
		}
		else if (iOperator == L"×")
		{
			iResult = iFirstnum * iSecondnum;
			CalculationBox->Text = System::Convert::ToString(iResult);
		}
		else if (iOperator == L"÷")
		{
			if (iSecondnum != 0)
			{
				iResult = iFirstnum / iSecondnum;
				CalculationBox->Text = System::Convert::ToString(iResult);
			}
			else
			{
				MessageBox::Show("Division by Zero", "Error");
			}
		}
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


};
}
