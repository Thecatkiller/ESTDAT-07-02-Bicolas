#pragma once

namespace Bicolas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	/// <summary>
	/// Resumen de frmColas
	/// </summary>
	public ref class frmColas : public System::Windows::Forms::Form
	{
	public:
		frmColas(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmColas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dgvLista;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colCodigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colFecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colPrecio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colCantidad;
	private: System::Windows::Forms::Button^  btnDesencolar;
	private: System::Windows::Forms::Button^  btnEncolar;
	private: System::Windows::Forms::TextBox^  txtCantidad;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtPrecio;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DateTimePicker^  dtFecha;
	private: System::Windows::Forms::TextBox^  txtNombre;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtCodigo;
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgvLista = (gcnew System::Windows::Forms::DataGridView());
			this->colCodigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colFecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colPrecio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnDesencolar = (gcnew System::Windows::Forms::Button());
			this->btnEncolar = (gcnew System::Windows::Forms::Button());
			this->txtCantidad = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtPrecio = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dtFecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtCodigo = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvLista
			// 
			this->dgvLista->AllowUserToAddRows = false;
			this->dgvLista->AllowUserToDeleteRows = false;
			this->dgvLista->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->colCodigo, this->colNombre,
					this->colFecha, this->colPrecio, this->colCantidad
			});
			this->dgvLista->Location = System::Drawing::Point(15, 221);
			this->dgvLista->Name = L"dgvLista";
			this->dgvLista->ReadOnly = true;
			this->dgvLista->Size = System::Drawing::Size(577, 221);
			this->dgvLista->TabIndex = 25;
			// 
			// colCodigo
			// 
			this->colCodigo->HeaderText = L"Codigo";
			this->colCodigo->Name = L"colCodigo";
			this->colCodigo->ReadOnly = true;
			// 
			// colNombre
			// 
			this->colNombre->HeaderText = L"Nombre";
			this->colNombre->Name = L"colNombre";
			this->colNombre->ReadOnly = true;
			// 
			// colFecha
			// 
			this->colFecha->HeaderText = L"Fecha";
			this->colFecha->Name = L"colFecha";
			this->colFecha->ReadOnly = true;
			// 
			// colPrecio
			// 
			this->colPrecio->HeaderText = L"Precio";
			this->colPrecio->Name = L"colPrecio";
			this->colPrecio->ReadOnly = true;
			// 
			// colCantidad
			// 
			this->colCantidad->HeaderText = L"Cantidad";
			this->colCantidad->Name = L"colCantidad";
			this->colCantidad->ReadOnly = true;
			// 
			// btnDesencolar
			// 
			this->btnDesencolar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->btnDesencolar->Location = System::Drawing::Point(328, 77);
			this->btnDesencolar->Name = L"btnDesencolar";
			this->btnDesencolar->Size = System::Drawing::Size(100, 38);
			this->btnDesencolar->TabIndex = 24;
			this->btnDesencolar->Text = L"Desencolar";
			this->btnDesencolar->UseVisualStyleBackColor = true;
			this->btnDesencolar->Click += gcnew System::EventHandler(this, &frmColas::btnDesencolar_Click);
			// 
			// btnEncolar
			// 
			this->btnEncolar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->btnEncolar->Location = System::Drawing::Point(328, 18);
			this->btnEncolar->Name = L"btnEncolar";
			this->btnEncolar->Size = System::Drawing::Size(100, 38);
			this->btnEncolar->TabIndex = 23;
			this->btnEncolar->Text = L"Encolar";
			this->btnEncolar->UseVisualStyleBackColor = true;
			this->btnEncolar->Click += gcnew System::EventHandler(this, &frmColas::btnEncolar_Click);
			// 
			// txtCantidad
			// 
			this->txtCantidad->Location = System::Drawing::Point(87, 170);
			this->txtCantidad->Name = L"txtCantidad";
			this->txtCantidad->Size = System::Drawing::Size(159, 20);
			this->txtCantidad->TabIndex = 22;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 173);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Cantidad :";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// txtPrecio
			// 
			this->txtPrecio->Location = System::Drawing::Point(87, 135);
			this->txtPrecio->Name = L"txtPrecio";
			this->txtPrecio->Size = System::Drawing::Size(159, 20);
			this->txtPrecio->TabIndex = 20;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 138);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 13);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Precio :";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Fecha :";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// dtFecha
			// 
			this->dtFecha->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtFecha->Location = System::Drawing::Point(123, 91);
			this->dtFecha->Name = L"dtFecha";
			this->dtFecha->Size = System::Drawing::Size(123, 20);
			this->dtFecha->TabIndex = 17;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(87, 53);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(159, 20);
			this->txtNombre->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Nombre:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// txtCodigo
			// 
			this->txtCodigo->Location = System::Drawing::Point(87, 18);
			this->txtCodigo->Name = L"txtCodigo";
			this->txtCodigo->Size = System::Drawing::Size(159, 20);
			this->txtCodigo->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Código:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// frmColas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(601, 459);
			this->Controls->Add(this->dgvLista);
			this->Controls->Add(this->btnDesencolar);
			this->Controls->Add(this->btnEncolar);
			this->Controls->Add(this->txtCantidad);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtPrecio);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dtFecha);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtCodigo);
			this->Controls->Add(this->label1);
			this->Name = L"frmColas";
			this->Text = L"frmColas";
			this->Load += gcnew System::EventHandler(this, &frmColas::frmColas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmColas_Load(System::Object^  sender, System::EventArgs^  e) {
		mostrarLista();
	}
	private:char *StringToChar(System::Windows::Forms::TextBox^ textBox) {
		String^ val = textBox->Text;
		IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(val);
		char* r = static_cast<char*>(ptrToNativeString.ToPointer());
		return r;
	}
	private: System::Void btnEncolar_Click(System::Object^  sender, System::EventArgs^  e) {
		Producto ex;
		strcpy(ex.codigo, StringToChar(txtCodigo));
		strcpy(ex.nombre, StringToChar(txtNombre));
		ex.fecVen.d = dtFecha->Value.Day;
		ex.fecVen.m = dtFecha->Value.Month;
		ex.fecVen.a = dtFecha->Value.Year;
		ex.precio = Convert::ToDouble(txtPrecio->Text);
		ex.cantidad = Convert::ToDouble(txtCantidad->Text);

		enColar(topeCola, limite, ex, ColaProductoIni, ColaProductoFin);

		mostrarLista();
	}
	private: System::Void btnDesencolar_Click(System::Object^  sender, System::EventArgs^  e) {

		desenColar(topeCola, ColaProductoIni, ColaProductoFin);
		mostrarLista();
	}

	private:void mostrarLista() {
		int ta = 0;
		NodoSProducto *Ini, *Fin;
		Ini = NULL, Fin = NULL;
		dgvLista->Rows->Clear();
		while (!estaVacia(topeCola))
		{
			Producto ex = desenColar(topeCola, ColaProductoIni, ColaProductoFin);
			dgvLista->Rows->Add(
				gcnew String(ex.codigo),
				gcnew String(ex.nombre),
				DateTime(ex.fecVen.a, ex.fecVen.m, ex.fecVen.d).ToString("dd/MM/yyyy"),
				ex.precio,
				ex.cantidad
			);

			enColar(ta, limite, ex, Ini, Fin);
		}
		while (!estaVacia(ta))
		{
			Producto ex = desenColar(ta, Ini, Fin);
			enColar(topeCola, limite, ex, ColaProductoIni, ColaProductoFin);
		}
	}

	};
}
