#pragma once

#include <iostream>
#include <cmath>

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
	private: System::Windows::Forms::CheckBox^ panelMedCheck;
	private: System::Windows::Forms::CheckBox^ generatorsCheckSmall;
	private: System::Windows::Forms::CheckBox^ generatorsCheckMedium;
	private: System::Windows::Forms::CheckBox^ generatorsCheckLarge;

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
			this->panelMedCheck = (gcnew System::Windows::Forms::CheckBox());
			this->generatorsCheckSmall = (gcnew System::Windows::Forms::CheckBox());
			this->generatorsCheckMedium = (gcnew System::Windows::Forms::CheckBox());
			this->generatorsCheckLarge = (gcnew System::Windows::Forms::CheckBox());
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
			this->totalPanelEnergy = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->totalGeneratorEnergy = (gcnew System::Windows::Forms::Label());
			this->totalTurbineEnergy = (gcnew System::Windows::Forms::Label());
			this->costBatteriesLabel = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->batteryCheckbox = (gcnew System::Windows::Forms::CheckBox());
			this->statisticsLabel = (gcnew System::Windows::Forms::Label());
			this->componentsPanel = (gcnew System::Windows::Forms::Panel());
			this->panelStatsTitle = (gcnew System::Windows::Forms::Label());
			this->generatorStatsTitle = (gcnew System::Windows::Forms::Label());
			this->panelSurfaceAreaLabel = (gcnew System::Windows::Forms::Label());
			this->panelWeightLabel = (gcnew System::Windows::Forms::Label());
			this->fuelConsumptionLabel = (gcnew System::Windows::Forms::Label());
			this->yearlyFuelPriceLabel = (gcnew System::Windows::Forms::Label());
			this->panelYearlySavingsLabel = (gcnew System::Windows::Forms::Label());
			this->statisticsPanel = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->componentsPanel->SuspendLayout();
			this->statisticsPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// totalPowerInput
			// 
			this->totalPowerInput->Location = System::Drawing::Point(10, 150);
			this->totalPowerInput->Name = L"totalPowerInput";
			this->totalPowerInput->Size = System::Drawing::Size(336, 22);
			this->totalPowerInput->TabIndex = 2;
			this->totalPowerInput->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->label1->Location = System::Drawing::Point(12, 120);
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
			this->componentsLabel->Location = System::Drawing::Point(-52, 1);
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
			this->ratioBar->Location = System::Drawing::Point(917, 517);
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
			this->pictureBox1->Size = System::Drawing::Size(108, 101);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 50));
			this->label3->ForeColor = System::Drawing::Color::DimGray;
			this->label3->Location = System::Drawing::Point(125, -1);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(292, 89);
			this->label3->TabIndex = 8;
			this->label3->Text = L"MiniGrid";
			// 
			// totalCostLabel
			// 
			this->totalCostLabel->AutoSize = true;
			this->totalCostLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 30));
			this->totalCostLabel->Location = System::Drawing::Point(908, 425);
			this->totalCostLabel->Name = L"totalCostLabel";
			this->totalCostLabel->Size = System::Drawing::Size(183, 54);
			this->totalCostLabel->TabIndex = 11;
			this->totalCostLabel->Text = L"COST: $0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20));
			this->label5->Location = System::Drawing::Point(910, 479);
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
			this->panelsCheck->Location = System::Drawing::Point(9, 45);
			this->panelsCheck->Name = L"panelsCheck";
			this->panelsCheck->Size = System::Drawing::Size(178, 41);
			this->panelsCheck->TabIndex = 13;
			this->panelsCheck->Text = L"Solar Panels";
			this->panelsCheck->UseVisualStyleBackColor = true;
			this->panelsCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// generatorsCheck
			// 
			this->generatorsCheck->AutoSize = true;
			this->generatorsCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20));
			this->generatorsCheck->Location = System::Drawing::Point(5, 142);
			this->generatorsCheck->Name = L"generatorsCheck";
			this->generatorsCheck->Size = System::Drawing::Size(166, 41);
			this->generatorsCheck->TabIndex = 14;
			this->generatorsCheck->Text = L"Generators";
			this->generatorsCheck->UseVisualStyleBackColor = true;
			this->generatorsCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::generatorsCheck_CheckedChanged);
			// 
			// turbinesCheck
			// 
			this->turbinesCheck->AutoSize = true;
			this->turbinesCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20));
			this->turbinesCheck->Location = System::Drawing::Point(4, 262);
			this->turbinesCheck->Name = L"turbinesCheck";
			this->turbinesCheck->Size = System::Drawing::Size(137, 41);
			this->turbinesCheck->TabIndex = 15;
			this->turbinesCheck->Text = L"Turbines";
			this->turbinesCheck->UseVisualStyleBackColor = true;
			this->turbinesCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::turbinesCheck_CheckedChanged);
			// 
			// panelSmallCheck
			// 
			this->panelSmallCheck->AutoSize = true;
			this->panelSmallCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->panelSmallCheck->Location = System::Drawing::Point(41, 79);
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
			this->panelMedCheck->Location = System::Drawing::Point(41, 108);
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
			this->generatorsCheckSmall->Location = System::Drawing::Point(41, 173);
			this->generatorsCheckSmall->Name = L"generatorsCheckSmall";
			this->generatorsCheckSmall->Size = System::Drawing::Size(79, 32);
			this->generatorsCheckSmall->TabIndex = 18;
			this->generatorsCheckSmall->Text = L"Small";
			this->generatorsCheckSmall->UseVisualStyleBackColor = true;
			this->generatorsCheckSmall->CheckedChanged += gcnew System::EventHandler(this, &MyForm::generatorsCheckSmall_CheckedChanged);
			// 
			// generatorsCheckMedium
			// 
			this->generatorsCheckMedium->AutoSize = true;
			this->generatorsCheckMedium->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->generatorsCheckMedium->Location = System::Drawing::Point(41, 200);
			this->generatorsCheckMedium->Name = L"generatorsCheckMedium";
			this->generatorsCheckMedium->Size = System::Drawing::Size(104, 32);
			this->generatorsCheckMedium->TabIndex = 19;
			this->generatorsCheckMedium->Text = L"Medium";
			this->generatorsCheckMedium->UseVisualStyleBackColor = true;
			this->generatorsCheckMedium->CheckedChanged += gcnew System::EventHandler(this, &MyForm::generatorsCheckMedium_CheckedChanged);
			// 
			// generatorsCheckLarge
			// 
			this->generatorsCheckLarge->AutoSize = true;
			this->generatorsCheckLarge->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->generatorsCheckLarge->Location = System::Drawing::Point(41, 229);
			this->generatorsCheckLarge->Name = L"generatorsCheckLarge";
			this->generatorsCheckLarge->Size = System::Drawing::Size(112, 32);
			this->generatorsCheckLarge->TabIndex = 20;
			this->generatorsCheckLarge->Text = L"Industrial";
			this->generatorsCheckLarge->UseVisualStyleBackColor = true;
			this->generatorsCheckLarge->CheckedChanged += gcnew System::EventHandler(this, &MyForm::generatorCheckLarge_CheckedChanged);
			// 
			// turbinesCheckLarge
			// 
			this->turbinesCheckLarge->AutoSize = true;
			this->turbinesCheckLarge->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->turbinesCheckLarge->Location = System::Drawing::Point(41, 350);
			this->turbinesCheckLarge->Name = L"turbinesCheckLarge";
			this->turbinesCheckLarge->Size = System::Drawing::Size(112, 32);
			this->turbinesCheckLarge->TabIndex = 23;
			this->turbinesCheckLarge->Text = L"Industrial";
			this->turbinesCheckLarge->UseVisualStyleBackColor = true;
			this->turbinesCheckLarge->CheckedChanged += gcnew System::EventHandler(this, &MyForm::turbinesCheckLarge_CheckedChanged);
			// 
			// turbinesCheckMed
			// 
			this->turbinesCheckMed->AutoSize = true;
			this->turbinesCheckMed->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->turbinesCheckMed->Location = System::Drawing::Point(41, 321);
			this->turbinesCheckMed->Name = L"turbinesCheckMed";
			this->turbinesCheckMed->Size = System::Drawing::Size(104, 32);
			this->turbinesCheckMed->TabIndex = 22;
			this->turbinesCheckMed->Text = L"Medium";
			this->turbinesCheckMed->UseVisualStyleBackColor = true;
			this->turbinesCheckMed->CheckedChanged += gcnew System::EventHandler(this, &MyForm::turbinesCheckMed_CheckedChanged);
			// 
			// turbinesCheckSmall
			// 
			this->turbinesCheckSmall->AutoSize = true;
			this->turbinesCheckSmall->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->turbinesCheckSmall->Location = System::Drawing::Point(41, 294);
			this->turbinesCheckSmall->Name = L"turbinesCheckSmall";
			this->turbinesCheckSmall->Size = System::Drawing::Size(79, 32);
			this->turbinesCheckSmall->TabIndex = 21;
			this->turbinesCheckSmall->Text = L"Small";
			this->turbinesCheckSmall->UseVisualStyleBackColor = true;
			this->turbinesCheckSmall->CheckedChanged += gcnew System::EventHandler(this, &MyForm::turbinesCheckSmall_CheckedChanged);
			// 
			// panelSmallInput
			// 
			this->panelSmallInput->Location = System::Drawing::Point(208, 86);
			this->panelSmallInput->Name = L"panelSmallInput";
			this->panelSmallInput->Size = System::Drawing::Size(89, 22);
			this->panelSmallInput->TabIndex = 25;
			this->panelSmallInput->TextChanged += gcnew System::EventHandler(this, &MyForm::panelSmallInput_TextChanged);
			// 
			// panelLargeInput
			// 
			this->panelLargeInput->Location = System::Drawing::Point(208, 112);
			this->panelLargeInput->Name = L"panelLargeInput";
			this->panelLargeInput->Size = System::Drawing::Size(89, 22);
			this->panelLargeInput->TabIndex = 26;
			this->panelLargeInput->TextChanged += gcnew System::EventHandler(this, &MyForm::panelLargeInput_TextChanged);
			// 
			// generatorSmallInput
			// 
			this->generatorSmallInput->Location = System::Drawing::Point(208, 177);
			this->generatorSmallInput->Name = L"generatorSmallInput";
			this->generatorSmallInput->Size = System::Drawing::Size(89, 22);
			this->generatorSmallInput->TabIndex = 27;
			this->generatorSmallInput->TextChanged += gcnew System::EventHandler(this, &MyForm::generatorSmallInput_TextChanged);
			// 
			// generatorMediumInput
			// 
			this->generatorMediumInput->Location = System::Drawing::Point(208, 205);
			this->generatorMediumInput->Name = L"generatorMediumInput";
			this->generatorMediumInput->Size = System::Drawing::Size(89, 22);
			this->generatorMediumInput->TabIndex = 28;
			this->generatorMediumInput->TextChanged += gcnew System::EventHandler(this, &MyForm::generatorMediumInput_TextChanged);
			// 
			// generatorLargeInput
			// 
			this->generatorLargeInput->Location = System::Drawing::Point(208, 233);
			this->generatorLargeInput->Name = L"generatorLargeInput";
			this->generatorLargeInput->Size = System::Drawing::Size(89, 22);
			this->generatorLargeInput->TabIndex = 29;
			this->generatorLargeInput->TextChanged += gcnew System::EventHandler(this, &MyForm::generatorLargeInput_TextChanged);
			// 
			// turbineLargeInput
			// 
			this->turbineLargeInput->Location = System::Drawing::Point(208, 355);
			this->turbineLargeInput->Name = L"turbineLargeInput";
			this->turbineLargeInput->Size = System::Drawing::Size(89, 22);
			this->turbineLargeInput->TabIndex = 32;
			this->turbineLargeInput->TextChanged += gcnew System::EventHandler(this, &MyForm::turbineLargeInput_TextChanged);
			// 
			// turbineMediumInput
			// 
			this->turbineMediumInput->Location = System::Drawing::Point(208, 327);
			this->turbineMediumInput->Name = L"turbineMediumInput";
			this->turbineMediumInput->Size = System::Drawing::Size(89, 22);
			this->turbineMediumInput->TabIndex = 31;
			this->turbineMediumInput->TextChanged += gcnew System::EventHandler(this, &MyForm::turbineMediumInput_TextChanged);
			// 
			// turbineSmallInput
			// 
			this->turbineSmallInput->Location = System::Drawing::Point(208, 299);
			this->turbineSmallInput->Name = L"turbineSmallInput";
			this->turbineSmallInput->Size = System::Drawing::Size(89, 22);
			this->turbineSmallInput->TabIndex = 30;
			this->turbineSmallInput->TextChanged += gcnew System::EventHandler(this, &MyForm::turbineSmallInput_TextChanged);
			// 
			// totalPanelCost
			// 
			this->totalPanelCost->AutoSize = true;
			this->totalPanelCost->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->totalPanelCost->Location = System::Drawing::Point(303, 57);
			this->totalPanelCost->Name = L"totalPanelCost";
			this->totalPanelCost->Size = System::Drawing::Size(90, 28);
			this->totalPanelCost->TabIndex = 33;
			this->totalPanelCost->Text = L"COST: $0";
			// 
			// totalGeneratorCost
			// 
			this->totalGeneratorCost->AutoSize = true;
			this->totalGeneratorCost->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->totalGeneratorCost->Location = System::Drawing::Point(303, 162);
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
			this->totalTurbineCost->Location = System::Drawing::Point(303, 273);
			this->totalTurbineCost->Name = L"totalTurbineCost";
			this->totalTurbineCost->Size = System::Drawing::Size(90, 28);
			this->totalTurbineCost->TabIndex = 35;
			this->totalTurbineCost->Text = L"COST: $0";
			// 
			// totalPanelEnergy
			// 
			this->totalPanelEnergy->AutoSize = true;
			this->totalPanelEnergy->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->totalPanelEnergy->Location = System::Drawing::Point(304, 90);
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
			this->label4->Location = System::Drawing::Point(912, 575);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 28);
			this->label4->TabIndex = 37;
			this->label4->Text = L"Ratio:";
			// 
			// totalGeneratorEnergy
			// 
			this->totalGeneratorEnergy->AutoSize = true;
			this->totalGeneratorEnergy->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->totalGeneratorEnergy->Location = System::Drawing::Point(304, 190);
			this->totalGeneratorEnergy->Name = L"totalGeneratorEnergy";
			this->totalGeneratorEnergy->Size = System::Drawing::Size(109, 19);
			this->totalGeneratorEnergy->TabIndex = 38;
			this->totalGeneratorEnergy->Text = L"KWH per Year: 0";
			// 
			// totalTurbineEnergy
			// 
			this->totalTurbineEnergy->AutoSize = true;
			this->totalTurbineEnergy->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->totalTurbineEnergy->Location = System::Drawing::Point(304, 304);
			this->totalTurbineEnergy->Name = L"totalTurbineEnergy";
			this->totalTurbineEnergy->Size = System::Drawing::Size(109, 19);
			this->totalTurbineEnergy->TabIndex = 39;
			this->totalTurbineEnergy->Text = L"KWH per Year: 0";
			// 
			// costBatteriesLabel
			// 
			this->costBatteriesLabel->AutoSize = true;
			this->costBatteriesLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->costBatteriesLabel->Location = System::Drawing::Point(303, 395);
			this->costBatteriesLabel->Name = L"costBatteriesLabel";
			this->costBatteriesLabel->Size = System::Drawing::Size(90, 28);
			this->costBatteriesLabel->TabIndex = 42;
			this->costBatteriesLabel->Text = L"COST: $0";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(208, 401);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(89, 22);
			this->textBox1->TabIndex = 41;
			// 
			// batteryCheckbox
			// 
			this->batteryCheckbox->AutoSize = true;
			this->batteryCheckbox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20));
			this->batteryCheckbox->Location = System::Drawing::Point(6, 389);
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
			this->statisticsLabel->Location = System::Drawing::Point(588, 178);
			this->statisticsLabel->Name = L"statisticsLabel";
			this->statisticsLabel->Size = System::Drawing::Size(301, 46);
			this->statisticsLabel->TabIndex = 43;
			this->statisticsLabel->Text = L"         Satistics         ";
			this->statisticsLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// componentsPanel
			// 
			this->componentsPanel->BackColor = System::Drawing::SystemColors::ControlLight;
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
			this->componentsPanel->Controls->Add(this->turbinesCheckLarge);
			this->componentsPanel->Controls->Add(this->turbinesCheckMed);
			this->componentsPanel->Controls->Add(this->turbinesCheckSmall);
			this->componentsPanel->Controls->Add(this->generatorsCheckLarge);
			this->componentsPanel->Controls->Add(this->generatorsCheckMedium);
			this->componentsPanel->Controls->Add(this->generatorsCheckSmall);
			this->componentsPanel->Controls->Add(this->panelMedCheck);
			this->componentsPanel->Controls->Add(this->panelSmallCheck);
			this->componentsPanel->Controls->Add(this->turbinesCheck);
			this->componentsPanel->Controls->Add(this->generatorsCheck);
			this->componentsPanel->Controls->Add(this->panelsCheck);
			this->componentsPanel->Location = System::Drawing::Point(10, 178);
			this->componentsPanel->Name = L"componentsPanel";
			this->componentsPanel->Size = System::Drawing::Size(556, 439);
			this->componentsPanel->TabIndex = 44;
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
			this->statisticsPanel->Location = System::Drawing::Point(589, 223);
			this->statisticsPanel->Name = L"statisticsPanel";
			this->statisticsPanel->Size = System::Drawing::Size(300, 393);
			this->statisticsPanel->TabIndex = 52;
			this->statisticsPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::statisticsPanel_Paint);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1403, 621);
			this->Controls->Add(this->statisticsPanel);
			this->Controls->Add(this->componentsPanel);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->totalCostLabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->statisticsLabel);
			this->Controls->Add(this->ratioBar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->totalPowerInput);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		//Functions to implement later that will update the cost displays 
		
		void updateRatioAndBar() {
			powerGenerated = totalEnergies[0] + totalEnergies[1] + totalEnergies[2];

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

		void displayCost() {
		
		}

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
			float totalCost = totalCosts[0] + totalCosts[1] + totalCosts[2];
			totalCostLabel->Text = "COST: $" + totalCost;
		}

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

		void calculateFuel() {
			fuelGenerators = (numberOfComponents[1][0] * generatorSmall->fuelPerHour * 8760) + (numberOfComponents[1][1] * generatorMedium->fuelPerHour * 8760) + (numberOfComponents[1][2] * generatorLarge->fuelPerHour * 8760);
			fuelConsumptionLabel->Text = "Yearly fuel consumption (L): " + fuelGenerators;
			fuelGeneratorPrice = fuelGenerators * 1.6;
			yearlyFuelPriceLabel->Text = "Yearly fuel price ($): " + fuelGeneratorPrice;
		}

		void calculateSurfaceArea() {
			areaSolarPanels = numberOfComponents[0][0] * panelSmall->surfaceArea + numberOfComponents[0][1] * panelLarge->surfaceArea;
			panelSurfaceAreaLabel->Text = "Total surface area (ft^2): " + areaSolarPanels;
		}

		void displayStats() {
			panelStatsTitle->Visible = panelSelected;
			panelSurfaceAreaLabel->Visible = panelSelected;
			panelWeightLabel->Visible = panelSelected;
			panelYearlySavingsLabel->Visible = panelSelected;

			generatorStatsTitle->Visible = generatorSelected;
			fuelConsumptionLabel->Visible = generatorSelected;
			yearlyFuelPriceLabel->Visible = generatorSelected;
		}

		void calculateWeight() {
			weightSolarPanels = numberOfComponents[0][0] * panelSmall->weight + numberOfComponents[0][1] * panelLarge->weight;
			panelWeightLabel->Text = "Total weight (lbs): " + weightSolarPanels;
		}

		void calculatePanelSavings() {
			savingsSolarPanels = totalEnergies[0] * 0.13;
			panelYearlySavingsLabel->Text = "Yearly savings ($): " + savingsSolarPanels;
		}

		void calculatePanelDetails() {
			calculateSurfaceArea();
			calculateWeight();
			calculatePanelSavings();
		}

		void panelsCheckUpdate(int type, int size) {
			switch (type)
			{
			case 0:
			{
				panelsCheck->Checked = panelSelected;
				switch (size)
				{
				case 0:
					panelSmallSelected = getState(numberOfComponents[0][0] > 0);
					panelSmallCheck->Checked = panelSmallSelected;

					break;
				case 1:
					panelLargeSelected = getState(numberOfComponents[0][1] > 0);
					panelMedCheck->Checked = panelLargeSelected;
					break;
				}
				panelSelected = panelSmallSelected || panelLargeSelected;
				panelsCheck->Checked = panelSelected;
				calculateCosts(type, size);
				calculateEnergies(type, size);
				break;
			}
			case 1:
			{
				switch (size)
				{
				case 0:
					generatorSmallSelected = getState(numberOfComponents[1][0] > 0);
					generatorsCheckSmall->Checked = generatorSmallSelected;
					break;
				case 1:
					generatorMediumSelected = getState(numberOfComponents[1][1] > 0);
					generatorsCheckMedium->Checked = generatorMediumSelected;
					break;
				case 2:
					generatorLargeSelected = getState(numberOfComponents[1][2] > 0);
					generatorsCheckLarge->Checked = generatorLargeSelected;
					break;
				}
				generatorSelected = generatorSmallSelected || generatorMediumSelected || generatorLargeSelected;
				generatorsCheck->Checked = generatorSelected;
				calculateCosts(type, size);
				calculateEnergies(type, size);
				break;
			}
			case 2:
			{
				turbinesCheck->Checked = turbineSelected;
				switch (size)
				{
				case 0:
					turbineSmallSelected = getState(numberOfComponents[2][0] > 0);
					turbinesCheckSmall->Checked = turbineSmallSelected;
					break;
				case 1:
					turbineMediumSelected = getState(numberOfComponents[2][1] > 0);
					turbinesCheckMed->Checked = turbineMediumSelected;
					break;
				case 2:
					turbineLargeSelected = getState(numberOfComponents[2][2] > 0);
					turbinesCheckLarge->Checked = turbineLargeSelected;
					break;

				}
				turbineSelected = turbineSmallSelected || turbineMediumSelected || turbineLargeSelected;
				turbinesCheck->Checked = turbineSelected;
				calculateCosts(type, size);
				calculateEnergies(type, size);
				break;
				}
			}
			displayStats();
		}

		void  updateInput(System::Object^ sender, int type, int size) {
			TextBox^ textBox = dynamic_cast<TextBox^>(sender);
			if (textBox == nullptr) return;


			if (textBox->Text == "") {
				textBox->Text = "";
				
				numberOfComponents[type][size] = 0;	
				//panelsCheck->Checked = false;
				panelsCheckUpdate(type, size);
				
			}

			else if (System::Convert::ToDouble(textBox->Text) > 0) {

				numberOfComponents[type][size] = System::Convert::ToDouble(textBox->Text);
				
				//For cost
				//calculateCosts(type, size);
				//
				//// For energy
				//calculateEnergies(type, size);
				panelsCheckUpdate(type, size);
				updateRatioAndBar();
				
			}

			else {
				textBox->Text = "";

				numberOfComponents[type][size] = 0;
				panelsCheckUpdate(type, size);
				calculateCosts(type, size);
				calculateEnergies(type, size);
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
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	powerUsage = System::Convert::ToDouble(totalPowerInput->Text);
	updateRatioAndBar();	
}
private: System::Void treeView2_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
}
private: System::Void treeView3_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
}
// SOLAR PANEL CHECK BOX
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	panelSelected = panelsCheck->Checked;
	// CONTINUE HERE
	panelsCheckUpdate(0, 2);
	displayStats();
}
	
private: System::Void panelSmallCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panelMedCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}


// FUNCTION FOR THE INPUT OF SMALL SOLAR PANEL TEXT BOX
private: System::Void panelSmallInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	updateInput(sender, panelID ,0);
}


// FUNCTION FOR THE INPUT OF LARGE SOLAR PANEL TEXT BOX
private: System::Void panelLargeInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	updateInput(sender, panelID, 1);
}

	   // FUNCTION FOR THE INPUT OF SMALL GENERATOR TEXT BOX
private: System::Void generatorSmallInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	updateInput(sender, generatorID, 0);
}



	   // FUNCTION FOR THE INPUT OF MEDIUM GENERATOR TEXT BOX
private: System::Void generatorMediumInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	updateInput(sender, generatorID, 1);
}

private: System::Void generatorLargeInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	updateInput(sender, generatorID, 2);
}

		   // TURBINES------------------------------------------------------------------------------------------------------------------------------------------------------





		   // FUNCTION FOR THE INPUT OF MEDIUM GENERATOR TEXT BOX

private: System::Void turbineSmallInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	updateInput(sender, turbineID, 0);
}



	   // FUNCTION FOR THE INPUT OF MEDIUM GENERATOR TEXT BOX
private: System::Void turbineMediumInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	updateInput(sender, turbineID, 1);
}
private: System::Void turbineLargeInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	updateInput(sender, turbineID, 2);
	}


private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void generatorsCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void generatorsCheckSmall_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void generatorsCheckMedium_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void generatorCheckLarge_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void turbinesCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void turbinesCheckSmall_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void turbinesCheckLarge_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void turbinesCheckMed_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void batteryCheckbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void statisticsPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}


