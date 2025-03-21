#pragma once

namespace MiniGrid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	#include "SolarPanels.h"
	#include "Generators.h"
	#include "Turbines.h"

	// Global variables:
	// Yearly power usage in KWh
	int powerUsage = 0;
	// Cost per KWh
	double costPerKWh = 0;
	// Total surface area of solar panels
	int totalSurfaceArea = 0;
	// Total weight of solar panels
	int totalWeight = 0;
	// Cost of solar panels
	double costSolarPanelsSmall = 0;
	double costSolarPanelsLarge = 0;
	double costSolarPanels = 0;
	// Cost of generators
	double costGenerators = 0;
	// Cost of turbines
	double costTurbines = 0;
	// Cost of batteries
	double costBatteries = 0;
	// Total cost
	int totalCost = 0;

	

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
	private: System::Windows::Forms::TextBox^ totalPowerInput;
	private: System::Windows::Forms::Button^ totalPowerSubmit;
	protected:

	protected:

	protected:


	public: SolarPanels^ panelSmall = gcnew SolarPanels(16.5, 40, 1155, 50589);
	public: SolarPanels^ panelLarge = gcnew SolarPanels(19.5, 50, 1485, 74285);
	public: Generators^ generatorSmall = gcnew Generators(657000, 27, 62288, 1);
	public: Generators^ generatorMedium = gcnew Generators(3285000, 105, 244230, 1);
	public: Generators^ generatorLarge = gcnew Generators(7227000, 105, 415910, 1);
	public: Turbines^ turbineSmall = gcnew Turbines(21500, 64000, 1);
	public: Turbines^ turbineMedium = gcnew Turbines(36000, 100000, 1);
	public: Turbines^ turbineLarge = gcnew Turbines(7008000, 1860217, 1);

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TreeView^ treeView3;
	private: System::Windows::Forms::Label^ totalCostLabel;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ solarPanelsCheck;
	private: System::Windows::Forms::CheckBox^ generatorsCheck;
	private: System::Windows::Forms::CheckBox^ turbinesCheck;
	private: System::Windows::Forms::CheckBox^ panelSmallCheck;
	private: System::Windows::Forms::CheckBox^ panelMedCheck;
	private: System::Windows::Forms::CheckBox^ generatorsCheckSmall;
	private: System::Windows::Forms::CheckBox^ generatorsCheckMedium;
	private: System::Windows::Forms::CheckBox^ generatorCheckLarge;
	private: System::Windows::Forms::CheckBox^ turbinesCheckLarge;

	private: System::Windows::Forms::CheckBox^ turbinesCheckMed;

	private: System::Windows::Forms::CheckBox^ turbinesCheckSmall;
	private: System::Windows::Forms::TextBox^ panelSmallInput;
	private: System::Windows::Forms::TextBox^ panelLargeInput;
	private: System::Windows::Forms::TextBox^ generatorSmallInput;
	private: System::Windows::Forms::TextBox^ generatorMediumInput;
	private: System::Windows::Forms::TextBox^ generatorLargeInput;
	private: System::Windows::Forms::TextBox^ turbineLargeInput;

	private: System::Windows::Forms::TextBox^ turbineMediumInput;

	private: System::Windows::Forms::TextBox^ turbineSmallInput;
	private: System::Windows::Forms::Label^ totalPanelCost;
	private: System::Windows::Forms::Label^ totalGeneratorCost;
	private: System::Windows::Forms::Label^ totalTurbineCost;











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
			System::Windows::Forms::TreeNode^ treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"$ / KWH:"));
			System::Windows::Forms::TreeNode^ treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"Total Surface Area of Panels"));
			System::Windows::Forms::TreeNode^ treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"Total Weight of Panels"));
			System::Windows::Forms::TreeNode^ treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"Solar Panels", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {
				treeNode2,
					treeNode3
			}));
			System::Windows::Forms::TreeNode^ treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"Advanced Statistics", gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) {
				treeNode1,
					treeNode4
			}));
			this->totalPowerInput = (gcnew System::Windows::Forms::TextBox());
			this->totalPowerSubmit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->treeView3 = (gcnew System::Windows::Forms::TreeView());
			this->totalCostLabel = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->solarPanelsCheck = (gcnew System::Windows::Forms::CheckBox());
			this->generatorsCheck = (gcnew System::Windows::Forms::CheckBox());
			this->turbinesCheck = (gcnew System::Windows::Forms::CheckBox());
			this->panelSmallCheck = (gcnew System::Windows::Forms::CheckBox());
			this->panelMedCheck = (gcnew System::Windows::Forms::CheckBox());
			this->generatorsCheckSmall = (gcnew System::Windows::Forms::CheckBox());
			this->generatorsCheckMedium = (gcnew System::Windows::Forms::CheckBox());
			this->generatorCheckLarge = (gcnew System::Windows::Forms::CheckBox());
			this->turbinesCheckLarge = (gcnew System::Windows::Forms::CheckBox());
			this->turbinesCheckMed = (gcnew System::Windows::Forms::CheckBox());
			this->turbinesCheckSmall = (gcnew System::Windows::Forms::CheckBox());
			this->panelSmallInput = (gcnew System::Windows::Forms::TextBox());
			this->panelLargeInput = (gcnew System::Windows::Forms::TextBox());
			this->generatorSmallInput = (gcnew System::Windows::Forms::TextBox());
			this->generatorMediumInput = (gcnew System::Windows::Forms::TextBox());
			this->generatorLargeInput = (gcnew System::Windows::Forms::TextBox());
			this->turbineLargeInput = (gcnew System::Windows::Forms::TextBox());
			this->turbineMediumInput = (gcnew System::Windows::Forms::TextBox());
			this->turbineSmallInput = (gcnew System::Windows::Forms::TextBox());
			this->totalPanelCost = (gcnew System::Windows::Forms::Label());
			this->totalGeneratorCost = (gcnew System::Windows::Forms::Label());
			this->totalTurbineCost = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// totalPowerInput
			// 
			this->totalPowerInput->Location = System::Drawing::Point(11, 145);
			this->totalPowerInput->Name = L"totalPowerInput";
			this->totalPowerInput->Size = System::Drawing::Size(192, 22);
			this->totalPowerInput->TabIndex = 2;
			this->totalPowerInput->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// totalPowerSubmit
			// 
			this->totalPowerSubmit->Location = System::Drawing::Point(196, 144);
			this->totalPowerSubmit->Name = L"totalPowerSubmit";
			this->totalPowerSubmit->Size = System::Drawing::Size(75, 23);
			this->totalPowerSubmit->TabIndex = 3;
			this->totalPowerSubmit->Text = L"Submit";
			this->totalPowerSubmit->UseVisualStyleBackColor = true;
			this->totalPowerSubmit->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label1->Location = System::Drawing::Point(12, 120);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(268, 21);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Enter your yearly power usage (KWh)";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25));
			this->label2->Location = System::Drawing::Point(12, 181);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(212, 46);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Components";
			this->label2->Visible = false;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->BackColor = System::Drawing::Color::PaleVioletRed;
			this->progressBar1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->progressBar1->Location = System::Drawing::Point(949, 537);
			this->progressBar1->MarqueeAnimationSpeed = 0;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(428, 55);
			this->progressBar1->Step = 1;
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 6;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(16, 11);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(111, 75);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 50));
			this->label3->Location = System::Drawing::Point(133, -3);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(292, 89);
			this->label3->TabIndex = 8;
			this->label3->Text = L"MiniGrid";
			// 
			// treeView3
			// 
			this->treeView3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->treeView3->HideSelection = false;
			this->treeView3->Location = System::Drawing::Point(809, 12);
			this->treeView3->Name = L"treeView3";
			treeNode1->Name = L"Node1";
			treeNode1->Text = L"$ / KWH:";
			treeNode2->Name = L"Node2";
			treeNode2->Text = L"Total Surface Area of Panels";
			treeNode3->Name = L"Node4";
			treeNode3->Text = L"Total Weight of Panels";
			treeNode4->Name = L"Node3";
			treeNode4->Text = L"Solar Panels";
			treeNode5->Name = L"Node0";
			treeNode5->Text = L"Advanced Statistics";
			this->treeView3->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode5 });
			this->treeView3->Size = System::Drawing::Size(428, 56);
			this->treeView3->TabIndex = 10;
			this->treeView3->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm::treeView3_AfterSelect);
			// 
			// totalCostLabel
			// 
			this->totalCostLabel->AutoSize = true;
			this->totalCostLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 30));
			this->totalCostLabel->Location = System::Drawing::Point(950, 134);
			this->totalCostLabel->Name = L"totalCostLabel";
			this->totalCostLabel->Size = System::Drawing::Size(183, 54);
			this->totalCostLabel->TabIndex = 11;
			this->totalCostLabel->Text = L"COST: $0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20));
			this->label5->Location = System::Drawing::Point(952, 497);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(361, 37);
			this->label5->TabIndex = 12;
			this->label5->Text = L"KWH Generated vs From City";
			// 
			// solarPanelsCheck
			// 
			this->solarPanelsCheck->AutoSize = true;
			this->solarPanelsCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20));
			this->solarPanelsCheck->Location = System::Drawing::Point(16, 230);
			this->solarPanelsCheck->Name = L"solarPanelsCheck";
			this->solarPanelsCheck->Size = System::Drawing::Size(178, 41);
			this->solarPanelsCheck->TabIndex = 13;
			this->solarPanelsCheck->Text = L"Solar Panels";
			this->solarPanelsCheck->UseVisualStyleBackColor = true;
			this->solarPanelsCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// generatorsCheck
			// 
			this->generatorsCheck->AutoSize = true;
			this->generatorsCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20));
			this->generatorsCheck->Location = System::Drawing::Point(12, 330);
			this->generatorsCheck->Name = L"generatorsCheck";
			this->generatorsCheck->Size = System::Drawing::Size(166, 41);
			this->generatorsCheck->TabIndex = 14;
			this->generatorsCheck->Text = L"Generators";
			this->generatorsCheck->UseVisualStyleBackColor = true;
			// 
			// turbinesCheck
			// 
			this->turbinesCheck->AutoSize = true;
			this->turbinesCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20));
			this->turbinesCheck->Location = System::Drawing::Point(11, 450);
			this->turbinesCheck->Name = L"turbinesCheck";
			this->turbinesCheck->Size = System::Drawing::Size(137, 41);
			this->turbinesCheck->TabIndex = 15;
			this->turbinesCheck->Text = L"Turbines";
			this->turbinesCheck->UseVisualStyleBackColor = true;
			// 
			// panelSmallCheck
			// 
			this->panelSmallCheck->AutoSize = true;
			this->panelSmallCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->panelSmallCheck->Location = System::Drawing::Point(48, 263);
			this->panelSmallCheck->Name = L"panelSmallCheck";
			this->panelSmallCheck->Size = System::Drawing::Size(93, 32);
			this->panelSmallCheck->TabIndex = 16;
			this->panelSmallCheck->Text = L"60-Cell";
			this->panelSmallCheck->UseVisualStyleBackColor = true;
			this->panelSmallCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::panelSmallCheck_CheckedChanged);
			// 
			// panelMedCheck
			// 
			this->panelMedCheck->AutoSize = true;
			this->panelMedCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->panelMedCheck->Location = System::Drawing::Point(48, 292);
			this->panelMedCheck->Name = L"panelMedCheck";
			this->panelMedCheck->Size = System::Drawing::Size(93, 32);
			this->panelMedCheck->TabIndex = 17;
			this->panelMedCheck->Text = L"72-Cell";
			this->panelMedCheck->UseVisualStyleBackColor = true;
			this->panelMedCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::panelMedCheck_CheckedChanged);
			// 
			// generatorsCheckSmall
			// 
			this->generatorsCheckSmall->AutoSize = true;
			this->generatorsCheckSmall->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->generatorsCheckSmall->Location = System::Drawing::Point(48, 367);
			this->generatorsCheckSmall->Name = L"generatorsCheckSmall";
			this->generatorsCheckSmall->Size = System::Drawing::Size(79, 32);
			this->generatorsCheckSmall->TabIndex = 18;
			this->generatorsCheckSmall->Text = L"Small";
			this->generatorsCheckSmall->UseVisualStyleBackColor = true;
			// 
			// generatorsCheckMedium
			// 
			this->generatorsCheckMedium->AutoSize = true;
			this->generatorsCheckMedium->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->generatorsCheckMedium->Location = System::Drawing::Point(48, 394);
			this->generatorsCheckMedium->Name = L"generatorsCheckMedium";
			this->generatorsCheckMedium->Size = System::Drawing::Size(104, 32);
			this->generatorsCheckMedium->TabIndex = 19;
			this->generatorsCheckMedium->Text = L"Medium";
			this->generatorsCheckMedium->UseVisualStyleBackColor = true;
			// 
			// generatorCheckLarge
			// 
			this->generatorCheckLarge->AutoSize = true;
			this->generatorCheckLarge->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->generatorCheckLarge->Location = System::Drawing::Point(48, 423);
			this->generatorCheckLarge->Name = L"generatorCheckLarge";
			this->generatorCheckLarge->Size = System::Drawing::Size(112, 32);
			this->generatorCheckLarge->TabIndex = 20;
			this->generatorCheckLarge->Text = L"Industrial";
			this->generatorCheckLarge->UseVisualStyleBackColor = true;
			// 
			// turbinesCheckLarge
			// 
			this->turbinesCheckLarge->AutoSize = true;
			this->turbinesCheckLarge->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->turbinesCheckLarge->Location = System::Drawing::Point(48, 545);
			this->turbinesCheckLarge->Name = L"turbinesCheckLarge";
			this->turbinesCheckLarge->Size = System::Drawing::Size(112, 32);
			this->turbinesCheckLarge->TabIndex = 23;
			this->turbinesCheckLarge->Text = L"Industrial";
			this->turbinesCheckLarge->UseVisualStyleBackColor = true;
			// 
			// turbinesCheckMed
			// 
			this->turbinesCheckMed->AutoSize = true;
			this->turbinesCheckMed->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->turbinesCheckMed->Location = System::Drawing::Point(48, 516);
			this->turbinesCheckMed->Name = L"turbinesCheckMed";
			this->turbinesCheckMed->Size = System::Drawing::Size(104, 32);
			this->turbinesCheckMed->TabIndex = 22;
			this->turbinesCheckMed->Text = L"Medium";
			this->turbinesCheckMed->UseVisualStyleBackColor = true;
			// 
			// turbinesCheckSmall
			// 
			this->turbinesCheckSmall->AutoSize = true;
			this->turbinesCheckSmall->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->turbinesCheckSmall->Location = System::Drawing::Point(48, 489);
			this->turbinesCheckSmall->Name = L"turbinesCheckSmall";
			this->turbinesCheckSmall->Size = System::Drawing::Size(79, 32);
			this->turbinesCheckSmall->TabIndex = 21;
			this->turbinesCheckSmall->Text = L"Small";
			this->turbinesCheckSmall->UseVisualStyleBackColor = true;
			// 
			// panelSmallInput
			// 
			this->panelSmallInput->Location = System::Drawing::Point(219, 270);
			this->panelSmallInput->Name = L"panelSmallInput";
			this->panelSmallInput->Size = System::Drawing::Size(89, 22);
			this->panelSmallInput->TabIndex = 25;
			this->panelSmallInput->TextChanged += gcnew System::EventHandler(this, &MyForm::panelSmallInput_TextChanged);
			// 
			// panelLargeInput
			// 
			this->panelLargeInput->Location = System::Drawing::Point(219, 296);
			this->panelLargeInput->Name = L"panelLargeInput";
			this->panelLargeInput->Size = System::Drawing::Size(89, 22);
			this->panelLargeInput->TabIndex = 26;
			this->panelLargeInput->TextChanged += gcnew System::EventHandler(this, &MyForm::panelLargeInput_TextChanged);
			// 
			// generatorSmallInput
			// 
			this->generatorSmallInput->Location = System::Drawing::Point(219, 371);
			this->generatorSmallInput->Name = L"generatorSmallInput";
			this->generatorSmallInput->Size = System::Drawing::Size(89, 22);
			this->generatorSmallInput->TabIndex = 27;
			this->generatorSmallInput->TextChanged += gcnew System::EventHandler(this, &MyForm::generatorSmallInput_TextChanged);
			// 
			// generatorMediumInput
			// 
			this->generatorMediumInput->Location = System::Drawing::Point(219, 399);
			this->generatorMediumInput->Name = L"generatorMediumInput";
			this->generatorMediumInput->Size = System::Drawing::Size(89, 22);
			this->generatorMediumInput->TabIndex = 28;
			// 
			// generatorLargeInput
			// 
			this->generatorLargeInput->Location = System::Drawing::Point(219, 427);
			this->generatorLargeInput->Name = L"generatorLargeInput";
			this->generatorLargeInput->Size = System::Drawing::Size(89, 22);
			this->generatorLargeInput->TabIndex = 29;
			// 
			// turbineLargeInput
			// 
			this->turbineLargeInput->Location = System::Drawing::Point(219, 550);
			this->turbineLargeInput->Name = L"turbineLargeInput";
			this->turbineLargeInput->Size = System::Drawing::Size(89, 22);
			this->turbineLargeInput->TabIndex = 32;
			// 
			// turbineMediumInput
			// 
			this->turbineMediumInput->Location = System::Drawing::Point(219, 522);
			this->turbineMediumInput->Name = L"turbineMediumInput";
			this->turbineMediumInput->Size = System::Drawing::Size(89, 22);
			this->turbineMediumInput->TabIndex = 31;
			// 
			// turbineSmallInput
			// 
			this->turbineSmallInput->Location = System::Drawing::Point(219, 494);
			this->turbineSmallInput->Name = L"turbineSmallInput";
			this->turbineSmallInput->Size = System::Drawing::Size(89, 22);
			this->turbineSmallInput->TabIndex = 30;
			// 
			// totalPanelCost
			// 
			this->totalPanelCost->AutoSize = true;
			this->totalPanelCost->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->totalPanelCost->Location = System::Drawing::Point(330, 238);
			this->totalPanelCost->Name = L"totalPanelCost";
			this->totalPanelCost->Size = System::Drawing::Size(90, 28);
			this->totalPanelCost->TabIndex = 33;
			this->totalPanelCost->Text = L"COST: $0";
			// 
			// totalGeneratorCost
			// 
			this->totalGeneratorCost->AutoSize = true;
			this->totalGeneratorCost->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->totalGeneratorCost->Location = System::Drawing::Point(330, 343);
			this->totalGeneratorCost->Name = L"totalGeneratorCost";
			this->totalGeneratorCost->Size = System::Drawing::Size(90, 28);
			this->totalGeneratorCost->TabIndex = 34;
			this->totalGeneratorCost->Text = L"COST: $0";
			// 
			// totalTurbineCost
			// 
			this->totalTurbineCost->AutoSize = true;
			this->totalTurbineCost->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->totalTurbineCost->Location = System::Drawing::Point(330, 463);
			this->totalTurbineCost->Name = L"totalTurbineCost";
			this->totalTurbineCost->Size = System::Drawing::Size(90, 28);
			this->totalTurbineCost->TabIndex = 35;
			this->totalTurbineCost->Text = L"COST: $0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1403, 621);
			this->Controls->Add(this->totalTurbineCost);
			this->Controls->Add(this->totalGeneratorCost);
			this->Controls->Add(this->totalPanelCost);
			this->Controls->Add(this->turbineLargeInput);
			this->Controls->Add(this->turbineMediumInput);
			this->Controls->Add(this->turbineSmallInput);
			this->Controls->Add(this->generatorLargeInput);
			this->Controls->Add(this->generatorMediumInput);
			this->Controls->Add(this->generatorSmallInput);
			this->Controls->Add(this->panelLargeInput);
			this->Controls->Add(this->panelSmallInput);
			this->Controls->Add(this->turbinesCheckLarge);
			this->Controls->Add(this->turbinesCheckMed);
			this->Controls->Add(this->turbinesCheckSmall);
			this->Controls->Add(this->generatorCheckLarge);
			this->Controls->Add(this->generatorsCheckMedium);
			this->Controls->Add(this->generatorsCheckSmall);
			this->Controls->Add(this->panelMedCheck);
			this->Controls->Add(this->panelSmallCheck);
			this->Controls->Add(this->turbinesCheck);
			this->Controls->Add(this->generatorsCheck);
			this->Controls->Add(this->solarPanelsCheck);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->totalCostLabel);
			this->Controls->Add(this->treeView3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->totalPowerSubmit);
			this->Controls->Add(this->totalPowerInput);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"MyForm";
			this->Text = L"MiniGrid";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		

		}
#pragma endregion



	private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	}
	private: System::Void treeView1_AfterSelect_1(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	}
	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void treeView2_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
}
private: System::Void treeView3_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
}
// SOLAR PANEL CHECK BOX
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
	
private: System::Void panelSmallCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panelMedCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}


// FUNCTION FOR THE INPUT OF SMALL SOLAR PANEL TEXT BOX
private: System::Void panelSmallInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (panelSmallInput->Text == "") {
		panelSmallInput->Text = "0";
	}
	else {
		// HANDLE COST OF SMALL SOLAR PANELS
		double panelSmallCost = panelSmall->cost;
		costSolarPanelsSmall = System::Convert::ToDouble(panelSmallInput->Text) * panelSmallCost;
		costSolarPanels = costSolarPanelsSmall + costSolarPanelsLarge;
		totalPanelCost->Text = "COST: $" + costSolarPanels;

		// HANDLE ENERGY GENERATED BY SMALL SOLAR PANELS


		// HANDLE WEIGHT OF SMALL SOLAR PANELS
	}
}



// FUNCTION FOR THE INPUT OF LARGE SOLAR PANEL TEXT BOX
private: System::Void panelLargeInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (panelLargeInput->Text == "") {
		panelLargeInput->Text = "0";
	}
	else if (System::Convert::ToDouble(panelLargeInput->Text) < 0) {
		panelLargeInput->Text = "0";
	}
	else{
		double panelLargeCost = panelLarge->cost;
		costSolarPanelsLarge = System::Convert::ToDouble(panelLargeInput->Text) * panelLargeCost;
		costSolarPanels = costSolarPanelsSmall + costSolarPanelsLarge;
		totalPanelCost->Text = "COST: $" + costSolarPanels;
	}
}

private: System::Void generatorSmallInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}





};
}


