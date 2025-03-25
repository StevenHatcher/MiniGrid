#pragma once

#include <iostream>
#include <cmath>
#include <string>

using std::string;

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
	
	// Cost per KWh
	double costPerKWh = 0;
	// Total surface area of solar panels
	int totalSurfaceArea = 0;
	// Total weight of solar panels
	int totalWeight = 0;
	// Cost of solar panels
	int panelID = 0, generatorID = 1, turbineID = 2, batteryID = 3;
	float costSolarPanels = 0;
	float savingsSolarPanels = 0;
	float energySolarPanels = 0;
	float weightSolarPanels = 0;
	float areaSolarPanels = 0;

	// 
	bool panelSelected = false,
		generatorSelected = false,
		turbineSelected = false,
		batterySelected = false,
		panelSmallSelected = false,
		panelLargeSelected = false,
		generatorSmallSelected = false,
		generatorMediumSelected = false,
		generatorLargeSelected = false,
		turbineSmallSelected = false,
		turbineMediumSelected = false,
		turbineLargeSelected = false;

	int numberOfComponents[4][3] = {
		{ 0, 0, 0 },
		{ 0, 0, 0 },
		{ 0, 0, 0 },
		{ 0, 0, 0 }
	};

	string nameOfComponents[4][3] = {
		{ "60-Cell Solar Panel", "72-Cell Solar Panel"},
		{ "Small Generator", "Medium Generator", "Industrial Generator" },
		{ "Small Turbine", "Medium Turbine", "Industrial Turbine" },
		{ "Battery"}
	};
	
	float costs[4][3] = {
		{ 0, 0, 0 },
		{ 0, 0, 0 },
		{ 0, 0, 0 },
		{ 0, 0, 0 }
	};

	float energies[4][3] = {
		{ 0, 0, 0 },
		{ 0, 0, 0 },
		{ 0, 0, 0 },
		{ 0, 0, 0 }
	};

	bool componentsSelectedMemory[4][4] = {
		{ false, false, false, false },
		{ false, false, false, false },
		{ false, false, false, false },
		{ false, false, false, false }
	};
	//float costGenerator[3] = { 0, 0, 0 };
	//float costTurbine[3] = { 0, 0, 0 };
	//float costSolarPanel[2] = {0, 0};	
	//float energyGenerator[3] = { 0, 0, 0 };
	float totalCosts[4] = { 0, 0, 0, 0 };
	float totalEnergies[4] = { 0, 0, 0, 0 };

	float fuelGenerator[3] = { 0, 0, 0 };
	float costGenerators = 0;
	float energyGenerators = 0;

	// Create functions to generate final price using the big price variable of each three plus fuel prices. Then maintenance estimations?

	// Float variable for the yearly price of fuel
	float fuelGenerators = 0;
	float fuelGeneratorPrice = 0;
	// Array to contain the costs of the turbines given the selected amount
	
	float costTurbines = 0;
	float energyTurbines = 0;

	
	

	// Cost of batteries
	float costBatteries = 0;
	float storageBatteries = 0;
	// Total cost
	int totalCost = 0;

	// Yearly power usage in KWh
	float powerUsage = 0;
	float powerGenerated = 0;
	float powerRatio = 0;
	float ratioBarValue = 0;

	

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
	private: System::Windows::Forms::Label^ componentsLabel;

	private: System::Windows::Forms::ProgressBar^ ratioBar;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ totalCostLabel;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ panelsCheck;

	private: System::Windows::Forms::CheckBox^ generatorsCheck;
	private: System::Windows::Forms::CheckBox^ turbinesCheck;
	private: System::Windows::Forms::CheckBox^ panelSmallCheck;
	private: System::Windows::Forms::CheckBox^ panelLargeCheck;
	private: System::Windows::Forms::CheckBox^ generatorSmallCheck;
	private: System::Windows::Forms::CheckBox^ generatorMediumCheck;
	private: System::Windows::Forms::CheckBox^ generatorLargeCheck;
	private: System::Windows::Forms::CheckBox^ turbineLargeCheck;









	private: System::Windows::Forms::CheckBox^ turbineMediumCheck;

	private: System::Windows::Forms::CheckBox^ turbineSmallCheck;




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
	private: System::Windows::Forms::Label^ totalPanelEnergy;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ totalGeneratorEnergy;
	private: System::Windows::Forms::Label^ totalTurbineEnergy;
	private: System::Windows::Forms::Label^ costBatteriesLabel;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::CheckBox^ batteryCheckbox;
	private: System::Windows::Forms::Label^ statisticsLabel;


	private: System::Windows::Forms::Panel^ componentsPanel;

	private: System::Windows::Forms::Label^ panelStatsTitle;
	private: System::Windows::Forms::Label^ generatorStatsTitle;
	private: System::Windows::Forms::Label^ panelSurfaceAreaLabel;
	private: System::Windows::Forms::Label^ panelWeightLabel;
	private: System::Windows::Forms::Label^ fuelConsumptionLabel;
	private: System::Windows::Forms::Label^ yearlyFuelPriceLabel;




	private: System::Windows::Forms::Label^ panelYearlySavingsLabel;
	private: System::Windows::Forms::Panel^ statisticsPanel;
private: System::Data::DataSet^ dataSet1;
private: System::Data::DataTable^ dataTable1;
private: System::Windows::Forms::Label^ solarPanelCheckLabel;
private: System::Windows::Forms::Label^ turbinesCheckLabel;
private: System::Windows::Forms::Label^ generatorsCheckLabel;
private: System::Windows::Forms::BindingSource^ bindingSource1;
private: System::Windows::Forms::TabControl^ tabControl1;


private: System::Windows::Forms::TabPage^ designTab;

private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TabPage^ importTab;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Data::DataSet^ dataSet2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ componentColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ amountColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ costPerColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ costTotalColumn;
private: System::Windows::Forms::TabPage^ printTab;




private: System::ComponentModel::IContainer^ components;




















	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>








#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
	


		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->totalPowerInput = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->componentsLabel = (gcnew System::Windows::Forms::Label());
			this->ratioBar = (gcnew System::Windows::Forms::ProgressBar());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->totalCostLabel = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panelsCheck = (gcnew System::Windows::Forms::CheckBox());
			this->generatorsCheck = (gcnew System::Windows::Forms::CheckBox());
			this->turbinesCheck = (gcnew System::Windows::Forms::CheckBox());
			this->panelSmallCheck = (gcnew System::Windows::Forms::CheckBox());
			this->panelLargeCheck = (gcnew System::Windows::Forms::CheckBox());
			this->generatorSmallCheck = (gcnew System::Windows::Forms::CheckBox());
			this->generatorMediumCheck = (gcnew System::Windows::Forms::CheckBox());
			this->generatorLargeCheck = (gcnew System::Windows::Forms::CheckBox());
			this->turbineLargeCheck = (gcnew System::Windows::Forms::CheckBox());
			this->turbineMediumCheck = (gcnew System::Windows::Forms::CheckBox());
			this->turbineSmallCheck = (gcnew System::Windows::Forms::CheckBox());
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
			this->totalPanelEnergy = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->totalGeneratorEnergy = (gcnew System::Windows::Forms::Label());
			this->totalTurbineEnergy = (gcnew System::Windows::Forms::Label());
			this->costBatteriesLabel = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->batteryCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->statisticsLabel = (gcnew System::Windows::Forms::Label());
			this->componentsPanel = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->turbinesCheckLabel = (gcnew System::Windows::Forms::Label());
			this->generatorsCheckLabel = (gcnew System::Windows::Forms::Label());
			this->solarPanelCheckLabel = (gcnew System::Windows::Forms::Label());
			this->panelStatsTitle = (gcnew System::Windows::Forms::Label());
			this->generatorStatsTitle = (gcnew System::Windows::Forms::Label());
			this->panelSurfaceAreaLabel = (gcnew System::Windows::Forms::Label());
			this->panelWeightLabel = (gcnew System::Windows::Forms::Label());
			this->fuelConsumptionLabel = (gcnew System::Windows::Forms::Label());
			this->yearlyFuelPriceLabel = (gcnew System::Windows::Forms::Label());
			this->panelYearlySavingsLabel = (gcnew System::Windows::Forms::Label());
			this->statisticsPanel = (gcnew System::Windows::Forms::Panel());
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->dataTable1 = (gcnew System::Data::DataTable());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->designTab = (gcnew System::Windows::Forms::TabPage());
			this->printTab = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->componentColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->amountColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->costPerColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->costTotalColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->importTab = (gcnew System::Windows::Forms::TabPage());
			this->dataSet2 = (gcnew System::Data::DataSet());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->componentsPanel->SuspendLayout();
			this->statisticsPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->designTab->SuspendLayout();
			this->printTab->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet2))->BeginInit();
			this->SuspendLayout();
			// 
			// totalPowerInput
			// 
			this->totalPowerInput->Location = System::Drawing::Point(1, 42);
			this->totalPowerInput->Name = L"totalPowerInput";
			this->totalPowerInput->Size = System::Drawing::Size(336, 22);
			this->totalPowerInput->TabIndex = 2;
			this->totalPowerInput->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->totalPowerInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->label1->Location = System::Drawing::Point(-2, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(334, 28);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Enter your yearly power usage (KWh)";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// componentsLabel
			// 
			this->componentsLabel->AutoSize = true;
			this->componentsLabel->BackColor = System::Drawing::Color::LightSkyBlue;
			this->componentsLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25));
			this->componentsLabel->Location = System::Drawing::Point(-30, -3);
			this->componentsLabel->Name = L"componentsLabel";
			this->componentsLabel->Size = System::Drawing::Size(644, 46);
			this->componentsLabel->TabIndex = 5;
			this->componentsLabel->Text = L"                        Components                        ";
			this->componentsLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->componentsLabel->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// ratioBar
			// 
			this->ratioBar->BackColor = System::Drawing::Color::Maroon;
			this->ratioBar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ratioBar->Location = System::Drawing::Point(903, 411);
			this->ratioBar->MarqueeAnimationSpeed = 0;
			this->ratioBar->Name = L"ratioBar";
			this->ratioBar->Size = System::Drawing::Size(428, 55);
			this->ratioBar->Step = 1;
			this->ratioBar->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->ratioBar->TabIndex = 6;
			this->ratioBar->Click += gcnew System::EventHandler(this, &MyForm::progressBar1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(22, 9);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(88, 70);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 40));
			this->label3->ForeColor = System::Drawing::Color::DimGray;
			this->label3->Location = System::Drawing::Point(102, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(236, 72);
			this->label3->TabIndex = 8;
			this->label3->Text = L"MiniGrid";
			// 
			// totalCostLabel
			// 
			this->totalCostLabel->AutoSize = true;
			this->totalCostLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 30));
			this->totalCostLabel->Location = System::Drawing::Point(894, 328);
			this->totalCostLabel->Name = L"totalCostLabel";
			this->totalCostLabel->Size = System::Drawing::Size(183, 54);
			this->totalCostLabel->TabIndex = 11;
			this->totalCostLabel->Text = L"COST: $0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20));
			this->label5->Location = System::Drawing::Point(896, 373);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(361, 37);
			this->label5->TabIndex = 12;
			this->label5->Text = L"KWH Generated vs From City";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// panelsCheck
			// 
			this->panelsCheck->AutoSize = true;
			this->panelsCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20));
			this->panelsCheck->Location = System::Drawing::Point(32, 61);
			this->panelsCheck->Name = L"panelsCheck";
			this->panelsCheck->Size = System::Drawing::Size(15, 14);
			this->panelsCheck->TabIndex = 13;
			this->panelsCheck->UseVisualStyleBackColor = true;
			this->panelsCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// generatorsCheck
			// 
			this->generatorsCheck->AutoSize = true;
			this->generatorsCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20));
			this->generatorsCheck->Location = System::Drawing::Point(32, 146);
			this->generatorsCheck->Name = L"generatorsCheck";
			this->generatorsCheck->Size = System::Drawing::Size(15, 14);
			this->generatorsCheck->TabIndex = 14;
			this->generatorsCheck->UseVisualStyleBackColor = true;
			this->generatorsCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::generatorsCheck_CheckedChanged);
			// 
			// turbinesCheck
			// 
			this->turbinesCheck->AutoSize = true;
			this->turbinesCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20));
			this->turbinesCheck->Location = System::Drawing::Point(32, 267);
			this->turbinesCheck->Name = L"turbinesCheck";
			this->turbinesCheck->Size = System::Drawing::Size(15, 14);
			this->turbinesCheck->TabIndex = 15;
			this->turbinesCheck->UseVisualStyleBackColor = true;
			this->turbinesCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::turbinesCheck_CheckedChanged);
			// 
			// panelSmallCheck
			// 
			this->panelSmallCheck->AutoSize = true;
			this->panelSmallCheck->Enabled = false;
			this->panelSmallCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->panelSmallCheck->Location = System::Drawing::Point(84, 80);
			this->panelSmallCheck->Name = L"panelSmallCheck";
			this->panelSmallCheck->Size = System::Drawing::Size(93, 32);
			this->panelSmallCheck->TabIndex = 16;
			this->panelSmallCheck->Text = L"60-Cell";
			this->panelSmallCheck->UseVisualStyleBackColor = true;
			this->panelSmallCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::panelSmallCheck_CheckedChanged);
			// 
			// panelLargeCheck
			// 
			this->panelLargeCheck->AutoSize = true;
			this->panelLargeCheck->Enabled = false;
			this->panelLargeCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->panelLargeCheck->Location = System::Drawing::Point(84, 109);
			this->panelLargeCheck->Name = L"panelLargeCheck";
			this->panelLargeCheck->Size = System::Drawing::Size(93, 32);
			this->panelLargeCheck->TabIndex = 17;
			this->panelLargeCheck->Text = L"72-Cell";
			this->panelLargeCheck->UseVisualStyleBackColor = true;
			this->panelLargeCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::panelLargeCheck_CheckedChanged);
			// 
			// generatorSmallCheck
			// 
			this->generatorSmallCheck->AutoSize = true;
			this->generatorSmallCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->generatorSmallCheck->Location = System::Drawing::Point(84, 174);
			this->generatorSmallCheck->Name = L"generatorSmallCheck";
			this->generatorSmallCheck->Size = System::Drawing::Size(79, 32);
			this->generatorSmallCheck->TabIndex = 18;
			this->generatorSmallCheck->Text = L"Small";
			this->generatorSmallCheck->UseVisualStyleBackColor = true;
			this->generatorSmallCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::generatorsCheckSmall_CheckedChanged);
			// 
			// generatorMediumCheck
			// 
			this->generatorMediumCheck->AutoSize = true;
			this->generatorMediumCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->generatorMediumCheck->Location = System::Drawing::Point(84, 201);
			this->generatorMediumCheck->Name = L"generatorMediumCheck";
			this->generatorMediumCheck->Size = System::Drawing::Size(104, 32);
			this->generatorMediumCheck->TabIndex = 19;
			this->generatorMediumCheck->Text = L"Medium";
			this->generatorMediumCheck->UseVisualStyleBackColor = true;
			this->generatorMediumCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::generatorsCheckMedium_CheckedChanged);
			// 
			// generatorLargeCheck
			// 
			this->generatorLargeCheck->AutoSize = true;
			this->generatorLargeCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->generatorLargeCheck->Location = System::Drawing::Point(84, 230);
			this->generatorLargeCheck->Name = L"generatorLargeCheck";
			this->generatorLargeCheck->Size = System::Drawing::Size(112, 32);
			this->generatorLargeCheck->TabIndex = 20;
			this->generatorLargeCheck->Text = L"Industrial";
			this->generatorLargeCheck->UseVisualStyleBackColor = true;
			this->generatorLargeCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::generatorCheckLarge_CheckedChanged);
			// 
			// turbineLargeCheck
			// 
			this->turbineLargeCheck->AutoSize = true;
			this->turbineLargeCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->turbineLargeCheck->Location = System::Drawing::Point(84, 351);
			this->turbineLargeCheck->Name = L"turbineLargeCheck";
			this->turbineLargeCheck->Size = System::Drawing::Size(112, 32);
			this->turbineLargeCheck->TabIndex = 23;
			this->turbineLargeCheck->Text = L"Industrial";
			this->turbineLargeCheck->UseVisualStyleBackColor = true;
			this->turbineLargeCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::turbinesCheckLarge_CheckedChanged);
			// 
			// turbineMediumCheck
			// 
			this->turbineMediumCheck->AutoSize = true;
			this->turbineMediumCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->turbineMediumCheck->Location = System::Drawing::Point(84, 322);
			this->turbineMediumCheck->Name = L"turbineMediumCheck";
			this->turbineMediumCheck->Size = System::Drawing::Size(104, 32);
			this->turbineMediumCheck->TabIndex = 22;
			this->turbineMediumCheck->Text = L"Medium";
			this->turbineMediumCheck->UseVisualStyleBackColor = true;
			this->turbineMediumCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::turbinesCheckMed_CheckedChanged);
			// 
			// turbineSmallCheck
			// 
			this->turbineSmallCheck->AutoSize = true;
			this->turbineSmallCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->turbineSmallCheck->Location = System::Drawing::Point(84, 295);
			this->turbineSmallCheck->Name = L"turbineSmallCheck";
			this->turbineSmallCheck->Size = System::Drawing::Size(79, 32);
			this->turbineSmallCheck->TabIndex = 21;
			this->turbineSmallCheck->Text = L"Small";
			this->turbineSmallCheck->UseVisualStyleBackColor = true;
			this->turbineSmallCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::turbinesCheckSmall_CheckedChanged);
			// 
			// panelSmallInput
			// 
			this->panelSmallInput->Location = System::Drawing::Point(251, 87);
			this->panelSmallInput->Name = L"panelSmallInput";
			this->panelSmallInput->ReadOnly = true;
			this->panelSmallInput->Size = System::Drawing::Size(89, 22);
			this->panelSmallInput->TabIndex = 25;
			this->panelSmallInput->TextChanged += gcnew System::EventHandler(this, &MyForm::panelSmallInput_TextChanged);
			this->panelSmallInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::panelSmallInput_KeyPress);
			// 
			// panelLargeInput
			// 
			this->panelLargeInput->Location = System::Drawing::Point(251, 113);
			this->panelLargeInput->Name = L"panelLargeInput";
			this->panelLargeInput->ReadOnly = true;
			this->panelLargeInput->Size = System::Drawing::Size(89, 22);
			this->panelLargeInput->TabIndex = 26;
			this->panelLargeInput->TextChanged += gcnew System::EventHandler(this, &MyForm::panelLargeInput_TextChanged);
			this->panelLargeInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::panelLargeInput_KeyPress);
			// 
			// generatorSmallInput
			// 
			this->generatorSmallInput->Location = System::Drawing::Point(251, 178);
			this->generatorSmallInput->Name = L"generatorSmallInput";
			this->generatorSmallInput->ReadOnly = true;
			this->generatorSmallInput->Size = System::Drawing::Size(89, 22);
			this->generatorSmallInput->TabIndex = 27;
			this->generatorSmallInput->TextChanged += gcnew System::EventHandler(this, &MyForm::generatorSmallInput_TextChanged);
			this->generatorSmallInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::generatorSmallInput_KeyPress);
			// 
			// generatorMediumInput
			// 
			this->generatorMediumInput->Location = System::Drawing::Point(251, 206);
			this->generatorMediumInput->Name = L"generatorMediumInput";
			this->generatorMediumInput->ReadOnly = true;
			this->generatorMediumInput->Size = System::Drawing::Size(89, 22);
			this->generatorMediumInput->TabIndex = 28;
			this->generatorMediumInput->TextChanged += gcnew System::EventHandler(this, &MyForm::generatorMediumInput_TextChanged);
			this->generatorMediumInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::generatorMediumInput_KeyPress);
			// 
			// generatorLargeInput
			// 
			this->generatorLargeInput->Location = System::Drawing::Point(251, 234);
			this->generatorLargeInput->Name = L"generatorLargeInput";
			this->generatorLargeInput->ReadOnly = true;
			this->generatorLargeInput->Size = System::Drawing::Size(89, 22);
			this->generatorLargeInput->TabIndex = 29;
			this->generatorLargeInput->TextChanged += gcnew System::EventHandler(this, &MyForm::generatorLargeInput_TextChanged);
			this->generatorLargeInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::generatorLargeInput_KeyPress);
			// 
			// turbineLargeInput
			// 
			this->turbineLargeInput->Location = System::Drawing::Point(251, 356);
			this->turbineLargeInput->Name = L"turbineLargeInput";
			this->turbineLargeInput->ReadOnly = true;
			this->turbineLargeInput->Size = System::Drawing::Size(89, 22);
			this->turbineLargeInput->TabIndex = 32;
			this->turbineLargeInput->TextChanged += gcnew System::EventHandler(this, &MyForm::turbineLargeInput_TextChanged);
			this->turbineLargeInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::turbineLargeInput_KeyPress);
			// 
			// turbineMediumInput
			// 
			this->turbineMediumInput->Location = System::Drawing::Point(251, 328);
			this->turbineMediumInput->Name = L"turbineMediumInput";
			this->turbineMediumInput->ReadOnly = true;
			this->turbineMediumInput->Size = System::Drawing::Size(89, 22);
			this->turbineMediumInput->TabIndex = 31;
			this->turbineMediumInput->TextChanged += gcnew System::EventHandler(this, &MyForm::turbineMediumInput_TextChanged);
			this->turbineMediumInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::turbineMediumInput_KeyPress);
			// 
			// turbineSmallInput
			// 
			this->turbineSmallInput->Location = System::Drawing::Point(251, 300);
			this->turbineSmallInput->Name = L"turbineSmallInput";
			this->turbineSmallInput->ReadOnly = true;
			this->turbineSmallInput->Size = System::Drawing::Size(89, 22);
			this->turbineSmallInput->TabIndex = 30;
			this->turbineSmallInput->TextChanged += gcnew System::EventHandler(this, &MyForm::turbineSmallInput_TextChanged);
			this->turbineSmallInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::turbineSmallInput_KeyPress);
			// 
			// totalPanelCost
			// 
			this->totalPanelCost->AutoSize = true;
			this->totalPanelCost->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->totalPanelCost->Location = System::Drawing::Point(346, 58);
			this->totalPanelCost->Name = L"totalPanelCost";
			this->totalPanelCost->Size = System::Drawing::Size(90, 28);
			this->totalPanelCost->TabIndex = 33;
			this->totalPanelCost->Text = L"COST: $0";
			// 
			// totalGeneratorCost
			// 
			this->totalGeneratorCost->AutoSize = true;
			this->totalGeneratorCost->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->totalGeneratorCost->Location = System::Drawing::Point(346, 163);
			this->totalGeneratorCost->Name = L"totalGeneratorCost";
			this->totalGeneratorCost->Size = System::Drawing::Size(90, 28);
			this->totalGeneratorCost->TabIndex = 34;
			this->totalGeneratorCost->Text = L"COST: $0";
			this->totalGeneratorCost->Click += gcnew System::EventHandler(this, &MyForm::totalGeneratorCost_Click);
			// 
			// totalTurbineCost
			// 
			this->totalTurbineCost->AutoSize = true;
			this->totalTurbineCost->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->totalTurbineCost->Location = System::Drawing::Point(346, 274);
			this->totalTurbineCost->Name = L"totalTurbineCost";
			this->totalTurbineCost->Size = System::Drawing::Size(90, 28);
			this->totalTurbineCost->TabIndex = 35;
			this->totalTurbineCost->Text = L"COST: $0";
			// 
			// totalPanelEnergy
			// 
			this->totalPanelEnergy->AutoSize = true;
			this->totalPanelEnergy->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->totalPanelEnergy->Location = System::Drawing::Point(347, 91);
			this->totalPanelEnergy->Name = L"totalPanelEnergy";
			this->totalPanelEnergy->Size = System::Drawing::Size(109, 19);
			this->totalPanelEnergy->TabIndex = 36;
			this->totalPanelEnergy->Text = L"KWH per Year: 0";
			this->totalPanelEnergy->Click += gcnew System::EventHandler(this, &MyForm::totalPanelEnergy_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->label4->Location = System::Drawing::Point(898, 469);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 28);
			this->label4->TabIndex = 37;
			this->label4->Text = L"Ratio:";
			// 
			// totalGeneratorEnergy
			// 
			this->totalGeneratorEnergy->AutoSize = true;
			this->totalGeneratorEnergy->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->totalGeneratorEnergy->Location = System::Drawing::Point(347, 191);
			this->totalGeneratorEnergy->Name = L"totalGeneratorEnergy";
			this->totalGeneratorEnergy->Size = System::Drawing::Size(109, 19);
			this->totalGeneratorEnergy->TabIndex = 38;
			this->totalGeneratorEnergy->Text = L"KWH per Year: 0";
			// 
			// totalTurbineEnergy
			// 
			this->totalTurbineEnergy->AutoSize = true;
			this->totalTurbineEnergy->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->totalTurbineEnergy->Location = System::Drawing::Point(347, 305);
			this->totalTurbineEnergy->Name = L"totalTurbineEnergy";
			this->totalTurbineEnergy->Size = System::Drawing::Size(109, 19);
			this->totalTurbineEnergy->TabIndex = 39;
			this->totalTurbineEnergy->Text = L"KWH per Year: 0";
			// 
			// costBatteriesLabel
			// 
			this->costBatteriesLabel->AutoSize = true;
			this->costBatteriesLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->costBatteriesLabel->Location = System::Drawing::Point(346, 396);
			this->costBatteriesLabel->Name = L"costBatteriesLabel";
			this->costBatteriesLabel->Size = System::Drawing::Size(90, 28);
			this->costBatteriesLabel->TabIndex = 42;
			this->costBatteriesLabel->Text = L"COST: $0";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(251, 402);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(89, 22);
			this->textBox1->TabIndex = 41;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// batteryCheckbox
			// 
			this->batteryCheckbox->AutoSize = true;
			this->batteryCheckbox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20));
			this->batteryCheckbox->Location = System::Drawing::Point(32, 391);
			this->batteryCheckbox->Name = L"batteryCheckbox";
			this->batteryCheckbox->Size = System::Drawing::Size(138, 41);
			this->batteryCheckbox->TabIndex = 40;
			this->batteryCheckbox->Text = L"Batteries";
			this->batteryCheckbox->UseVisualStyleBackColor = true;
			this->batteryCheckbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::batteryCheckbox_CheckedChanged);
			// 
			// statisticsLabel
			// 
			this->statisticsLabel->AutoSize = true;
			this->statisticsLabel->BackColor = System::Drawing::Color::LightSkyBlue;
			this->statisticsLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25));
			this->statisticsLabel->Location = System::Drawing::Point(565, 70);
			this->statisticsLabel->Name = L"statisticsLabel";
			this->statisticsLabel->Size = System::Drawing::Size(301, 46);
			this->statisticsLabel->TabIndex = 43;
			this->statisticsLabel->Text = L"         Satistics         ";
			this->statisticsLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// componentsPanel
			// 
			this->componentsPanel->BackColor = System::Drawing::SystemColors::ControlLight;
			this->componentsPanel->Controls->Add(this->label2);
			this->componentsPanel->Controls->Add(this->turbinesCheckLabel);
			this->componentsPanel->Controls->Add(this->generatorsCheckLabel);
			this->componentsPanel->Controls->Add(this->solarPanelCheckLabel);
			this->componentsPanel->Controls->Add(this->costBatteriesLabel);
			this->componentsPanel->Controls->Add(this->textBox1);
			this->componentsPanel->Controls->Add(this->batteryCheckbox);
			this->componentsPanel->Controls->Add(this->totalTurbineEnergy);
			this->componentsPanel->Controls->Add(this->totalGeneratorEnergy);
			this->componentsPanel->Controls->Add(this->totalPanelEnergy);
			this->componentsPanel->Controls->Add(this->totalTurbineCost);
			this->componentsPanel->Controls->Add(this->totalGeneratorCost);
			this->componentsPanel->Controls->Add(this->componentsLabel);
			this->componentsPanel->Controls->Add(this->totalPanelCost);
			this->componentsPanel->Controls->Add(this->turbineLargeInput);
			this->componentsPanel->Controls->Add(this->turbineMediumInput);
			this->componentsPanel->Controls->Add(this->turbineSmallInput);
			this->componentsPanel->Controls->Add(this->generatorLargeInput);
			this->componentsPanel->Controls->Add(this->generatorMediumInput);
			this->componentsPanel->Controls->Add(this->generatorSmallInput);
			this->componentsPanel->Controls->Add(this->panelLargeInput);
			this->componentsPanel->Controls->Add(this->panelSmallInput);
			this->componentsPanel->Controls->Add(this->turbineLargeCheck);
			this->componentsPanel->Controls->Add(this->turbineMediumCheck);
			this->componentsPanel->Controls->Add(this->turbineSmallCheck);
			this->componentsPanel->Controls->Add(this->generatorLargeCheck);
			this->componentsPanel->Controls->Add(this->generatorMediumCheck);
			this->componentsPanel->Controls->Add(this->generatorSmallCheck);
			this->componentsPanel->Controls->Add(this->panelLargeCheck);
			this->componentsPanel->Controls->Add(this->panelSmallCheck);
			this->componentsPanel->Controls->Add(this->turbinesCheck);
			this->componentsPanel->Controls->Add(this->generatorsCheck);
			this->componentsPanel->Controls->Add(this->panelsCheck);
			this->componentsPanel->Location = System::Drawing::Point(3, 70);
			this->componentsPanel->Name = L"componentsPanel";
			this->componentsPanel->Size = System::Drawing::Size(556, 439);
			this->componentsPanel->TabIndex = 44;
			this->componentsPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::componentsPanel_Paint);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(273, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 13);
			this->label2->TabIndex = 46;
			this->label2->Text = L"Amount";
			// 
			// turbinesCheckLabel
			// 
			this->turbinesCheckLabel->AutoSize = true;
			this->turbinesCheckLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20));
			this->turbinesCheckLabel->Location = System::Drawing::Point(68, 255);
			this->turbinesCheckLabel->Name = L"turbinesCheckLabel";
			this->turbinesCheckLabel->Size = System::Drawing::Size(118, 37);
			this->turbinesCheckLabel->TabIndex = 45;
			this->turbinesCheckLabel->Text = L"Turbines";
			// 
			// generatorsCheckLabel
			// 
			this->generatorsCheckLabel->AutoSize = true;
			this->generatorsCheckLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20));
			this->generatorsCheckLabel->Location = System::Drawing::Point(69, 134);
			this->generatorsCheckLabel->Name = L"generatorsCheckLabel";
			this->generatorsCheckLabel->Size = System::Drawing::Size(147, 37);
			this->generatorsCheckLabel->TabIndex = 44;
			this->generatorsCheckLabel->Text = L"Generators";
			// 
			// solarPanelCheckLabel
			// 
			this->solarPanelCheckLabel->AutoSize = true;
			this->solarPanelCheckLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20));
			this->solarPanelCheckLabel->Location = System::Drawing::Point(69, 49);
			this->solarPanelCheckLabel->Name = L"solarPanelCheckLabel";
			this->solarPanelCheckLabel->Size = System::Drawing::Size(159, 37);
			this->solarPanelCheckLabel->TabIndex = 43;
			this->solarPanelCheckLabel->Text = L"Solar Panels";
			this->solarPanelCheckLabel->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_1);
			// 
			// panelStatsTitle
			// 
			this->panelStatsTitle->AutoSize = true;
			this->panelStatsTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.25F));
			this->panelStatsTitle->Location = System::Drawing::Point(3, 17);
			this->panelStatsTitle->Name = L"panelStatsTitle";
			this->panelStatsTitle->Size = System::Drawing::Size(62, 23);
			this->panelStatsTitle->TabIndex = 45;
			this->panelStatsTitle->Text = L"Panels:";
			// 
			// generatorStatsTitle
			// 
			this->generatorStatsTitle->AutoSize = true;
			this->generatorStatsTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.25F));
			this->generatorStatsTitle->Location = System::Drawing::Point(3, 110);
			this->generatorStatsTitle->Name = L"generatorStatsTitle";
			this->generatorStatsTitle->Size = System::Drawing::Size(98, 23);
			this->generatorStatsTitle->TabIndex = 46;
			this->generatorStatsTitle->Text = L"Generators:";
			// 
			// panelSurfaceAreaLabel
			// 
			this->panelSurfaceAreaLabel->AutoSize = true;
			this->panelSurfaceAreaLabel->Location = System::Drawing::Point(25, 42);
			this->panelSurfaceAreaLabel->Name = L"panelSurfaceAreaLabel";
			this->panelSurfaceAreaLabel->Size = System::Drawing::Size(134, 13);
			this->panelSurfaceAreaLabel->TabIndex = 47;
			this->panelSurfaceAreaLabel->Text = L"Total surface area (ft^2): ";
			// 
			// panelWeightLabel
			// 
			this->panelWeightLabel->AutoSize = true;
			this->panelWeightLabel->Location = System::Drawing::Point(25, 57);
			this->panelWeightLabel->Name = L"panelWeightLabel";
			this->panelWeightLabel->Size = System::Drawing::Size(98, 13);
			this->panelWeightLabel->TabIndex = 48;
			this->panelWeightLabel->Text = L"Total weight (lbs):";
			// 
			// fuelConsumptionLabel
			// 
			this->fuelConsumptionLabel->AutoSize = true;
			this->fuelConsumptionLabel->Location = System::Drawing::Point(25, 140);
			this->fuelConsumptionLabel->Name = L"fuelConsumptionLabel";
			this->fuelConsumptionLabel->Size = System::Drawing::Size(146, 13);
			this->fuelConsumptionLabel->TabIndex = 49;
			this->fuelConsumptionLabel->Text = L"Yearly fuel consumption (L):";
			// 
			// yearlyFuelPriceLabel
			// 
			this->yearlyFuelPriceLabel->AutoSize = true;
			this->yearlyFuelPriceLabel->Location = System::Drawing::Point(25, 155);
			this->yearlyFuelPriceLabel->Name = L"yearlyFuelPriceLabel";
			this->yearlyFuelPriceLabel->Size = System::Drawing::Size(103, 13);
			this->yearlyFuelPriceLabel->TabIndex = 50;
			this->yearlyFuelPriceLabel->Text = L"Yearly fuel price (L):";
			// 
			// panelYearlySavingsLabel
			// 
			this->panelYearlySavingsLabel->AutoSize = true;
			this->panelYearlySavingsLabel->Location = System::Drawing::Point(25, 71);
			this->panelYearlySavingsLabel->Name = L"panelYearlySavingsLabel";
			this->panelYearlySavingsLabel->Size = System::Drawing::Size(97, 13);
			this->panelYearlySavingsLabel->TabIndex = 51;
			this->panelYearlySavingsLabel->Text = L"Yearly savings ($): ";
			// 
			// statisticsPanel
			// 
			this->statisticsPanel->BackColor = System::Drawing::SystemColors::ControlLight;
			this->statisticsPanel->Controls->Add(this->panelYearlySavingsLabel);
			this->statisticsPanel->Controls->Add(this->yearlyFuelPriceLabel);
			this->statisticsPanel->Controls->Add(this->fuelConsumptionLabel);
			this->statisticsPanel->Controls->Add(this->panelWeightLabel);
			this->statisticsPanel->Controls->Add(this->panelSurfaceAreaLabel);
			this->statisticsPanel->Controls->Add(this->generatorStatsTitle);
			this->statisticsPanel->Controls->Add(this->panelStatsTitle);
			this->statisticsPanel->Location = System::Drawing::Point(566, 116);
			this->statisticsPanel->Name = L"statisticsPanel";
			this->statisticsPanel->Size = System::Drawing::Size(300, 392);
			this->statisticsPanel->TabIndex = 52;
			this->statisticsPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::statisticsPanel_Paint);
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			this->dataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) { this->dataTable1 });
			// 
			// dataTable1
			// 
			this->dataTable1->TableName = L"Components";
			// 
			// bindingSource1
			// 
			this->bindingSource1->CurrentChanged += gcnew System::EventHandler(this, &MyForm::bindingSource1_CurrentChanged);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->designTab);
			this->tabControl1->Controls->Add(this->printTab);
			this->tabControl1->Controls->Add(this->importTab);
			this->tabControl1->Location = System::Drawing::Point(10, 82);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1381, 535);
			this->tabControl1->TabIndex = 53;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl1_SelectedIndexChanged);
			// 
			// designTab
			// 
			this->designTab->Controls->Add(this->componentsPanel);
			this->designTab->Controls->Add(this->statisticsPanel);
			this->designTab->Controls->Add(this->label4);
			this->designTab->Controls->Add(this->statisticsLabel);
			this->designTab->Controls->Add(this->label5);
			this->designTab->Controls->Add(this->label1);
			this->designTab->Controls->Add(this->ratioBar);
			this->designTab->Controls->Add(this->totalCostLabel);
			this->designTab->Controls->Add(this->totalPowerInput);
			this->designTab->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->designTab->Location = System::Drawing::Point(4, 22);
			this->designTab->Name = L"designTab";
			this->designTab->Padding = System::Windows::Forms::Padding(3);
			this->designTab->Size = System::Drawing::Size(1373, 509);
			this->designTab->TabIndex = 0;
			this->designTab->Text = L"Design";
			this->designTab->UseVisualStyleBackColor = true;
			// 
			// printTab
			// 
			this->printTab->Controls->Add(this->dataGridView1);
			this->printTab->Location = System::Drawing::Point(4, 22);
			this->printTab->Name = L"printTab";
			this->printTab->Padding = System::Windows::Forms::Padding(3);
			this->printTab->Size = System::Drawing::Size(1373, 509);
			this->printTab->TabIndex = 1;
			this->printTab->Text = L"Export";
			this->printTab->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoGenerateColumns = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->componentColumn,
					this->amountColumn, this->costPerColumn, this->costTotalColumn
			});
			this->dataGridView1->DataSource = this->bindingSource1;
			this->dataGridView1->Location = System::Drawing::Point(7, 9);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(447, 459);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick_1);
			// 
			// componentColumn
			// 
			this->componentColumn->HeaderText = L"Component";
			this->componentColumn->Name = L"componentColumn";
			this->componentColumn->ReadOnly = true;
			// 
			// amountColumn
			// 
			this->amountColumn->HeaderText = L"Amount";
			this->amountColumn->Name = L"amountColumn";
			this->amountColumn->ReadOnly = true;
			// 
			// costPerColumn
			// 
			this->costPerColumn->HeaderText = L"Cost per Unit";
			this->costPerColumn->Name = L"costPerColumn";
			this->costPerColumn->ReadOnly = true;
			// 
			// costTotalColumn
			// 
			this->costTotalColumn->HeaderText = L"Total Cost";
			this->costTotalColumn->Name = L"costTotalColumn";
			this->costTotalColumn->ReadOnly = true;
			// 
			// importTab
			// 
			this->importTab->Location = System::Drawing::Point(4, 22);
			this->importTab->Name = L"importTab";
			this->importTab->Size = System::Drawing::Size(1373, 509);
			this->importTab->TabIndex = 2;
			this->importTab->Text = L"Import";
			this->importTab->UseVisualStyleBackColor = true;
			// 
			// dataSet2
			// 
			this->dataSet2->DataSetName = L"NewDataSet";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1403, 621);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"MyForm";
			this->Text = L"MiniGrid";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->componentsPanel->ResumeLayout(false);
			this->componentsPanel->PerformLayout();
			this->statisticsPanel->ResumeLayout(false);
			this->statisticsPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->designTab->ResumeLayout(false);
			this->designTab->PerformLayout();
			this->printTab->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		// Function that updates the ration of energy generated to yearly power consumption
		void updateRatioAndBar() {
			powerGenerated = (totalEnergies[0] * getState(panelSelected)) + (totalEnergies[1] * getState(generatorSelected)) + (totalEnergies[2] * getState(turbineSelected));

			if (powerUsage == 0) {
				powerRatio = 0;
			}
			else {
				powerRatio = powerGenerated / powerUsage;
			}

			if (powerGenerated == 0) {
				ratioBar->Value = 0;
			}
			else if (powerRatio <= 1) {
				ratioBar->Value = powerRatio * 100.0;
			}
			else {
				ratioBar->Value = 100.0;
			}

			label4->Text = "% energy use generated on personal grid: " + ceil(powerRatio * 100.0) / 100.0 * 100.0;
		}

		// Function that intakes a boolean and returns 0 for false and 1 for true: used as a 0 or 1 multiplier when using checkboxes to determine if items are selected
		// e.g. if panels arent selected, then we can retain the price in the appropiate variable but not add it to the total cost
		unsigned int getState(bool check) {
			if (check)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}

		// Function that calculates the total cost of the panels, generators, and turbines based on their numOfComponents and costs
		void calculateCosts(int type, int size) {
			switch(type)
			{
			case 0:
			{
				costs[0][0] = numberOfComponents[0][0] * panelSmall->cost * getState(panelSmallSelected);
				costs[0][1] = numberOfComponents[0][1] * panelLarge->cost * getState(panelLargeSelected);
				totalCosts[0] = costs[0][0] + costs[0][1];
				float panelDisplayCost = totalCosts[0] * getState(panelSelected);
				totalPanelCost->Text = "COST: $" + panelDisplayCost;
				calculatePanelDetails();
				break;
			}
			case 1:
			{
				costs[1][0] = numberOfComponents[1][0] * generatorSmall->cost * getState(generatorSmallSelected);
				costs[1][1] = numberOfComponents[1][1] * generatorMedium->cost * getState(generatorMediumSelected);
				costs[1][2] = numberOfComponents[1][2] * generatorLarge->cost * getState(generatorLargeSelected);
				totalCosts[1] = costs[1][0] + costs[1][1] + costs[1][2];
				float generatorDisplayCost = totalCosts[1] * getState(generatorSelected);
				totalGeneratorCost->Text = "COST: $" + generatorDisplayCost;

				calculateFuel();
				break;
			}
				case 2:
				{
					costs[2][0] = numberOfComponents[2][0] * turbineSmall->cost * getState(turbineSmallSelected);
					costs[2][1] = numberOfComponents[2][1] * turbineMedium->cost * getState(turbineMediumSelected);
					costs[2][2] = numberOfComponents[2][2] * turbineLarge->cost * getState(turbineLargeSelected);
					totalCosts[2] = costs[2][0] + costs[2][1] + costs[2][2];
					float turbineDisplayCost = totalCosts[2] * getState(turbineSelected);
					totalTurbineCost->Text = "COST: $" + turbineDisplayCost;
					break;
					// Put batteries here
				}
			}
			float totalCost = (totalCosts[0] * getState(panelSelected)) + (totalCosts[1] * getState(generatorSelected)) + (totalCosts[2] * getState(turbineSelected));
			totalCostLabel->Text = "COST: $" + totalCost;
		}
		// Function that calculates the total energies of the panels, generators, and turbines based on their numOfComponents and costs
		void calculateEnergies(int type, int size) {
			switch (type)
			{
			case 0:
				energies[0][0] = numberOfComponents[0][0] * panelSmall->kwhYearly * getState(panelSmallSelected);
				energies[0][1] = numberOfComponents[0][1] * panelLarge->kwhYearly * getState(panelLargeSelected);
				totalEnergies[0] = energies[0][0] + energies[0][1];
				totalPanelEnergy->Text = "KWH per Year: " + totalEnergies[0];
				calculatePanelDetails();
				break;
			case 1:
				energies[1][0] = numberOfComponents[1][0] * generatorSmall->kwhYearly * getState(generatorSmallSelected);
				energies[1][1] = numberOfComponents[1][1] * generatorMedium->kwhYearly * getState(generatorMediumSelected);
				energies[1][2] = numberOfComponents[1][2] * generatorLarge->kwhYearly * getState(generatorLargeSelected);
				totalEnergies[1] = energies[1][0] + energies[1][1] + energies[1][2];
				totalGeneratorEnergy->Text = "KWH per Year: " + totalEnergies[1];
				calculateFuel();
				break;
			case 2:
				energies[2][0] = numberOfComponents[2][0] * turbineSmall->kwhYearly * getState(turbineSmallSelected);
				energies[2][1] = numberOfComponents[2][1] * turbineMedium->kwhYearly * getState(turbineMediumSelected);
				energies[2][2] = numberOfComponents[2][2] * turbineLarge->kwhYearly * getState(turbineLargeSelected);
				totalEnergies[2] = energies[2][0] + energies[2][1] + energies[2][2];
				totalTurbineEnergy->Text = "KWH per Year: " + totalEnergies[2];
				break;
				// Put batteries here
			}
		}
		// Function that calculates the total yearly fuel usage of the selected generators
		void calculateFuel() {
			fuelGenerators = ((numberOfComponents[1][0] * generatorSmall->fuelPerHour * 8760) + (numberOfComponents[1][1] * generatorMedium->fuelPerHour * 8760) + (numberOfComponents[1][2] * generatorLarge->fuelPerHour * 8760)) / 4;
			fuelConsumptionLabel->Text = "Yearly fuel consumption (G): " + fuelGenerators;
			fuelGeneratorPrice = fuelGenerators * 1.6;
			yearlyFuelPriceLabel->Text = "Yearly fuel price ($): " + fuelGeneratorPrice;
		}
		// Function that calculates the total surface area of the selected solar panels
		void calculateSurfaceArea() {
			areaSolarPanels = numberOfComponents[0][0] * panelSmall->surfaceArea + numberOfComponents[0][1] * panelLarge->surfaceArea;
			panelSurfaceAreaLabel->Text = "Total surface area (ft^2): " + areaSolarPanels;
		}
		// Function that displays the statistics panel if a component is selected
		// TODO: Add checks to ensure that there is at least one of the appropriate component selected before displaying the statistics
			// Might be annoying for the user if we use numOfComponents, so we could just use the nested checkboxes
		void displayStats() {
			panelStatsTitle->Visible = panelSelected;
			panelSurfaceAreaLabel->Visible = panelSelected;
			panelWeightLabel->Visible = panelSelected;
			panelYearlySavingsLabel->Visible = panelSelected;

			generatorStatsTitle->Visible = generatorSelected;
			fuelConsumptionLabel->Visible = generatorSelected;
			yearlyFuelPriceLabel->Visible = generatorSelected;
		}
		// Function that calculates the total weight of the selected solar panels
		void calculateWeight() {
			weightSolarPanels = numberOfComponents[0][0] * panelSmall->weight + numberOfComponents[0][1] * panelLarge->weight;
			panelWeightLabel->Text = "Total weight (lbs): " + weightSolarPanels;
		}
		// Function that calculates the total yearly savings of the selected solar panels
		void calculatePanelSavings() {
			savingsSolarPanels = totalEnergies[0] * 0.13;
			panelYearlySavingsLabel->Text = "Yearly savings ($): " + savingsSolarPanels;
		}
		// Function that updates the panel details
		void calculatePanelDetails() {
			calculateSurfaceArea();
			calculateWeight();
			calculatePanelSavings();
		}
	
		// Function that handles the cases when input is typed into the component quanity textboxes 
		void  updateInput(System::Object^ sender, System::EventArgs^ e, int type, int size) {
			TextBox^ textBox = dynamic_cast<TextBox^>(sender);

			// In the case that the input comes from the power usage textbox
			if (size == -1 && type == -1) {
				if (textBox->Text == "") {
					textBox->Text = "";
					powerUsage = 0;
				}
				else if (System::Convert::ToDouble(textBox->Text) > 0) {
					powerUsage = System::Convert::ToDouble(textBox->Text);	
				}
				else {
					textBox->Text = "";
					powerUsage = 0;
				}
			}
			else if (textBox->Text == "") {
				textBox->Text = "";
				numberOfComponents[type][size] = 0;	
			}

			else if (System::Convert::ToDouble(textBox->Text) > 0) {
				numberOfComponents[type][size] = System::Convert::ToDouble(textBox->Text);
			}

			else {
				textBox->Text = "";
				numberOfComponents[type][size] = 0;
				/*panelsCheckUpdate(type, size);*/
				
			}
			calculateCosts(type, size);
			calculateEnergies(type, size);
			updateRatioAndBar();
				
		}
		// Function that handles the cases when one of the checkboxes is clicked
		void updateCheckBox(int type, int size) {
			switch (type)
			{
			case 0:
			{
				// If the SOLAR PANEL main check box is clicked
				if (size == 3) {
					if (!panelSelected) {
						componentsSelectedMemory[0][0] = panelSmallSelected;
						panelSmallSelected = false;
						panelSmallCheck->Enabled = false;
						panelSmallInput->ReadOnly = true;
						//panelSmallCheck->Checked = false;

						componentsSelectedMemory[0][1] = panelLargeSelected;
						panelLargeSelected = false;
						panelLargeCheck->Enabled = false;
						panelLargeInput->ReadOnly = true;
						//panelLargeCheck->Checked = false;
					}
					else {
						panelSmallSelected = componentsSelectedMemory[0][0];
						panelSmallCheck->Enabled = true;
						panelSmallCheck->Checked = panelSmallSelected;
						panelSmallInput->ReadOnly = !panelSmallSelected;
						
						panelLargeSelected = componentsSelectedMemory[0][1];
						panelLargeCheck->Enabled = true;
						panelLargeCheck->Checked = panelLargeSelected;
						panelLargeInput->ReadOnly = !panelLargeSelected;
					}
				}
				else if (panelSmallSelected || panelLargeSelected) {
					panelSelected = true;
					panelsCheck->Enabled = true;
					panelsCheck->Checked = true;

					componentsSelectedMemory[0][0] = panelSmallSelected;
					componentsSelectedMemory[0][1] = panelLargeSelected;

					if (panelSmallSelected) {
						panelSmallCheck->Enabled = true;
						panelSmallCheck->Checked = true;
						panelSmallInput->ReadOnly = false;
					}
					
					if (panelLargeSelected) {
						panelLargeCheck->Enabled = true;
						panelLargeCheck->Checked = true;
						panelLargeInput->ReadOnly = false;
					}
				}
				else {
					panelSmallCheck->Enabled = false;
					panelSmallCheck->Checked = false;
					panelSmallInput->ReadOnly = true;

					panelLargeCheck->Enabled = false;
					panelLargeCheck->Checked = false;
					panelLargeInput->ReadOnly = true;

					panelSelected = false;
					panelsCheck->Checked = false;
				}
				break;
			}
			case 1:
			{
				// If the GENERATOR main check box is clicked
				if (size == 3) {
					if (!generatorSelected) {
						componentsSelectedMemory[1][0] = generatorSmallSelected;
						generatorSmallSelected = false;
						generatorSmallCheck->Enabled = false;
						generatorSmallInput->ReadOnly = true;
						
						componentsSelectedMemory[1][1] = generatorMediumSelected;
						generatorMediumSelected = false;
						generatorMediumCheck->Enabled = false;
						generatorMediumInput->ReadOnly = true;

						componentsSelectedMemory[1][2] = generatorLargeSelected;
						generatorLargeSelected = false;
						generatorLargeCheck->Enabled = false;
						generatorLargeInput->ReadOnly = true;
					}
					else {
						generatorSmallSelected = componentsSelectedMemory[1][0];
						generatorSmallCheck->Enabled = true;
						generatorSmallCheck->Checked = generatorSmallSelected;
						generatorSmallInput->ReadOnly = !generatorSmallSelected;

						generatorMediumSelected = componentsSelectedMemory[1][1];
						generatorMediumCheck->Enabled = true;
						generatorMediumCheck->Checked = generatorMediumSelected;
						generatorMediumInput->ReadOnly = !generatorMediumSelected;


						generatorLargeSelected = componentsSelectedMemory[1][2];
						generatorLargeCheck->Enabled = true;
						generatorLargeCheck->Checked = generatorLargeSelected;
						generatorLargeInput->ReadOnly = !generatorLargeSelected;
					}
				}
				else if (generatorSmallSelected || generatorMediumSelected || generatorLargeSelected) {
					generatorSelected = true;
					generatorsCheck->Enabled = true;
					generatorsCheck->Checked = true;

					componentsSelectedMemory[1][0] = generatorSmallSelected;
					componentsSelectedMemory[1][1] = generatorMediumSelected;
					componentsSelectedMemory[1][2] = generatorLargeSelected;

					if (generatorSmallSelected) {
						generatorSmallCheck->Enabled = true;
						generatorSmallCheck->Checked = true;
						generatorSmallInput->ReadOnly = false;
					}

					if (generatorMediumSelected) {
						generatorMediumCheck->Enabled = true;
						generatorMediumCheck->Checked = true;
						generatorMediumInput->ReadOnly = false;
					}

					if (generatorLargeSelected) {
						generatorLargeCheck->Enabled = true;
						generatorLargeCheck->Checked = true;
						generatorLargeInput->ReadOnly = false;
					}
				}
				else {
					generatorSmallCheck->Enabled = false;
					generatorSmallCheck->Checked = false;
					generatorSmallInput->ReadOnly = true;

					generatorMediumCheck->Enabled = false;
					generatorMediumCheck->Checked = false;
					generatorMediumInput->ReadOnly = true;

					generatorLargeCheck->Enabled = false;
					generatorLargeCheck->Checked = false;
					generatorLargeInput->ReadOnly = true;

					generatorSelected = false;
					generatorsCheck->Checked = false;
				}
				break;
			}
			case 2:
			{
				// If the GENERATOR main check box is clicked
				if (size == 3) {
					if (!turbineSelected) {
						componentsSelectedMemory[2][0] = turbineSmallSelected;
						turbineSmallSelected = false;
						turbineSmallCheck->Enabled = false;
						turbineSmallInput->ReadOnly = true;

						componentsSelectedMemory[2][1] = turbineMediumSelected;
						turbineMediumSelected = false;
						turbineMediumCheck->Enabled = false;
						turbineMediumInput->ReadOnly = true;

						componentsSelectedMemory[2][2] = turbineLargeSelected;
						turbineLargeSelected = false;
						turbineLargeCheck->Enabled = false;
						turbineLargeInput->ReadOnly = true;
					}
					else {
						turbineSmallSelected = componentsSelectedMemory[2][0];
						turbineSmallCheck->Enabled = true;
						turbineSmallCheck->Checked = turbineSmallSelected;
						turbineSmallInput->ReadOnly = !turbineSmallSelected;

						turbineMediumSelected = componentsSelectedMemory[2][1];
						turbineMediumCheck->Enabled = true;
						turbineMediumCheck->Checked = turbineMediumSelected;
						turbineMediumInput->ReadOnly = !turbineMediumSelected;


						turbineLargeSelected = componentsSelectedMemory[2][2];
						turbineLargeCheck->Enabled = true;
						turbineLargeCheck->Checked = turbineLargeSelected;
						turbineLargeInput->ReadOnly = !turbineLargeSelected;
					}
				}
				else if (turbineSmallSelected || turbineMediumSelected || turbineLargeSelected) {
					turbineSelected = true;
					turbinesCheck->Enabled = true;
					turbinesCheck->Checked = true;

					componentsSelectedMemory[2][0] = turbineSmallSelected;
					componentsSelectedMemory[2][1] = turbineMediumSelected;
					componentsSelectedMemory[2][2] = turbineLargeSelected;

					if (turbineSmallSelected) {
						turbineSmallCheck->Enabled = true;
						turbineSmallCheck->Checked = true;
						turbineSmallInput->ReadOnly = false;
					}

					if (turbineMediumSelected) {
						turbineMediumCheck->Enabled = true;
						turbineMediumCheck->Checked = true;
						turbineMediumInput->ReadOnly = false;
					}

					if (turbineLargeSelected) {
						turbineLargeCheck->Enabled = true;
						turbineLargeCheck->Checked = true;
						turbineLargeInput->ReadOnly = false;
					}
				}
				else {
					turbineSmallCheck->Enabled = false;
					turbineSmallCheck->Checked = false;
					turbineSmallInput->ReadOnly = true;

					turbineMediumCheck->Enabled = false;
					turbineMediumCheck->Checked = false;
					turbineMediumInput->ReadOnly = true;

					turbineLargeCheck->Enabled = false;
					turbineLargeCheck->Checked = false;
					turbineLargeInput->ReadOnly = true;

					turbineSelected = false;
					turbinesCheck->Checked = false;
				}
				break;
			}
	}
	calculateCosts(type, size);
	calculateEnergies(type, size);
	updateRatioAndBar();
	displayStats();
}

        void updateGridView() {
									dataGridView1->Rows->Clear();
									for (int i = 0; i < 3; i++) {
										for (int j = 0; j < 3; j++) {
											if (numberOfComponents[i][j] > 0) {
												
												dataGridView1->Rows->Add();
												dataGridView1->Rows[dataGridView1->Rows->Count - 1]->Cells[0]->Value = gcnew String(nameOfComponents[i][j].c_str());
												dataGridView1->Rows[dataGridView1->Rows->Count - 1]->Cells[1]->Value = numberOfComponents[i][j];
												dataGridView1->Rows[dataGridView1->Rows->Count - 1]->Cells[2]->Value = costs[i][j];
												dataGridView1->Rows[dataGridView1->Rows->Count - 1]->Cells[3]->Value = costs[i][j] * numberOfComponents[i][j];
											}
										}
									}
        }

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

private: System::Void totalPanelEnergy_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // PROGRESS BAR
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void totalGeneratorCost_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
// TOTAL POWER CONSUMPTION INPUT
private: System::Void textBox1_TextChanged(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	/*powerUsage = System::Convert::ToDouble(totalPowerInput->Text);*/
	if (!System::Char::IsDigit(e->KeyChar) && e->KeyChar != (char)System::Windows::Forms::Keys::Back) {
		e->Handled = true;
	}

}
private: System::Void treeView2_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
}
private: System::Void treeView3_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
}


// SOLAR PANEL CHECK BOXES
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	panelSelected = panelsCheck->Checked;

	updateCheckBox(0, 3);
	//displayStats();
}
	
private: System::Void panelSmallCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	panelSmallSelected = panelSmallCheck->Checked;
	panelSmallCheck->Checked = panelSmallSelected;
	updateCheckBox(0, 0);
	//displayStats();
}
private: System::Void panelLargeCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	panelLargeSelected = panelLargeCheck->Checked;
	
	updateCheckBox(0, 1);
}


// FUNCTION FOR THE INPUT OF SMALL SOLAR PANEL TEXT BOX
private: System::Void panelSmallInput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!System::Char::IsDigit(e->KeyChar) && e->KeyChar != (char)System::Windows::Forms::Keys::Back) {
		e->Handled = true;
	}
}


// FUNCTION FOR THE INPUT OF LARGE SOLAR PANEL TEXT BOX
private: System::Void panelLargeInput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!System::Char::IsDigit(e->KeyChar) && e->KeyChar != (char)System::Windows::Forms::Keys::Back) {
		e->Handled = true;
	}
	
}

	   // FUNCTIONS FOR WHEN THE GENERATOR TEXTBOX INPUTS ARE CHANGED
private: System::Void generatorSmallInput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!System::Char::IsDigit(e->KeyChar) && e->KeyChar != (char)System::Windows::Forms::Keys::Back) {
		e->Handled = true;
	}
	
}

private: System::Void generatorMediumInput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!System::Char::IsDigit(e->KeyChar) && e->KeyChar != (char)System::Windows::Forms::Keys::Back) {
		e->Handled = true;
	}
}

private: System::Void generatorLargeInput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!System::Char::IsDigit(e->KeyChar) && e->KeyChar != (char)System::Windows::Forms::Keys::Back) {
		e->Handled = true;
	}
	
}


 // FUNCTIONS FOR WHEN THE TURBINE TEXTBOX INPUTS ARE CHANGED

private: System::Void turbineSmallInput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!System::Char::IsDigit(e->KeyChar) && e->KeyChar != (char)System::Windows::Forms::Keys::Back) {
		e->Handled = true;
	}


}

private: System::Void turbineMediumInput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!System::Char::IsDigit(e->KeyChar) && e->KeyChar != (char)System::Windows::Forms::Keys::Back) {
		e->Handled = true;
	}
	
}

private: System::Void turbineLargeInput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!System::Char::IsDigit(e->KeyChar) && e->KeyChar != (char)System::Windows::Forms::Keys::Back) {
		e->Handled = true;
	}

	}

private: System::Void totalPowerInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	updateInput(sender, e, -1, -1);
}

private: System::Void panelSmallInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	updateInput(sender, e, panelID, 0);
}

private: System::Void panelLargeInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	updateInput(sender, e, panelID, 1);
}

private: System::Void generatorSmallInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	updateInput(sender, e, generatorID, 0);
}

private: System::Void generatorMediumInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	updateInput(sender, e, generatorID, 1);
}

private: System::Void generatorLargeInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	updateInput(sender, e, generatorID, 2);
}

private: System::Void turbineLargeInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	updateInput(sender, e, turbineID, 2);
}

private: System::Void turbineMediumInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	updateInput(sender, e, turbineID, 1);
}

private: System::Void turbineSmallInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	updateInput(sender, e, turbineID, 0);
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	updateInput(sender, e, -1, -1);
}


private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void generatorsCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	generatorSelected = generatorsCheck->Checked;
	updateCheckBox(1, 3);
}
private: System::Void generatorsCheckSmall_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	generatorSmallSelected = generatorSmallCheck->Checked;
	generatorSmallInput->Enabled = generatorSmallSelected;
	updateCheckBox(1, 0);
}
private: System::Void generatorsCheckMedium_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	generatorMediumSelected = generatorMediumCheck->Checked;
	generatorMediumInput->Enabled = generatorMediumSelected;
	updateCheckBox(1, 1);
}
private: System::Void generatorCheckLarge_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	generatorLargeSelected = generatorLargeCheck->Checked;
	generatorLargeInput->Enabled = generatorLargeSelected;
	updateCheckBox(1, 2);
}
private: System::Void turbinesCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	turbineSelected = turbinesCheck->Checked;
	updateCheckBox(2, 3);
}
private: System::Void turbinesCheckSmall_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	turbineSmallSelected = turbineSmallCheck->Checked;
	turbineSmallInput->Enabled = turbineSmallSelected;
	updateCheckBox(2, 0);
}
private: System::Void turbinesCheckLarge_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	turbineLargeSelected = turbineLargeCheck->Checked;
	turbineLargeInput->Enabled = turbineLargeSelected;
	updateCheckBox(2, 2);
}
private: System::Void turbinesCheckMed_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	turbineMediumSelected = turbineMediumCheck->Checked;
	turbineMediumInput->Enabled = turbineMediumSelected;
	updateCheckBox(2, 1);
}
private: System::Void batteryCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void statisticsPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void componentsPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void bindingSource1_CurrentChanged(System::Object^ sender, System::EventArgs^ e) {
}

	  private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		  System::Windows::Forms::TabControl^ tabControl = safe_cast<System::Windows::Forms::TabControl^>(sender);
		  int selectedIndex = tabControl->SelectedIndex;

		   if (selectedIndex == 1) {
			   updateGridView();
		   }
	   }

};
}


