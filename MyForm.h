#pragma once

namespace ExampleCPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:







	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button_delete;

	private: System::Windows::Forms::Button^ button_update;

	private: System::Windows::Forms::Button^ button_add;

	private: System::Windows::Forms::Button^ button_download;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ barCode;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ weight;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cost;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ count;
















	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button_delete = (gcnew System::Windows::Forms::Button());
			this->button_update = (gcnew System::Windows::Forms::Button());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->button_download = (gcnew System::Windows::Forms::Button());
			this->barCode = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->weight = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->count = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->barCode,
					this->name, this->weight, this->cost, this->count
			});
			this->dataGridView1->Location = System::Drawing::Point(29, 40);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(841, 387);
			this->dataGridView1->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button_delete);
			this->groupBox1->Controls->Add(this->button_update);
			this->groupBox1->Controls->Add(this->button_add);
			this->groupBox1->Controls->Add(this->button_download);
			this->groupBox1->Location = System::Drawing::Point(29, 467);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(841, 90);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Action";
			// 
			// button_delete
			// 
			this->button_delete->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_delete->Location = System::Drawing::Point(536, 23);
			this->button_delete->Margin = System::Windows::Forms::Padding(4);
			this->button_delete->Name = L"button_delete";
			this->button_delete->Size = System::Drawing::Size(113, 42);
			this->button_delete->TabIndex = 3;
			this->button_delete->Text = L"Delete";
			this->button_delete->UseVisualStyleBackColor = true;
			this->button_delete->Click += gcnew System::EventHandler(this, &MyForm::button_delete_Click);
			// 
			// button_update
			// 
			this->button_update->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_update->Location = System::Drawing::Point(404, 23);
			this->button_update->Margin = System::Windows::Forms::Padding(4);
			this->button_update->Name = L"button_update";
			this->button_update->Size = System::Drawing::Size(113, 42);
			this->button_update->TabIndex = 2;
			this->button_update->Text = L"Update";
			this->button_update->UseVisualStyleBackColor = true;
			this->button_update->Click += gcnew System::EventHandler(this, &MyForm::button_update_Click);
			// 
			// button_add
			// 
			this->button_add->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_add->Location = System::Drawing::Point(288, 23);
			this->button_add->Margin = System::Windows::Forms::Padding(4);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(88, 42);
			this->button_add->TabIndex = 1;
			this->button_add->Text = L"Add";
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Click += gcnew System::EventHandler(this, &MyForm::button_add_Click);
			// 
			// button_download
			// 
			this->button_download->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_download->Location = System::Drawing::Point(189, 23);
			this->button_download->Margin = System::Windows::Forms::Padding(4);
			this->button_download->Name = L"button_download";
			this->button_download->Size = System::Drawing::Size(80, 42);
			this->button_download->TabIndex = 0;
			this->button_download->Text = L"Load";
			this->button_download->UseVisualStyleBackColor = true;
			this->button_download->Click += gcnew System::EventHandler(this, &MyForm::button_download_Click);
			// 
			// barCode
			// 
			this->barCode->HeaderText = L"Bar code";
			this->barCode->MinimumWidth = 6;
			this->barCode->Name = L"barCode";
			this->barCode->Width = 125;
			// 
			// name
			// 
			this->name->HeaderText = L"Name";
			this->name->MinimumWidth = 6;
			this->name->Name = L"name";
			this->name->Width = 125;
			// 
			// weight
			// 
			this->weight->HeaderText = L"Weight(kg)";
			this->weight->MinimumWidth = 6;
			this->weight->Name = L"weight";
			this->weight->Width = 125;
			// 
			// cost
			// 
			this->cost->HeaderText = L"Cost($)";
			this->cost->MinimumWidth = 6;
			this->cost->Name = L"cost";
			this->cost->Width = 125;
			// 
			// count
			// 
			this->count->HeaderText = L"Count";
			this->count->MinimumWidth = 6;
			this->count->Name = L"count";
			this->count->Width = 125;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(897, 587);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(915, 634);
			this->MinimumSize = System::Drawing::Size(915, 634);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Cклад товарів";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void AboutProgramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_download_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_add_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_update_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_delete_Click(System::Object^ sender, System::EventArgs^ e);
	};
}