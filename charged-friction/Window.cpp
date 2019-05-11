#include "Window.h"

namespace chargedfriction {
	System::Void Window::set_enabled(bool enabled) {
		initial_z->Enabled = enabled;
		velocity_z->Enabled = enabled;
		initial_y->Enabled = enabled;
		velocity_y->Enabled = enabled;
		initial_x->Enabled = enabled;
		velocity_x->Enabled = enabled;
		val_angle->Enabled = enabled;
		val_B->Enabled = enabled;
		val_E->Enabled = enabled;
		val_charge->Enabled = enabled;
		stop_button->Enabled = !enabled;
		start_button->Enabled = enabled;

		
	}

	System::Void Window::graph_change(System::Object^  sender, System::EventArgs^  e) {
		chart1->ChartAreas[0]->AxisX->Maximum = (double)x_max->Value;
		chart1->ChartAreas[0]->AxisY->Maximum = (double)y_max->Value;
		chart2->ChartAreas[0]->AxisX->Maximum = (double)x_max->Value;
		chart2->ChartAreas[0]->AxisY->Maximum = (double)z_max->Value;

		chart1->ChartAreas[0]->AxisX->Minimum = (double)x_min->Value;
		chart1->ChartAreas[0]->AxisY->Minimum = (double)y_min->Value;
		chart2->ChartAreas[0]->AxisX->Minimum = (double)x_min->Value;
		chart2->ChartAreas[0]->AxisY->Minimum = (double)z_min->Value;
	}


	System::Void Window::start_button_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!paused) {
			// Включаем и отключаем кнопки и текстовые блоки, таймеры
			timer1->Enabled = true;
			set_enabled(false);
			paused = false;

			// Устанавливаем размеры графиков
			graph_change(sender, e);

			// Добавление первой точки на графики
			chart1->Series[0]->Points->AddXY((double)initial_x->Value, (double)initial_y->Value);
			chart2->Series[0]->Points->AddXY((double)initial_x->Value, (double)initial_z->Value);

			// Создание частицы и задание начальных условий
			q = new qParticle((double)val_charge->Value, (double)val_E->Value, (double)val_B->Value, (double)val_angle->Value);
			
			std::vector<double> Y0(6);
			Y0[0] = (double)initial_x->Value;
			Y0[1] = (double)initial_y->Value;
			Y0[2] = (double)initial_z->Value;
			Y0[3] = (double)velocity_x->Value;
			Y0[4] = (double)velocity_y->Value;
			Y0[5] = (double)velocity_z->Value;

			q->SetInit(0, Y0);
		}
		else {
			timer1->Enabled = true;
			paused = false;
			start_button->Enabled = false;
			stop_button->Text = "Пауза";
		}
	}

	System::Void Window::stop_button_Click(System::Object^  sender, System::EventArgs^  e) {
		if (paused) {
			// Включаем и отключаем кнопки и текстовые блоки, таймеры
			timer1->Enabled = false;
			set_enabled(true);
			paused = false;
			stop_button->Text = "Пауза";

			chart1->Series[0]->Points->Clear();
			chart2->Series[0]->Points->Clear();
			chart1->Series[1]->Points->Clear();
			chart2->Series[1]->Points->Clear();

			q = 0;
		}
		else {
			timer1->Enabled = false;
			paused = true;
			start_button->Enabled = true;
			stop_button->Text = "Стоп";
		}
	}

	System::Void Window::timer1_Tick(System::Object ^ sender, System::EventArgs ^ e)
	{
		q->NextStep((double)timer1->Interval / 1000.0);

		double x,y,z;
		x = q->get_x();
		y = q->get_y();
		z = q->get_z();

		chart1->Series["Particle"]->Points->Clear();
		chart2->Series["Particle"]->Points->Clear();

		chart1->Series["Particle"]->Points->AddXY(x, y);
		chart2->Series["Particle"]->Points->AddXY(x, z);

		chart1->Series["Trajectory"]->Points->AddXY(x, y);
		chart2->Series["Trajectory"]->Points->AddXY(x, z);
	}

}