#pragma once
#include "qParticle.h"
#include <vector>

namespace chargedfriction {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Window
	/// </summary>
	public ref class Window : public System::Windows::Forms::Form
	{
	public:
		Window(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Window()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::Button^  start_button;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  stop_button;
	private: System::Windows::Forms::NumericUpDown^  val_charge;



	private: System::Windows::Forms::NumericUpDown^  velocity_x;
	private: System::Windows::Forms::NumericUpDown^  velocity_y;
	private: System::Windows::Forms::NumericUpDown^  velocity_z;



	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  initial_x;
	private: System::Windows::Forms::NumericUpDown^  initial_y;
	private: System::Windows::Forms::NumericUpDown^  initial_z;



	private: System::Windows::Forms::NumericUpDown^  val_E;
	private: System::Windows::Forms::NumericUpDown^  val_B;
	private: System::Windows::Forms::NumericUpDown^  val_angle;



	private: System::Windows::Forms::NumericUpDown^  x_max;
	private: System::Windows::Forms::NumericUpDown^  y_max;
	private: System::Windows::Forms::NumericUpDown^  z_max;



	private: System::Windows::Forms::NumericUpDown^  x_min;
	private: System::Windows::Forms::NumericUpDown^  y_min;
	private: System::Windows::Forms::NumericUpDown^  z_min;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;




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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^  series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->start_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->stop_button = (gcnew System::Windows::Forms::Button());
			this->val_charge = (gcnew System::Windows::Forms::NumericUpDown());
			this->velocity_x = (gcnew System::Windows::Forms::NumericUpDown());
			this->velocity_y = (gcnew System::Windows::Forms::NumericUpDown());
			this->velocity_z = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->initial_x = (gcnew System::Windows::Forms::NumericUpDown());
			this->initial_y = (gcnew System::Windows::Forms::NumericUpDown());
			this->initial_z = (gcnew System::Windows::Forms::NumericUpDown());
			this->val_E = (gcnew System::Windows::Forms::NumericUpDown());
			this->val_B = (gcnew System::Windows::Forms::NumericUpDown());
			this->val_angle = (gcnew System::Windows::Forms::NumericUpDown());
			this->x_max = (gcnew System::Windows::Forms::NumericUpDown());
			this->y_max = (gcnew System::Windows::Forms::NumericUpDown());
			this->z_max = (gcnew System::Windows::Forms::NumericUpDown());
			this->x_min = (gcnew System::Windows::Forms::NumericUpDown());
			this->y_min = (gcnew System::Windows::Forms::NumericUpDown());
			this->z_min = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->val_charge))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->velocity_x))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->velocity_y))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->velocity_z))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->initial_x))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->initial_y))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->initial_z))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->val_E))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->val_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->val_angle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->x_max))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->y_max))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->z_max))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->x_min))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->y_min))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->z_min))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::SystemColors::Control;
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			this->chart1->Location = System::Drawing::Point(12, 12);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series5->Name = L"Particle";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastLine;
			series6->Name = L"Trajectory";
			this->chart1->Series->Add(series5);
			this->chart1->Series->Add(series6);
			this->chart1->Size = System::Drawing::Size(606, 216);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			this->chart2->BackColor = System::Drawing::SystemColors::Control;
			chartArea4->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea4);
			this->chart2->Location = System::Drawing::Point(12, 232);
			this->chart2->Name = L"chart2";
			this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series7->Name = L"Particle";
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastLine;
			series8->Name = L"Trajectory";
			this->chart2->Series->Add(series7);
			this->chart2->Series->Add(series8);
			this->chart2->Size = System::Drawing::Size(606, 216);
			this->chart2->TabIndex = 0;
			this->chart2->Text = L"chart1";
			// 
			// start_button
			// 
			this->start_button->Location = System::Drawing::Point(624, 382);
			this->start_button->Name = L"start_button";
			this->start_button->Size = System::Drawing::Size(187, 30);
			this->start_button->TabIndex = 1;
			this->start_button->Text = L"Пуск";
			this->start_button->UseVisualStyleBackColor = true;
			this->start_button->Click += gcnew System::EventHandler(this, &Window::start_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(621, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Частица";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(624, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Скорость";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(624, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Заряд";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label5->Location = System::Drawing::Point(621, 151);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Поля";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(624, 199);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"B=";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(624, 173);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"E=";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(624, 225);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(32, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Угол";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label9->Location = System::Drawing::Point(621, 259);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 13);
			this->label9->TabIndex = 2;
			this->label9->Text = L"График";
			// 
			// stop_button
			// 
			this->stop_button->Enabled = false;
			this->stop_button->Location = System::Drawing::Point(624, 418);
			this->stop_button->Name = L"stop_button";
			this->stop_button->Size = System::Drawing::Size(187, 30);
			this->stop_button->TabIndex = 1;
			this->stop_button->Text = L"Пауза";
			this->stop_button->UseVisualStyleBackColor = true;
			this->stop_button->Click += gcnew System::EventHandler(this, &Window::stop_button_Click);
			// 
			// val_charge
			// 
			this->val_charge->DecimalPlaces = 4;
			this->val_charge->Location = System::Drawing::Point(700, 33);
			this->val_charge->Name = L"val_charge";
			this->val_charge->Size = System::Drawing::Size(74, 20);
			this->val_charge->TabIndex = 3;
			this->val_charge->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 196608 });
			// 
			// velocity_x
			// 
			this->velocity_x->Location = System::Drawing::Point(627, 73);
			this->velocity_x->Name = L"velocity_x";
			this->velocity_x->Size = System::Drawing::Size(52, 20);
			this->velocity_x->TabIndex = 3;
			// 
			// velocity_y
			// 
			this->velocity_y->Location = System::Drawing::Point(685, 73);
			this->velocity_y->Name = L"velocity_y";
			this->velocity_y->Size = System::Drawing::Size(52, 20);
			this->velocity_y->TabIndex = 3;
			// 
			// velocity_z
			// 
			this->velocity_z->Location = System::Drawing::Point(743, 73);
			this->velocity_z->Name = L"velocity_z";
			this->velocity_z->Size = System::Drawing::Size(52, 20);
			this->velocity_z->TabIndex = 3;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(624, 281);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(86, 13);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Максимальные";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(624, 325);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(80, 13);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Минимальные";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(624, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Положение";
			// 
			// initial_x
			// 
			this->initial_x->Location = System::Drawing::Point(627, 114);
			this->initial_x->Name = L"initial_x";
			this->initial_x->Size = System::Drawing::Size(52, 20);
			this->initial_x->TabIndex = 3;
			// 
			// initial_y
			// 
			this->initial_y->Location = System::Drawing::Point(685, 114);
			this->initial_y->Name = L"initial_y";
			this->initial_y->Size = System::Drawing::Size(52, 20);
			this->initial_y->TabIndex = 3;
			// 
			// initial_z
			// 
			this->initial_z->Location = System::Drawing::Point(743, 114);
			this->initial_z->Name = L"initial_z";
			this->initial_z->Size = System::Drawing::Size(52, 20);
			this->initial_z->TabIndex = 3;
			// 
			// val_E
			// 
			this->val_E->Location = System::Drawing::Point(700, 171);
			this->val_E->Name = L"val_E";
			this->val_E->Size = System::Drawing::Size(74, 20);
			this->val_E->TabIndex = 3;
			this->val_E->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// val_B
			// 
			this->val_B->Location = System::Drawing::Point(700, 197);
			this->val_B->Name = L"val_B";
			this->val_B->Size = System::Drawing::Size(74, 20);
			this->val_B->TabIndex = 3;
			this->val_B->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// val_angle
			// 
			this->val_angle->DecimalPlaces = 2;
			this->val_angle->Location = System::Drawing::Point(700, 223);
			this->val_angle->Name = L"val_angle";
			this->val_angle->Size = System::Drawing::Size(74, 20);
			this->val_angle->TabIndex = 3;
			this->val_angle->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// x_max
			// 
			this->x_max->Location = System::Drawing::Point(624, 297);
			this->x_max->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->x_max->Name = L"x_max";
			this->x_max->Size = System::Drawing::Size(52, 20);
			this->x_max->TabIndex = 3;
			this->x_max->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 250, 0, 0, 0 });
			this->x_max->ValueChanged += gcnew System::EventHandler(this, &Window::graph_change);
			// 
			// y_max
			// 
			this->y_max->Location = System::Drawing::Point(682, 297);
			this->y_max->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->y_max->Name = L"y_max";
			this->y_max->Size = System::Drawing::Size(52, 20);
			this->y_max->TabIndex = 3;
			this->y_max->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->y_max->ValueChanged += gcnew System::EventHandler(this, &Window::graph_change);
			// 
			// z_max
			// 
			this->z_max->Location = System::Drawing::Point(740, 297);
			this->z_max->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->z_max->Name = L"z_max";
			this->z_max->Size = System::Drawing::Size(52, 20);
			this->z_max->TabIndex = 3;
			this->z_max->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->z_max->ValueChanged += gcnew System::EventHandler(this, &Window::graph_change);
			// 
			// x_min
			// 
			this->x_min->Location = System::Drawing::Point(624, 341);
			this->x_min->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 0, 0, 0, 0 });
			this->x_min->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->x_min->Name = L"x_min";
			this->x_min->Size = System::Drawing::Size(52, 20);
			this->x_min->TabIndex = 3;
			this->x_min->ValueChanged += gcnew System::EventHandler(this, &Window::graph_change);
			// 
			// y_min
			// 
			this->y_min->Location = System::Drawing::Point(682, 341);
			this->y_min->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 0, 0, 0, 0 });
			this->y_min->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->y_min->Name = L"y_min";
			this->y_min->Size = System::Drawing::Size(52, 20);
			this->y_min->TabIndex = 3;
			this->y_min->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, System::Int32::MinValue });
			this->y_min->ValueChanged += gcnew System::EventHandler(this, &Window::graph_change);
			// 
			// z_min
			// 
			this->z_min->Location = System::Drawing::Point(740, 341);
			this->z_min->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 0, 0, 0, 0 });
			this->z_min->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->z_min->Name = L"z_min";
			this->z_min->Size = System::Drawing::Size(52, 20);
			this->z_min->TabIndex = 3;
			this->z_min->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, System::Int32::MinValue });
			this->z_min->ValueChanged += gcnew System::EventHandler(this, &Window::graph_change);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(780, 35);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(20, 13);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Кл";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(780, 173);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(27, 13);
			this->label13->TabIndex = 2;
			this->label13->Text = L"В/м";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(780, 199);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(20, 13);
			this->label14->TabIndex = 2;
			this->label14->Text = L"Тл";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(780, 225);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(25, 13);
			this->label15->TabIndex = 2;
			this->label15->Text = L"рад";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Window::timer1_Tick);
			// 
			// Window
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(823, 460);
			this->Controls->Add(this->initial_z);
			this->Controls->Add(this->z_min);
			this->Controls->Add(this->z_max);
			this->Controls->Add(this->velocity_z);
			this->Controls->Add(this->initial_y);
			this->Controls->Add(this->y_min);
			this->Controls->Add(this->y_max);
			this->Controls->Add(this->velocity_y);
			this->Controls->Add(this->initial_x);
			this->Controls->Add(this->x_min);
			this->Controls->Add(this->x_max);
			this->Controls->Add(this->velocity_x);
			this->Controls->Add(this->val_angle);
			this->Controls->Add(this->val_B);
			this->Controls->Add(this->val_E);
			this->Controls->Add(this->val_charge);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->stop_button);
			this->Controls->Add(this->start_button);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Name = L"Window";
			this->Text = L"Window";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->val_charge))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->velocity_x))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->velocity_y))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->velocity_z))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->initial_x))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->initial_y))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->initial_z))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->val_E))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->val_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->val_angle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->x_max))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->y_max))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->z_max))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->x_min))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->y_min))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->z_min))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			bool paused;
			qParticle *q;

		private: System::Void set_enabled(bool);
		private: System::Void graph_change(System::Object^  sender, System::EventArgs^  e);
		private: System::Void start_button_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void stop_button_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e);
	};
}
