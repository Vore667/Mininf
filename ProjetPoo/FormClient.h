#pragma once
#include "sqlFunction.h"

namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormClient
	/// </summary>
	public ref class FormClient : public System::Windows::Forms::Form
	{
	public:
		FormClient(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~FormClient()
		{
			if (components)
			{
				delete components;
			}
		}
	//private: NS_sql_Function::sqlFunction^ oSvc;
	//private: System::Data::DataSet^ oDs;

	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Panel^ panelDelete;
	private: System::Windows::Forms::Label^ ClientDelete;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnAffiche;
	private: System::Windows::Forms::Button^ btnInsere;
	private: System::Windows::Forms::Button^ btnModifier;
	private: System::Windows::Forms::Button^ btnSupp;

	private: System::Windows::Forms::Panel^ panelInserer;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::Panel^ panelAfficher;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panelModifier;




	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;







	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panelDelete = (gcnew System::Windows::Forms::Panel());
			this->panelAfficher = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ClientDelete = (gcnew System::Windows::Forms::Label());
			this->panelInserer = (gcnew System::Windows::Forms::Panel());
			this->panelModifier = (gcnew System::Windows::Forms::Panel());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btnAffiche = (gcnew System::Windows::Forms::Button());
			this->btnInsere = (gcnew System::Windows::Forms::Button());
			this->btnModifier = (gcnew System::Windows::Forms::Button());
			this->btnSupp = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panelDelete->SuspendLayout();
			this->panelAfficher->SuspendLayout();
			this->panelInserer->SuspendLayout();
			this->panelModifier->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(9, 8);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(768, 184);
			this->dataGridView1->TabIndex = 0;
			// 
			// panelDelete
			// 
			this->panelDelete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelDelete->Controls->Add(this->panelAfficher);
			this->panelDelete->Controls->Add(this->textBox6);
			this->panelDelete->Controls->Add(this->label8);
			this->panelDelete->Controls->Add(this->button1);
			this->panelDelete->Controls->Add(this->label3);
			this->panelDelete->Controls->Add(this->textBox2);
			this->panelDelete->Controls->Add(this->label2);
			this->panelDelete->Controls->Add(this->textBox1);
			this->panelDelete->Controls->Add(this->label1);
			this->panelDelete->Controls->Add(this->ClientDelete);
			this->panelDelete->Location = System::Drawing::Point(181, 195);
			this->panelDelete->Name = L"panelDelete";
			this->panelDelete->Size = System::Drawing::Size(598, 271);
			this->panelDelete->TabIndex = 1;
			// 
			// panelAfficher
			// 
			this->panelAfficher->Controls->Add(this->textBox5);
			this->panelAfficher->Controls->Add(this->label7);
			this->panelAfficher->Controls->Add(this->button2);
			this->panelAfficher->Controls->Add(this->textBox4);
			this->panelAfficher->Controls->Add(this->label6);
			this->panelAfficher->Controls->Add(this->textBox3);
			this->panelAfficher->Controls->Add(this->label5);
			this->panelAfficher->Controls->Add(this->label4);
			this->panelAfficher->Location = System::Drawing::Point(3, 0);
			this->panelAfficher->Name = L"panelAfficher";
			this->panelAfficher->Size = System::Drawing::Size(595, 270);
			this->panelAfficher->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(16, 233);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(200, 22);
			this->textBox5->TabIndex = 7;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(13, 204);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(124, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Date d\'anniversaire";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(268, 179);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(186, 74);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Afficher";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(16, 156);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(200, 22);
			this->textBox4->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 126);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 16);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Prénom";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(16, 77);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(200, 22);
			this->textBox3->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 49);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 16);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Nom";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 16);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Afficher";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(17, 221);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(200, 22);
			this->textBox6->TabIndex = 10;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(17, 194);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(132, 16);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Date d\'anniversaire *";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(269, 179);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(186, 74);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Supprimer";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 194);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 16);
			this->label3->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(17, 154);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(200, 22);
			this->textBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 126);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Prénom *";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(17, 77);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 22);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 49);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nom *";
			// 
			// ClientDelete
			// 
			this->ClientDelete->AutoSize = true;
			this->ClientDelete->Location = System::Drawing::Point(17, 18);
			this->ClientDelete->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ClientDelete->Name = L"ClientDelete";
			this->ClientDelete->Size = System::Drawing::Size(69, 16);
			this->ClientDelete->TabIndex = 0;
			this->ClientDelete->Text = L"Supprimer";
			// 
			// panelInserer
			// 
			this->panelInserer->Controls->Add(this->textBox12);
			this->panelInserer->Controls->Add(this->label15);
			this->panelInserer->Controls->Add(this->textBox11);
			this->panelInserer->Controls->Add(this->label14);
			this->panelInserer->Controls->Add(this->textBox10);
			this->panelInserer->Controls->Add(this->label13);
			this->panelInserer->Controls->Add(this->button3);
			this->panelInserer->Controls->Add(this->textBox9);
			this->panelInserer->Controls->Add(this->label12);
			this->panelInserer->Controls->Add(this->textBox8);
			this->panelInserer->Controls->Add(this->label11);
			this->panelInserer->Controls->Add(this->textBox7);
			this->panelInserer->Controls->Add(this->label10);
			this->panelInserer->Controls->Add(this->label9);
			this->panelInserer->Location = System::Drawing::Point(179, 195);
			this->panelInserer->Margin = System::Windows::Forms::Padding(2);
			this->panelInserer->Name = L"panelInserer";
			this->panelInserer->Size = System::Drawing::Size(598, 271);
			this->panelInserer->TabIndex = 8;
			// 
			// panelModifier
			// 
			this->panelModifier->Controls->Add(this->textBox13);
			this->panelModifier->Controls->Add(this->label16);
			this->panelModifier->Controls->Add(this->textBox14);
			this->panelModifier->Controls->Add(this->label17);
			this->panelModifier->Controls->Add(this->textBox15);
			this->panelModifier->Controls->Add(this->label18);
			this->panelModifier->Controls->Add(this->button4);
			this->panelModifier->Controls->Add(this->textBox16);
			this->panelModifier->Controls->Add(this->label19);
			this->panelModifier->Controls->Add(this->textBox17);
			this->panelModifier->Controls->Add(this->label20);
			this->panelModifier->Controls->Add(this->textBox18);
			this->panelModifier->Controls->Add(this->label21);
			this->panelModifier->Controls->Add(this->label22);
			this->panelModifier->Location = System::Drawing::Point(179, 195);
			this->panelModifier->Margin = System::Windows::Forms::Padding(2);
			this->panelModifier->Name = L"panelModifier";
			this->panelModifier->Size = System::Drawing::Size(598, 271);
			this->panelModifier->TabIndex = 14;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(255, 233);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(200, 22);
			this->textBox13->TabIndex = 13;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(252, 201);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(33, 16);
			this->label16->TabIndex = 12;
			this->label16->Text = L"Ville";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(255, 157);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(200, 22);
			this->textBox14->TabIndex = 11;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(255, 131);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(81, 16);
			this->label17->TabIndex = 10;
			this->label17->Text = L"Code Postal";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(255, 87);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(200, 22);
			this->textBox15->TabIndex = 9;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(255, 59);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(58, 16);
			this->label18->TabIndex = 8;
			this->label18->Text = L"Adresse";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(483, 221);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 45);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Modifier";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(15, 233);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(200, 22);
			this->textBox16->TabIndex = 6;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(16, 201);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(120, 16);
			this->label19->TabIndex = 5;
			this->label19->Text = L"Date de naissance";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(15, 157);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(200, 22);
			this->textBox17->TabIndex = 4;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(16, 131);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(54, 16);
			this->label20->TabIndex = 3;
			this->label20->Text = L"Prénom";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(15, 87);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(200, 22);
			this->textBox18->TabIndex = 2;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(16, 59);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(36, 16);
			this->label21->TabIndex = 1;
			this->label21->Text = L"Nom";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(17, 18);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(55, 16);
			this->label22->TabIndex = 0;
			this->label22->Text = L"Modifier";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(255, 233);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(200, 22);
			this->textBox12->TabIndex = 13;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(252, 201);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(33, 16);
			this->label15->TabIndex = 12;
			this->label15->Text = L"Ville";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(255, 157);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(200, 22);
			this->textBox11->TabIndex = 11;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(255, 131);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(81, 16);
			this->label14->TabIndex = 10;
			this->label14->Text = L"Code Postal";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(255, 87);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(200, 22);
			this->textBox10->TabIndex = 9;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(255, 59);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(58, 16);
			this->label13->TabIndex = 8;
			this->label13->Text = L"Adresse";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(483, 221);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 45);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Insérer";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(15, 233);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(200, 22);
			this->textBox9->TabIndex = 6;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(16, 201);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(120, 16);
			this->label12->TabIndex = 5;
			this->label12->Text = L"Date de naissance";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(15, 157);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(200, 22);
			this->textBox8->TabIndex = 4;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(16, 131);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(54, 16);
			this->label11->TabIndex = 3;
			this->label11->Text = L"Prénom";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(15, 87);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(200, 22);
			this->textBox7->TabIndex = 2;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(16, 59);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(36, 16);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Nom";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(17, 18);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(48, 16);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Insérer";
			// 
			// btnAffiche
			// 
			this->btnAffiche->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->btnAffiche->Location = System::Drawing::Point(9, 196);
			this->btnAffiche->Margin = System::Windows::Forms::Padding(2);
			this->btnAffiche->MinimumSize = System::Drawing::Size(167, 62);
			this->btnAffiche->Name = L"btnAffiche";
			this->btnAffiche->Size = System::Drawing::Size(167, 62);
			this->btnAffiche->TabIndex = 2;
			this->btnAffiche->Text = L"Mode Afficher";
			this->btnAffiche->UseVisualStyleBackColor = true;
			this->btnAffiche->Click += gcnew System::EventHandler(this, &FormClient::btnAffiche_Click_1);
			// 
			// btnInsere
			// 
			this->btnInsere->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->btnInsere->Location = System::Drawing::Point(9, 264);
			this->btnInsere->Margin = System::Windows::Forms::Padding(2);
			this->btnInsere->MinimumSize = System::Drawing::Size(167, 62);
			this->btnInsere->Name = L"btnInsere";
			this->btnInsere->Size = System::Drawing::Size(167, 62);
			this->btnInsere->TabIndex = 3;
			this->btnInsere->Text = L"Mode Insérer";
			this->btnInsere->UseVisualStyleBackColor = true;
			this->btnInsere->Click += gcnew System::EventHandler(this, &FormClient::btnInsere_Click);
			// 
			// btnModifier
			// 
			this->btnModifier->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->btnModifier->Location = System::Drawing::Point(9, 332);
			this->btnModifier->Margin = System::Windows::Forms::Padding(2);
			this->btnModifier->MinimumSize = System::Drawing::Size(167, 62);
			this->btnModifier->Name = L"btnModifier";
			this->btnModifier->Size = System::Drawing::Size(167, 62);
			this->btnModifier->TabIndex = 4;
			this->btnModifier->Text = L"Mode Modifier";
			this->btnModifier->UseVisualStyleBackColor = true;
			this->btnModifier->Click += gcnew System::EventHandler(this, &FormClient::btnModifier_Click);
			// 
			// btnSupp
			// 
			this->btnSupp->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->btnSupp->Location = System::Drawing::Point(9, 400);
			this->btnSupp->Margin = System::Windows::Forms::Padding(2);
			this->btnSupp->MinimumSize = System::Drawing::Size(167, 62);
			this->btnSupp->Name = L"btnSupp";
			this->btnSupp->Size = System::Drawing::Size(167, 62);
			this->btnSupp->TabIndex = 5;
			this->btnSupp->Text = L"Mode Supprimer";
			this->btnSupp->UseVisualStyleBackColor = true;
			this->btnSupp->Click += gcnew System::EventHandler(this, &FormClient::btnSupp_Click);
			// 
			// FormClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(785, 472);
			this->Controls->Add(this->panelInserer);
			this->Controls->Add(this->btnSupp);
			this->Controls->Add(this->btnModifier);
			this->Controls->Add(this->btnInsere);
			this->Controls->Add(this->btnAffiche);
			this->Controls->Add(this->panelDelete);
			this->Controls->Add(this->panelModifier);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MinimumSize = System::Drawing::Size(803, 519);
			this->Name = L"FormClient";
			this->Text = L"FormClient";
			this->Load += gcnew System::EventHandler(this, &FormClient::FormClient_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panelDelete->ResumeLayout(false);
			this->panelDelete->PerformLayout();
			this->panelAfficher->ResumeLayout(false);
			this->panelAfficher->PerformLayout();
			this->panelInserer->ResumeLayout(false);
			this->panelInserer->PerformLayout();
			this->panelModifier->ResumeLayout(false);
			this->panelModifier->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void FormClient_Load(System::Object^ sender, System::EventArgs^ e) {
		this->panelDelete->Hide();
		this->panelAfficher->Hide();
		this->panelInserer->Hide();
		this->panelModifier->Hide();
		//oSvc = gcnew NS_sql_Function::sqlFunction();
	}
	private: System::Void btnSupp_Click(System::Object^ sender, System::EventArgs^ e) {

		this->panelDelete->Show();
		this->panelAfficher->Hide();
		this->panelInserer->Hide();
		this->panelModifier->Hide();
	}
	private: System::Void btnModifier_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelDelete->Hide();
		this->panelAfficher->Hide();
		this->panelInserer->Hide();
		this->panelModifier->Show();
	}
	private: System::Void btnInsere_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panelDelete->Hide();
		this->panelAfficher->Hide();
		this->panelInserer->Show();
		this->panelModifier->Hide();
	}
	private: System::Void btnAffiche_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->panelDelete->Show();
		this->panelAfficher->Show();
		this->panelInserer->Hide();
		this->panelModifier->Hide();
	}

};

}
