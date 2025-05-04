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
	
	float cleanEnergy = 0;
	float uncleanEnergy = 0;
	float cleanEnergyRatio = 0;
	float otherEnergyRatio = 0;
	float pricePerKWH = 0;

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

	
	float totalCosts[4] = { 0, 0, 0, 0 };
	float totalEnergies[4] = { 0, 0, 0, 0 };

	float fuelGenerator[3] = { 0, 0, 0 };
	// find the cost of batteries
	float batteryPrice = 15618;
	float batteryEnergy = 16;
	
	

	// Create functions to generate final price using the big price variable of each three plus fuel prices. Then maintenance estimations?

	// Float variable for the yearly price of fuel
	float fuelGenerators = 0;
	float fuelGeneratorPrice = 0;
	// Array to contain the costs of the turbines given the selected amount
	
	
	

	// Cost of batteries
	float costBatteries = 0;
	float storageBatteries = 0;
	

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

	
	public: SolarPanels^ panelSmall = gcnew SolarPanels(16.5, 40, 1155, 730);
	public: SolarPanels^ panelLarge = gcnew SolarPanels(19.5, 50, 1485, 876);
	public: Generators^ generatorSmall = gcnew Generators(657000, 27, 62288, 1);
	public: Generators^ generatorMedium = gcnew Generators(3285000, 105, 244230, 1);
	public: Generators^ generatorLarge = gcnew Generators(7227000, 105, 415910, 1);
	public: Turbines^ turbineSmall = gcnew Turbines(21500, 64000, 1);
	public: Turbines^ turbineMedium = gcnew Turbines(36000, 100000, 1);
	public: Turbines^ turbineLarge = gcnew Turbines(7008000, 1860217, 1);


	private: System::Windows::Forms::Label^ componentsLabel;

	private: System::Windows::Forms::ProgressBar^ ratioBar;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ totalCostLabel;


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
	private: System::Windows::Forms::TextBox^ batteryInput;
	private: System::Windows::Forms::CheckBox^ batteryCheck;



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


private: System::Data::DataSet^ dataSet2;




private: System::Windows::Forms::TabPage^ printTab;
private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ batteryCapacityLabel;
private: System::Windows::Forms::Label^ label7;

private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Label^ componentsTableLabel;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::DataGridView^ statisticsGridView;
private: System::Windows::Forms::Button^ exportButton;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::PictureBox^ pictureBox8;







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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->totalPowerInput = (gcnew System::Windows::Forms::TextBox());
			this->componentsLabel = (gcnew System::Windows::Forms::Label());
			this->ratioBar = (gcnew System::Windows::Forms::ProgressBar());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->totalCostLabel = (gcnew System::Windows::Forms::Label());
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
			this->batteryInput = (gcnew System::Windows::Forms::TextBox());
			this->batteryCheck = (gcnew System::Windows::Forms::CheckBox());
			this->statisticsLabel = (gcnew System::Windows::Forms::Label());
			this->componentsPanel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->batteryCapacityLabel = (gcnew System::Windows::Forms::Label());
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->printTab = (gcnew System::Windows::Forms::TabPage());
			this->exportButton = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->statisticsGridView = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->componentsTableLabel = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataSet2 = (gcnew System::Data::DataSet());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->componentsPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->statisticsPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->designTab->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->printTab->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->statisticsGridView))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// totalPowerInput
			// 
			this->totalPowerInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->totalPowerInput->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->totalPowerInput->Location = System::Drawing::Point(8, 36);
			this->totalPowerInput->Name = L"totalPowerInput";
			this->totalPowerInput->Size = System::Drawing::Size(599, 34);
			this->totalPowerInput->TabIndex = 2;
			this->totalPowerInput->TextChanged += gcnew System::EventHandler(this, &MyForm::totalPowerInput_TextChanged);
			this->totalPowerInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::totalPowerInput_KeyPress);
			// 
			// componentsLabel
			// 
			this->componentsLabel->BackColor = System::Drawing::Color::Transparent;
			this->componentsLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->componentsLabel->ForeColor = System::Drawing::SystemColors::Info;
			this->componentsLabel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"componentsLabel.Image")));
			this->componentsLabel->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->componentsLabel->Location = System::Drawing::Point(11, 73);
			this->componentsLabel->Name = L"componentsLabel";
			this->componentsLabel->Size = System::Drawing::Size(593, 49);
			this->componentsLabel->TabIndex = 5;
			this->componentsLabel->Text = L" Components";
			//this->componentsLabel->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// ratioBar
			// 
			this->ratioBar->BackColor = System::Drawing::Color::DimGray;
			this->ratioBar->ForeColor = System::Drawing::Color::YellowGreen;
			this->ratioBar->Location = System::Drawing::Point(23, 94);
			this->ratioBar->MarqueeAnimationSpeed = 0;
			this->ratioBar->Name = L"ratioBar";
			this->ratioBar->Size = System::Drawing::Size(537, 30);
			this->ratioBar->Step = 1;
			this->ratioBar->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->ratioBar->TabIndex = 6;
			//this->ratioBar->Click += gcnew System::EventHandler(this, &MyForm::progressBar1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
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
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 39.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(102, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(546, 71);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Microgrid Dashboard";
			//this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// totalCostLabel
			// 
			this->totalCostLabel->AutoSize = true;
			this->totalCostLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 27, System::Drawing::FontStyle::Bold));
			this->totalCostLabel->Location = System::Drawing::Point(20, 17);
			this->totalCostLabel->Name = L"totalCostLabel";
			this->totalCostLabel->Size = System::Drawing::Size(168, 48);
			this->totalCostLabel->TabIndex = 11;
			this->totalCostLabel->Text = L"COST: $0";
			this->totalCostLabel->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// panelsCheck
			// 
			this->panelsCheck->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelsCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20));
			this->panelsCheck->Location = System::Drawing::Point(57, 23);
			this->panelsCheck->Name = L"panelsCheck";
			this->panelsCheck->Size = System::Drawing::Size(15, 14);
			this->panelsCheck->TabIndex = 13;
			this->panelsCheck->UseVisualStyleBackColor = true;
			this->panelsCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// generatorsCheck
			// 
			this->generatorsCheck->AutoSize = true;
			this->generatorsCheck->Cursor = System::Windows::Forms::Cursors::Hand;
			this->generatorsCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20));
			this->generatorsCheck->Location = System::Drawing::Point(57, 107);
			this->generatorsCheck->Name = L"generatorsCheck";
			this->generatorsCheck->Size = System::Drawing::Size(15, 14);
			this->generatorsCheck->TabIndex = 14;
			this->generatorsCheck->UseVisualStyleBackColor = true;
			this->generatorsCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::generatorsCheck_CheckedChanged);
			// 
			// turbinesCheck
			// 
			this->turbinesCheck->AutoSize = true;
			this->turbinesCheck->Cursor = System::Windows::Forms::Cursors::Hand;
			this->turbinesCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20));
			this->turbinesCheck->Location = System::Drawing::Point(57, 222);
			this->turbinesCheck->Name = L"turbinesCheck";
			this->turbinesCheck->Size = System::Drawing::Size(15, 14);
			this->turbinesCheck->TabIndex = 15;
			this->turbinesCheck->UseVisualStyleBackColor = true;
			this->turbinesCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::turbinesCheck_CheckedChanged);
			// 
			// panelSmallCheck
			// 
			this->panelSmallCheck->AutoSize = true;
			this->panelSmallCheck->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelSmallCheck->Enabled = false;
			this->panelSmallCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->panelSmallCheck->Location = System::Drawing::Point(79, 40);
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
			this->panelLargeCheck->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panelLargeCheck->Enabled = false;
			this->panelLargeCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->panelLargeCheck->Location = System::Drawing::Point(79, 68);
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
			this->generatorSmallCheck->Cursor = System::Windows::Forms::Cursors::Hand;
			this->generatorSmallCheck->Enabled = false;
			this->generatorSmallCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->generatorSmallCheck->Location = System::Drawing::Point(77, 123);
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
			this->generatorMediumCheck->Cursor = System::Windows::Forms::Cursors::Hand;
			this->generatorMediumCheck->Enabled = false;
			this->generatorMediumCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->generatorMediumCheck->Location = System::Drawing::Point(77, 149);
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
			this->generatorLargeCheck->Cursor = System::Windows::Forms::Cursors::Hand;
			this->generatorLargeCheck->Enabled = false;
			this->generatorLargeCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->generatorLargeCheck->Location = System::Drawing::Point(77, 177);
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
			this->turbineLargeCheck->Cursor = System::Windows::Forms::Cursors::Hand;
			this->turbineLargeCheck->Enabled = false;
			this->turbineLargeCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->turbineLargeCheck->Location = System::Drawing::Point(77, 296);
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
			this->turbineMediumCheck->Cursor = System::Windows::Forms::Cursors::Hand;
			this->turbineMediumCheck->Enabled = false;
			this->turbineMediumCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->turbineMediumCheck->Location = System::Drawing::Point(77, 269);
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
			this->turbineSmallCheck->Cursor = System::Windows::Forms::Cursors::Hand;
			this->turbineSmallCheck->Enabled = false;
			this->turbineSmallCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->turbineSmallCheck->Location = System::Drawing::Point(77, 242);
			this->turbineSmallCheck->Name = L"turbineSmallCheck";
			this->turbineSmallCheck->Size = System::Drawing::Size(79, 32);
			this->turbineSmallCheck->TabIndex = 21;
			this->turbineSmallCheck->Text = L"Small";
			this->turbineSmallCheck->UseVisualStyleBackColor = true;
			this->turbineSmallCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::turbinesCheckSmall_CheckedChanged);
			// 
			// panelSmallInput
			// 
			this->panelSmallInput->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panelSmallInput->Location = System::Drawing::Point(255, 46);
			this->panelSmallInput->Name = L"panelSmallInput";
			this->panelSmallInput->ReadOnly = true;
			this->panelSmallInput->Size = System::Drawing::Size(48, 22);
			this->panelSmallInput->TabIndex = 25;
			this->panelSmallInput->TextChanged += gcnew System::EventHandler(this, &MyForm::panelSmallInput_TextChanged);
			this->panelSmallInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::panelSmallInput_KeyPress);
			// 
			// panelLargeInput
			// 
			this->panelLargeInput->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panelLargeInput->Location = System::Drawing::Point(255, 72);
			this->panelLargeInput->Name = L"panelLargeInput";
			this->panelLargeInput->ReadOnly = true;
			this->panelLargeInput->Size = System::Drawing::Size(48, 22);
			this->panelLargeInput->TabIndex = 26;
			this->panelLargeInput->TextChanged += gcnew System::EventHandler(this, &MyForm::panelLargeInput_TextChanged);
			this->panelLargeInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::panelLargeInput_KeyPress);
			// 
			// generatorSmallInput
			// 
			this->generatorSmallInput->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->generatorSmallInput->Location = System::Drawing::Point(255, 127);
			this->generatorSmallInput->Name = L"generatorSmallInput";
			this->generatorSmallInput->ReadOnly = true;
			this->generatorSmallInput->Size = System::Drawing::Size(48, 22);
			this->generatorSmallInput->TabIndex = 27;
			this->generatorSmallInput->TextChanged += gcnew System::EventHandler(this, &MyForm::generatorSmallInput_TextChanged);
			this->generatorSmallInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::generatorSmallInput_KeyPress);
			// 
			// generatorMediumInput
			// 
			this->generatorMediumInput->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->generatorMediumInput->Location = System::Drawing::Point(255, 157);
			this->generatorMediumInput->Name = L"generatorMediumInput";
			this->generatorMediumInput->ReadOnly = true;
			this->generatorMediumInput->Size = System::Drawing::Size(48, 22);
			this->generatorMediumInput->TabIndex = 28;
			this->generatorMediumInput->TextChanged += gcnew System::EventHandler(this, &MyForm::generatorMediumInput_TextChanged);
			this->generatorMediumInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::generatorMediumInput_KeyPress);
			// 
			// generatorLargeInput
			// 
			this->generatorLargeInput->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->generatorLargeInput->Location = System::Drawing::Point(255, 185);
			this->generatorLargeInput->Name = L"generatorLargeInput";
			this->generatorLargeInput->ReadOnly = true;
			this->generatorLargeInput->Size = System::Drawing::Size(48, 22);
			this->generatorLargeInput->TabIndex = 29;
			this->generatorLargeInput->TextChanged += gcnew System::EventHandler(this, &MyForm::generatorLargeInput_TextChanged);
			this->generatorLargeInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::generatorLargeInput_KeyPress);
			// 
			// turbineLargeInput
			// 
			this->turbineLargeInput->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->turbineLargeInput->Location = System::Drawing::Point(255, 307);
			this->turbineLargeInput->Name = L"turbineLargeInput";
			this->turbineLargeInput->ReadOnly = true;
			this->turbineLargeInput->Size = System::Drawing::Size(48, 22);
			this->turbineLargeInput->TabIndex = 32;
			this->turbineLargeInput->TextChanged += gcnew System::EventHandler(this, &MyForm::turbineLargeInput_TextChanged);
			this->turbineLargeInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::turbineLargeInput_KeyPress);
			// 
			// turbineMediumInput
			// 
			this->turbineMediumInput->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->turbineMediumInput->Location = System::Drawing::Point(255, 279);
			this->turbineMediumInput->Name = L"turbineMediumInput";
			this->turbineMediumInput->ReadOnly = true;
			this->turbineMediumInput->Size = System::Drawing::Size(48, 22);
			this->turbineMediumInput->TabIndex = 31;
			this->turbineMediumInput->TextChanged += gcnew System::EventHandler(this, &MyForm::turbineMediumInput_TextChanged);
			this->turbineMediumInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::turbineMediumInput_KeyPress);
			// 
			// turbineSmallInput
			// 
			this->turbineSmallInput->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->turbineSmallInput->Location = System::Drawing::Point(255, 251);
			this->turbineSmallInput->Name = L"turbineSmallInput";
			this->turbineSmallInput->ReadOnly = true;
			this->turbineSmallInput->Size = System::Drawing::Size(48, 22);
			this->turbineSmallInput->TabIndex = 30;
			this->turbineSmallInput->TextChanged += gcnew System::EventHandler(this, &MyForm::turbineSmallInput_TextChanged);
			this->turbineSmallInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::turbineSmallInput_KeyPress);
			// 
			// totalPanelCost
			// 
			this->totalPanelCost->AutoSize = true;
			this->totalPanelCost->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalPanelCost->Location = System::Drawing::Point(397, 30);
			this->totalPanelCost->Name = L"totalPanelCost";
			this->totalPanelCost->Size = System::Drawing::Size(94, 28);
			this->totalPanelCost->TabIndex = 33;
			this->totalPanelCost->Text = L"COST: $0";
			// 
			// totalGeneratorCost
			// 
			this->totalGeneratorCost->AutoSize = true;
			this->totalGeneratorCost->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalGeneratorCost->Location = System::Drawing::Point(394, 115);
			this->totalGeneratorCost->Name = L"totalGeneratorCost";
			this->totalGeneratorCost->Size = System::Drawing::Size(94, 28);
			this->totalGeneratorCost->TabIndex = 34;
			this->totalGeneratorCost->Text = L"COST: $0";
			//this->totalGeneratorCost->Click += gcnew System::EventHandler(this, &MyForm::totalGeneratorCost_Click);
			// 
			// totalTurbineCost
			// 
			this->totalTurbineCost->AutoSize = true;
			this->totalTurbineCost->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalTurbineCost->Location = System::Drawing::Point(397, 242);
			this->totalTurbineCost->Name = L"totalTurbineCost";
			this->totalTurbineCost->Size = System::Drawing::Size(94, 28);
			this->totalTurbineCost->TabIndex = 35;
			this->totalTurbineCost->Text = L"COST: $0";
			// 
			// totalPanelEnergy
			// 
			this->totalPanelEnergy->AutoSize = true;
			this->totalPanelEnergy->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->totalPanelEnergy->Location = System::Drawing::Point(395, 53);
			this->totalPanelEnergy->Name = L"totalPanelEnergy";
			this->totalPanelEnergy->Size = System::Drawing::Size(122, 21);
			this->totalPanelEnergy->TabIndex = 36;
			this->totalPanelEnergy->Text = L"KWH per Year: 0";
			//this->totalPanelEnergy->Click += gcnew System::EventHandler(this, &MyForm::totalPanelEnergy_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->label4->Location = System::Drawing::Point(49, 127);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(335, 28);
			this->label4->TabIndex = 37;
			this->label4->Text = L"Energy generated on personal grid: 0";
			//this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// totalGeneratorEnergy
			// 
			this->totalGeneratorEnergy->AutoSize = true;
			this->totalGeneratorEnergy->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->totalGeneratorEnergy->Location = System::Drawing::Point(398, 147);
			this->totalGeneratorEnergy->Name = L"totalGeneratorEnergy";
			this->totalGeneratorEnergy->Size = System::Drawing::Size(122, 21);
			this->totalGeneratorEnergy->TabIndex = 38;
			this->totalGeneratorEnergy->Text = L"KWH per Year: 0";
			// 
			// totalTurbineEnergy
			// 
			this->totalTurbineEnergy->AutoSize = true;
			this->totalTurbineEnergy->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->totalTurbineEnergy->Location = System::Drawing::Point(398, 265);
			this->totalTurbineEnergy->Name = L"totalTurbineEnergy";
			this->totalTurbineEnergy->Size = System::Drawing::Size(122, 21);
			this->totalTurbineEnergy->TabIndex = 39;
			this->totalTurbineEnergy->Text = L"KWH per Year: 0";
			// 
			// costBatteriesLabel
			// 
			this->costBatteriesLabel->AutoSize = true;
			this->costBatteriesLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->costBatteriesLabel->Location = System::Drawing::Point(394, 336);
			this->costBatteriesLabel->Name = L"costBatteriesLabel";
			this->costBatteriesLabel->Size = System::Drawing::Size(94, 28);
			this->costBatteriesLabel->TabIndex = 42;
			this->costBatteriesLabel->Text = L"COST: $0";
			// 
			// batteryInput
			// 
			this->batteryInput->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->batteryInput->Location = System::Drawing::Point(255, 349);
			this->batteryInput->Name = L"batteryInput";
			this->batteryInput->ReadOnly = true;
			this->batteryInput->Size = System::Drawing::Size(48, 22);
			this->batteryInput->TabIndex = 41;
			this->batteryInput->TextChanged += gcnew System::EventHandler(this, &MyForm::batteryInput_TextChanged);
			this->batteryInput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// batteryCheck
			// 
			this->batteryCheck->AutoSize = true;
			this->batteryCheck->Cursor = System::Windows::Forms::Cursors::Hand;
			this->batteryCheck->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->batteryCheck->Location = System::Drawing::Point(57, 336);
			this->batteryCheck->Name = L"batteryCheck";
			this->batteryCheck->Size = System::Drawing::Size(150, 41);
			this->batteryCheck->TabIndex = 40;
			this->batteryCheck->Text = L" Batteries";
			this->batteryCheck->UseVisualStyleBackColor = true;
			this->batteryCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::batteryCheckbox_CheckedChanged);
			// 
			// statisticsLabel
			// 
			this->statisticsLabel->BackColor = System::Drawing::Color::Transparent;
			this->statisticsLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statisticsLabel->ForeColor = System::Drawing::SystemColors::Info;
			this->statisticsLabel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"statisticsLabel.Image")));
			this->statisticsLabel->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->statisticsLabel->Location = System::Drawing::Point(627, 73);
			this->statisticsLabel->Name = L"statisticsLabel";
			this->statisticsLabel->Size = System::Drawing::Size(278, 49);
			this->statisticsLabel->TabIndex = 43;
			this->statisticsLabel->Text = L" Satistics";
			//this->statisticsLabel->Click += gcnew System::EventHandler(this, &MyForm::statisticsLabel_Click);
			// 
			// componentsPanel
			// 
			this->componentsPanel->BackColor = System::Drawing::Color::Transparent;
			this->componentsPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"componentsPanel.BackgroundImage")));
			this->componentsPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->componentsPanel->Controls->Add(this->pictureBox5);
			this->componentsPanel->Controls->Add(this->pictureBox3);
			this->componentsPanel->Controls->Add(this->pictureBox2);
			this->componentsPanel->Controls->Add(this->pictureBox4);
			this->componentsPanel->Controls->Add(this->batteryCapacityLabel);
			this->componentsPanel->Controls->Add(this->label2);
			this->componentsPanel->Controls->Add(this->turbinesCheckLabel);
			this->componentsPanel->Controls->Add(this->generatorsCheckLabel);
			this->componentsPanel->Controls->Add(this->solarPanelCheckLabel);
			this->componentsPanel->Controls->Add(this->costBatteriesLabel);
			this->componentsPanel->Controls->Add(this->batteryInput);
			this->componentsPanel->Controls->Add(this->batteryCheck);
			this->componentsPanel->Controls->Add(this->totalTurbineEnergy);
			this->componentsPanel->Controls->Add(this->totalGeneratorEnergy);
			this->componentsPanel->Controls->Add(this->totalPanelEnergy);
			this->componentsPanel->Controls->Add(this->totalTurbineCost);
			this->componentsPanel->Controls->Add(this->totalGeneratorCost);
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
			this->componentsPanel->Location = System::Drawing::Point(8, 111);
			this->componentsPanel->Name = L"componentsPanel";
			this->componentsPanel->Size = System::Drawing::Size(599, 386);
			this->componentsPanel->TabIndex = 44;
			//this->componentsPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::componentsPanel_Paint);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(7, 331);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(44, 46);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 57;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(3, 111);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(55, 54);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 55;
			this->pictureBox3->TabStop = false;
			//this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(8, 30);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(47, 49);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 54;
			this->pictureBox2->TabStop = false;
			//this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(7, 219);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(48, 50);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 56;
			this->pictureBox4->TabStop = false;
			// 
			// batteryCapacityLabel
			// 
			this->batteryCapacityLabel->AutoSize = true;
			this->batteryCapacityLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->batteryCapacityLabel->Location = System::Drawing::Point(395, 361);
			this->batteryCapacityLabel->Name = L"batteryCapacityLabel";
			this->batteryCapacityLabel->Size = System::Drawing::Size(126, 21);
			this->batteryCapacityLabel->TabIndex = 47;
			this->batteryCapacityLabel->Text = L"Storage capacity:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(255, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 13);
			this->label2->TabIndex = 46;
			this->label2->Text = L"Amount";
			// 
			// turbinesCheckLabel
			// 
			this->turbinesCheckLabel->AutoSize = true;
			this->turbinesCheckLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->turbinesCheckLabel->Location = System::Drawing::Point(70, 209);
			this->turbinesCheckLabel->Name = L"turbinesCheckLabel";
			this->turbinesCheckLabel->Size = System::Drawing::Size(121, 37);
			this->turbinesCheckLabel->TabIndex = 45;
			this->turbinesCheckLabel->Text = L"Turbines";
			// 
			// generatorsCheckLabel
			// 
			this->generatorsCheckLabel->AutoSize = true;
			this->generatorsCheckLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->generatorsCheckLabel->Location = System::Drawing::Point(70, 95);
			this->generatorsCheckLabel->Name = L"generatorsCheckLabel";
			this->generatorsCheckLabel->Size = System::Drawing::Size(152, 37);
			this->generatorsCheckLabel->TabIndex = 44;
			this->generatorsCheckLabel->Text = L"Generators";
			// 
			// solarPanelCheckLabel
			// 
			this->solarPanelCheckLabel->AutoSize = true;
			this->solarPanelCheckLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->solarPanelCheckLabel->Location = System::Drawing::Point(72, 12);
			this->solarPanelCheckLabel->Name = L"solarPanelCheckLabel";
			this->solarPanelCheckLabel->Size = System::Drawing::Size(164, 37);
			this->solarPanelCheckLabel->TabIndex = 43;
			this->solarPanelCheckLabel->Text = L"Solar Panels";
			//this->solarPanelCheckLabel->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_1);
			// 
			// panelStatsTitle
			// 
			this->panelStatsTitle->AutoSize = true;
			this->panelStatsTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panelStatsTitle->Location = System::Drawing::Point(3, 10);
			this->panelStatsTitle->Name = L"panelStatsTitle";
			this->panelStatsTitle->Size = System::Drawing::Size(60, 21);
			this->panelStatsTitle->TabIndex = 45;
			this->panelStatsTitle->Text = L"Panels:";
			// 
			// generatorStatsTitle
			// 
			this->generatorStatsTitle->AutoSize = true;
			this->generatorStatsTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->generatorStatsTitle->Location = System::Drawing::Point(3, 84);
			this->generatorStatsTitle->Name = L"generatorStatsTitle";
			this->generatorStatsTitle->Size = System::Drawing::Size(95, 21);
			this->generatorStatsTitle->TabIndex = 46;
			this->generatorStatsTitle->Text = L"Generators:";
			// 
			// panelSurfaceAreaLabel
			// 
			this->panelSurfaceAreaLabel->AutoSize = true;
			this->panelSurfaceAreaLabel->Location = System::Drawing::Point(25, 35);
			this->panelSurfaceAreaLabel->Name = L"panelSurfaceAreaLabel";
			this->panelSurfaceAreaLabel->Size = System::Drawing::Size(133, 13);
			this->panelSurfaceAreaLabel->TabIndex = 47;
			this->panelSurfaceAreaLabel->Text = L"Total surface area (ft^2): ";
			// 
			// panelWeightLabel
			// 
			this->panelWeightLabel->AutoSize = true;
			this->panelWeightLabel->Location = System::Drawing::Point(25, 50);
			this->panelWeightLabel->Name = L"panelWeightLabel";
			this->panelWeightLabel->Size = System::Drawing::Size(97, 13);
			this->panelWeightLabel->TabIndex = 48;
			this->panelWeightLabel->Text = L"Total weight (lbs):";
			// 
			// fuelConsumptionLabel
			// 
			this->fuelConsumptionLabel->AutoSize = true;
			this->fuelConsumptionLabel->Location = System::Drawing::Point(25, 107);
			this->fuelConsumptionLabel->Name = L"fuelConsumptionLabel";
			this->fuelConsumptionLabel->Size = System::Drawing::Size(146, 13);
			this->fuelConsumptionLabel->TabIndex = 49;
			this->fuelConsumptionLabel->Text = L"Yearly fuel consumption (L):";
			// 
			// yearlyFuelPriceLabel
			// 
			this->yearlyFuelPriceLabel->AutoSize = true;
			this->yearlyFuelPriceLabel->Location = System::Drawing::Point(25, 122);
			this->yearlyFuelPriceLabel->Name = L"yearlyFuelPriceLabel";
			this->yearlyFuelPriceLabel->Size = System::Drawing::Size(103, 13);
			this->yearlyFuelPriceLabel->TabIndex = 50;
			this->yearlyFuelPriceLabel->Text = L"Yearly fuel price (L):";
			// 
			// panelYearlySavingsLabel
			// 
			this->panelYearlySavingsLabel->AutoSize = true;
			this->panelYearlySavingsLabel->Location = System::Drawing::Point(25, 64);
			this->panelYearlySavingsLabel->Name = L"panelYearlySavingsLabel";
			this->panelYearlySavingsLabel->Size = System::Drawing::Size(97, 13);
			this->panelYearlySavingsLabel->TabIndex = 51;
			this->panelYearlySavingsLabel->Text = L"Yearly savings ($): ";
			// 
			// statisticsPanel
			// 
			this->statisticsPanel->BackColor = System::Drawing::Color::Transparent;
			this->statisticsPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"statisticsPanel.BackgroundImage")));
			this->statisticsPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->statisticsPanel->Controls->Add(this->panelYearlySavingsLabel);
			this->statisticsPanel->Controls->Add(this->yearlyFuelPriceLabel);
			this->statisticsPanel->Controls->Add(this->fuelConsumptionLabel);
			this->statisticsPanel->Controls->Add(this->panelWeightLabel);
			this->statisticsPanel->Controls->Add(this->panelSurfaceAreaLabel);
			this->statisticsPanel->Controls->Add(this->generatorStatsTitle);
			this->statisticsPanel->Controls->Add(this->panelStatsTitle);
			this->statisticsPanel->Location = System::Drawing::Point(627, 113);
			this->statisticsPanel->Name = L"statisticsPanel";
			this->statisticsPanel->Size = System::Drawing::Size(278, 162);
			this->statisticsPanel->TabIndex = 52;
			//this->statisticsPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::statisticsPanel_Paint);
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
			//this->bindingSource1->CurrentChanged += gcnew System::EventHandler(this, &MyForm::bindingSource1_CurrentChanged);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->designTab);
			this->tabControl1->Controls->Add(this->printTab);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->tabControl1->Location = System::Drawing::Point(10, 82);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1381, 535);
			this->tabControl1->TabIndex = 53;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl1_SelectedIndexChanged);
			// 
			// designTab
			// 
			this->designTab->BackColor = System::Drawing::SystemColors::Control;
			this->designTab->Controls->Add(this->pictureBox8);
			this->designTab->Controls->Add(this->totalPowerInput);
			this->designTab->Controls->Add(this->statisticsLabel);
			this->designTab->Controls->Add(this->label1);
			this->designTab->Controls->Add(this->componentsLabel);
			this->designTab->Controls->Add(this->panel3);
			this->designTab->Controls->Add(this->label6);
			this->designTab->Controls->Add(this->componentsPanel);
			this->designTab->Controls->Add(this->statisticsPanel);
			this->designTab->Controls->Add(this->chart1);
			this->designTab->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->designTab->Location = System::Drawing::Point(4, 26);
			this->designTab->Name = L"designTab";
			this->designTab->Padding = System::Windows::Forms::Padding(3);
			this->designTab->Size = System::Drawing::Size(1373, 505);
			this->designTab->TabIndex = 0;
			this->designTab->Text = L"Microgrid Designer";
			//this->designTab->Click += gcnew System::EventHandler(this, &MyForm::designTab_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label1->Location = System::Drawing::Point(22, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(293, 34);
			this->label1->TabIndex = 58;
			this->label1->Text = L"  Enter your yearly power usage (KWH)";
			//this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->ratioBar);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->pictureBox7);
			this->panel3->Controls->Add(this->pictureBox6);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->totalCostLabel);
			this->panel3->Location = System::Drawing::Point(627, 282);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(692, 215);
			this->panel3->TabIndex = 57;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->label7->Location = System::Drawing::Point(49, 159);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(372, 25);
			this->label7->TabIndex = 56;
			this->label7->Text = L"Total energy from renewables on Microgrid: 0";
			//this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Info;
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
			this->label6->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label6->Location = System::Drawing::Point(922, 73);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(397, 49);
			this->label6->TabIndex = 55;
			this->label6->Text = L" Sustainability";
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::Transparent;
			this->chart1->BackImage = L"C:\\Users\\range\\source\\repos\\MiniGrid\\images\\bg_Sustain.png";
			this->chart1->BackImageWrapMode = System::Windows::Forms::DataVisualization::Charting::ChartImageWrapMode::Scaled;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(921, 116);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			this->chart1->PaletteCustomColors = gcnew cli::array< System::Drawing::Color >(2) { System::Drawing::Color::YellowGreen, System::Drawing::Color::Gray };
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Bar;
			series1->Legend = L"Legend1";
			series1->Name = L"Clean Energy";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Bar;
			series2->Legend = L"Legend1";
			series2->Name = L"Other";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(399, 160);
			this->chart1->TabIndex = 53;
			this->chart1->Text = L"sustainabilityChart";
			//this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// printTab
			// 
			this->printTab->BackColor = System::Drawing::SystemColors::Control;
			this->printTab->Controls->Add(this->exportButton);
			this->printTab->Controls->Add(this->panel2);
			this->printTab->Controls->Add(this->panel1);
			this->printTab->Location = System::Drawing::Point(4, 26);
			this->printTab->Name = L"printTab";
			this->printTab->Padding = System::Windows::Forms::Padding(3);
			this->printTab->Size = System::Drawing::Size(1373, 505);
			this->printTab->TabIndex = 1;
			this->printTab->Text = L"Export";
			//this->printTab->Click += gcnew System::EventHandler(this, &MyForm::printTab_Click);
			// 
			// exportButton
			// 
			this->exportButton->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->exportButton->Location = System::Drawing::Point(1156, 452);
			this->exportButton->Name = L"exportButton";
			this->exportButton->Size = System::Drawing::Size(183, 47);
			this->exportButton->TabIndex = 10;
			this->exportButton->Text = L"Export";
			this->exportButton->UseVisualStyleBackColor = false;
			//this->exportButton->Click += gcnew System::EventHandler(this, &MyForm::exportButton_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->statisticsGridView);
			this->panel2->Location = System::Drawing::Point(706, 22);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(633, 427);
			this->panel2->TabIndex = 9;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::Info;
			this->label8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label8.Image")));
			this->label8->Location = System::Drawing::Point(12, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(596, 46);
			this->label8->TabIndex = 7;
			this->label8->Text = L" Satistics ";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			//this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// statisticsGridView
			// 
			this->statisticsGridView->AllowUserToResizeColumns = false;
			this->statisticsGridView->AllowUserToResizeRows = false;
			this->statisticsGridView->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->statisticsGridView->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->statisticsGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->statisticsGridView->Location = System::Drawing::Point(12, 45);
			this->statisticsGridView->Name = L"statisticsGridView";
			this->statisticsGridView->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->statisticsGridView->Size = System::Drawing::Size(596, 379);
			this->statisticsGridView->TabIndex = 8;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->componentsTableLabel);
			this->panel1->Controls->Add(this->dataGridView2);
			this->panel1->Location = System::Drawing::Point(65, 6);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(605, 456);
			this->panel1->TabIndex = 7;
			// 
			// componentsTableLabel
			// 
			this->componentsTableLabel->BackColor = System::Drawing::Color::Transparent;
			this->componentsTableLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->componentsTableLabel->ForeColor = System::Drawing::SystemColors::Info;
			this->componentsTableLabel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"componentsTableLabel.Image")));
			this->componentsTableLabel->Location = System::Drawing::Point(2, 16);
			this->componentsTableLabel->Name = L"componentsTableLabel";
			this->componentsTableLabel->Size = System::Drawing::Size(597, 46);
			this->componentsTableLabel->TabIndex = 6;
			this->componentsTableLabel->Text = L" Components";
			this->componentsTableLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			//this->componentsTableLabel->Click += gcnew System::EventHandler(this, &MyForm::componentsTableLabel_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(2, 62);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->Size = System::Drawing::Size(597, 378);
			this->dataGridView2->TabIndex = 1;
			//this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			// 
			// dataSet2
			// 
			this->dataSet2->DataSetName = L"NewDataSet";
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(26, 160);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(24, 24);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 58;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(23, 127);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(29, 30);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 59;
			this->pictureBox7->TabStop = false;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(21, 67);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(539, 40);
			this->label5->TabIndex = 54;
			this->label5->Text = L"Annual energy production vs Consumption";
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(8, 12);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(24, 24);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 60;
			this->pictureBox8->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->ClientSize = System::Drawing::Size(1403, 621);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"MiniGrid";
			//this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->componentsPanel->ResumeLayout(false);
			this->componentsPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->statisticsPanel->ResumeLayout(false);
			this->statisticsPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->designTab->ResumeLayout(false);
			this->designTab->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->printTab->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->statisticsGridView))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		// Function to update the sustainability Chart
		void updateChart() {
			chart1->Visible = true;
			cleanEnergyRatio = (((totalEnergies[0] * getState(panelSelected)) + (totalEnergies[2] * getState(turbineSelected))) / powerGenerated) * 100.0;
			otherEnergyRatio = 100.0 - cleanEnergyRatio;
			chart1->Series["Clean Energy"]->Points->Clear();
			chart1->Series["Other"]->Points->Clear();
			chart1->Series["Clean Energy"]->Points->AddXY("Energy Generated", cleanEnergyRatio);
			chart1->Series["Other"]->Points->AddXY("Energy Consumed", otherEnergyRatio);
		}

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
			label7->Text = "Total energy from renewables on Microgrid: " + ((totalEnergies[0] * getState(panelSelected)) + (totalEnergies[2] * getState(turbineSelected))) + "KWH";
			if (ceil(powerRatio * 100.0) / 100.0 * 100.0 < 100.0) {
				label4->Text = "Energy generated on personal grid: " + ceil(powerRatio * 100.0) / 100.0 * 100.0 + "%";
			}
			else {
				label4->Text = "Energy generated on personal grid: 100%";
			}
			
			updateChart();
		}

		// Function that intakes a boolean and returns 0 for false and 1 for true: used as a 0 or 1 multiplier when using checkboxes to determine if items are selected
		// e.g. if panels arent selected, then we can retain the price in the appropiate variable but not add it to the total cost
	private:	unsigned int getState(bool check) {
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
	private:	void calculateCosts(int type, int size) {
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
				}
			case 3:
			{
				costs[3][0] = numberOfComponents[3][0] * batteryPrice;
				totalCosts[3] = costs[3][0];
				float batteryDisplayCost = totalCosts[3] * getState(batterySelected);
				costBatteriesLabel->Text = "COST: $" + batteryDisplayCost;
				break;
			}
			}
			float totalCost = (totalCosts[0] * getState(panelSelected)) + (totalCosts[1] * getState(generatorSelected)) + (totalCosts[2] * getState(turbineSelected)) + (totalCosts[3] * getState(batterySelected));
			totalCostLabel->Text = "COST: $" + totalCost;
		}

		// Function that calculates the total energies of the panels, generators, and turbines based on their numOfComponents and costs
	private: void calculateEnergies(int type, int size) {
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
				case 3:
					energies[3][0] = numberOfComponents[3][0] * batteryEnergy;
					totalEnergies[3] = energies[3][0];
					batteryCapacityLabel->Text = "Total capacity: " + totalEnergies[3] + " KWH";
					break;
			}
		}
		// Function that calculates the total yearly fuel usage of the selected generators
		private: void calculateFuel() {
			fuelGenerators = (numberOfComponents[1][0] * generatorSmall->fuelPerHour * 8760 * getState(generatorSmallSelected)) + (numberOfComponents[1][1] * generatorMedium->fuelPerHour * 8760 * getState(generatorMediumSelected)) + (numberOfComponents[1][2] * generatorLarge->fuelPerHour * 8760) * getState(generatorMediumSelected) / 4;
			fuelConsumptionLabel->Text = "Yearly fuel consumption (G): " + fuelGenerators;
			fuelGeneratorPrice = fuelGenerators * 1.6;
			yearlyFuelPriceLabel->Text = "Yearly fuel price ($): " + fuelGeneratorPrice;
		}

		// Function that calculates the total surface area of the selected solar panels
		private: void calculateSurfaceArea() {
			areaSolarPanels = numberOfComponents[0][0] * panelSmall->surfaceArea + numberOfComponents[0][1] * panelLarge->surfaceArea;
			panelSurfaceAreaLabel->Text = "Total surface area (ft^2): " + areaSolarPanels;
		}

		// Function that displays the statistics panel if a component is selected
		// TODO: Add checks to ensure that there is at least one of the appropriate component selected before displaying the statistics
			// Might be annoying for the user if we use numOfComponents, so we could just use the nested checkboxes
		private: void displayStats() {
			// If any components are selected via checkboxes, show statistics panel
			//statisticsPanel->Visible = panelSelected || generatorSelected; //|| turbineSelected;
			//statisticsLabel->Visible = panelSelected || generatorSelected; //|| turbineSelected;
			
			
			/*panelStatsTitle->Visible = panelSelected;
			panelSurfaceAreaLabel->Visible = panelSelected;
			panelWeightLabel->Visible = panelSelected;
			panelYearlySavingsLabel->Visible = panelSelected;

			generatorStatsTitle->Visible = generatorSelected;
			fuelConsumptionLabel->Visible = generatorSelected;
			yearlyFuelPriceLabel->Visible = generatorSelected;*/
		}

		// Function that calculates the total weight of the selected solar panels
		private: void calculateWeight() {
			weightSolarPanels = numberOfComponents[0][0] * panelSmall->weight + numberOfComponents[0][1] * panelLarge->weight;
			panelWeightLabel->Text = "Total weight (lbs): " + weightSolarPanels;
		}

		// Function that calculates the total yearly savings of the selected solar panels
		private: void calculatePanelSavings() {
			// Something isnt working right here... fix it
			savingsSolarPanels = totalEnergies[0] * 0.13;
			float savingsSolarPanelsDisplay = savingsSolarPanels / 100.0;
			panelYearlySavingsLabel->Text = "Yearly savings ($): " + savingsSolarPanelsDisplay;
		}

		// Function that updates the panel details
		private: void calculatePanelDetails() {
			calculateSurfaceArea();
			calculateWeight();
			calculatePanelSavings();
		}
	
		// Function that handles the cases when input is typed into the component quanity textboxes 
		private: void  updateInput(System::Object^ sender, System::EventArgs^ e, int type, int size) {
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
		private: void updateCheckBox(int type, int size) {
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
			case 3:
			{
				if (batterySelected) {
					batteryCheck->Enabled = true;
					batteryInput->ReadOnly = false;
				}
				else {
					batteryCheck->Checked = false;
					batteryInput->ReadOnly = true;
				}
			}
	}
	calculateCosts(type, size);
	calculateEnergies(type, size);
	updateRatioAndBar();
	displayStats();
}

		// Function that updates the DataGridView with the current values of the components
		private: void updateGridView() {
			System::Data::DataTable^ componentsTable = gcnew System::Data::DataTable();
			componentsTable->Columns->Add("Component Name");
			componentsTable->Columns->Add("Number of Components");
			componentsTable->Columns->Add("Cost per unit");
			componentsTable->Columns->Add("Total Cost");
			componentsTable->Columns->Add("Yearly Energy Production");
			componentsTable->Columns->Add("Max Energy Storage");
			
			// Fill the tables with data
			// For each type of component
            for (int i = 0; i < 3; i++) {
				// For each size of component
				for (int j = 0; j < 3; j++) {
					// If the component is selected and the quantity is greater than 0madd it to the table
					if (numberOfComponents[i][j] > 0 && componentsSelectedMemory[i][j]) {
						if ((i == 0 && panelSelected) || (i == 1 && generatorSelected) || (i == 2 && turbineSelected) || (i == 3 && batterySelected)) {
							DataRow^ row = componentsTable->NewRow();
							row["Component Name"] = gcnew String(nameOfComponents[i][j].c_str());
							row["Number of Components"] = numberOfComponents[i][j];
							row["Cost per unit"] = costs[i][j];
							// If the current component is a battery, display the max energy storage instead of the yearly energy production
							if (i == 3 && batterySelected) 
								row["Max Energy Storage"] = energies[i][j] * numberOfComponents[i][j];
							else
								row["Yearly Energy Production"] = energies[i][j];
							row["Total Cost"] = costs[i][j] * numberOfComponents[i][j];
							componentsTable->Rows->Add(row);
						}
					}
				 }
			}
			// Bind the DataTable to the DataGridView
			dataGridView2->DataSource = componentsTable;

			System::Data::DataTable^ statisticsTable = gcnew System::Data::DataTable();
			// Use one column for the statistic title and one for the value
			statisticsTable->Columns->Add("Statistic");
			statisticsTable->Columns->Add("Value");

			string titles[] = {
					"Energy generated on personal grid (KWH)",
					"Price per KWH Generated ($)",
					"Total energy from renewables on Microgrid (KWH)",
					"Percentage of energy generated that is clean (%)",
					"Yearly fuel consumption (Gallons)",
					"Yearly fuel price ($)",
					"Required Surface area for solar panels (ft^2)"
			};

			pricePerKWH = ((totalCosts[0] * getState(panelSelected)) + (totalCosts[1] * getState(generatorSelected)) + (totalCosts[2] * getState(turbineSelected))) / ((totalEnergies[0] * getState(panelSelected)) + (totalEnergies[1] * getState(generatorSelected)) + (totalEnergies[2] * getState(turbineSelected)));
			//float displayPricePerKWH = ceil(pricePerKWH * 100) / 100;
			float displayPricePerKWH = round(pricePerKWH * 100.0f) / 100.0f;
			float energiesTotal = (totalEnergies[0] * getState(panelSelected)) + (totalEnergies[1] * getState(generatorSelected)) + (totalEnergies[2] * getState(turbineSelected));
			float displayCleanEnergyRatio = ceil(cleanEnergyRatio * 100) / 100;
			double values[] = {
				energiesTotal,
				displayPricePerKWH,
				(totalEnergies[0] * getState(panelSelected)) + (totalEnergies[2] * getState(turbineSelected)),
				displayCleanEnergyRatio,
				fuelGenerators,
				fuelGeneratorPrice,
				areaSolarPanels
					};
			// For every value in the titles array, add a row to the table with the corresponding label and value
			for (int i = 0; i < 7; i++) {

				DataRow^ row2 = statisticsTable->NewRow();

				row2["Statistic"] = gcnew String(titles[i].c_str());
				row2["Value"] = values[i];
				statisticsTable->Rows->Add(row2);
			}

			
			statisticsGridView->DataSource = statisticsTable;
			statisticsGridView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
        }

	// Function that will export a single datagridview table
	void WriteDataGridViewToCSV(DataGridView^ dgv, System::IO::StreamWriter^ file) {
		if (dgv == nullptr) return;

		// Write headers
		for (int col = 0; col < dgv->Columns->Count; col++) {
			file->Write(dgv->Columns[col]->HeaderText);
			if (col < dgv->Columns->Count - 1) file->Write(",");
		}
		file->WriteLine();

		// Write data
		for (int row = 0; row < dgv->Rows->Count; row++) {
			for (int col = 0; col < dgv->Columns->Count; col++) {
				if (dgv->Rows[row]->Cells[col]->Value != nullptr)
					file->Write(dgv->Rows[row]->Cells[col]->Value->ToString());
				if (col < dgv->Columns->Count - 1) file->Write(",");
			}
			file->WriteLine();
		}

		file->WriteLine();  // Add empty line between tables
	}

	// Function to export both of the tables (components and statistics) to the same csv file
	void ExportTwoDataGridViewsToCSV(DataGridView^ dgv1, DataGridView^ dgv2) {
		// Open Save File Dialog
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter = "CSV Files|*.csv";
		saveFileDialog1->Title = "Save CSV File";
		saveFileDialog1->ShowDialog();

		if (saveFileDialog1->FileName == "") return;  // User canceled

		System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter(saveFileDialog1->FileName);

		// Write both tables to CSV
		WriteDataGridViewToCSV(dgv1, file);
		WriteDataGridViewToCSV(dgv2, file);

		file->Close();
		MessageBox::Show("Export Successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
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

	private: System::Void totalPowerInput_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!System::Char::IsDigit(e->KeyChar) && e->KeyChar != (char)System::Windows::Forms::Keys::Back) {
			e->Handled = true;
		}
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

#pragma region input textboxes that call the updateInput function
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

	private: System::Void batteryInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		updateInput(sender, e, 3, 0);
	}
#pragma endregion

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
	batterySelected = batteryCheck->Checked;
	batteryInput->ReadOnly = !batterySelected;
	updateCheckBox(3, 0);
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


