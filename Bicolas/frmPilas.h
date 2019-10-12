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
	/// Resumen de frmPilas
	/// </summary>
	public ref class frmPilas : public System::Windows::Forms::Form
	{
	public:
		frmPilas(void)
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
		~frmPilas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtCodigo;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtNombre;
	private: System::Windows::Forms::DateTimePicker^  dtFecha;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtCantidad;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtPrecio;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  btnApilar;
	private: System::Windows::Forms::Button^  btnDesapilar;
	private: System::Windows::Forms::DataGridView^  dgvLista;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colCodigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colFecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colPrecio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  colCantidad;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtCodigo = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->dtFecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtCantidad = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtPrecio = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnApilar = (gcnew System::Windows::Forms::Button());
			this->btnDesapilar = (gcnew System::Windows::Forms::Button());
			this->dgvLista = (gcnew System::Windows::Forms::DataGridView());
			this->colCodigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colFecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colPrecio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// txtCodigo
			// 
			this->txtCodigo->Location = System::Drawing::Point(104, 25);
			this->txtCodigo->Name = L"txtCodigo";
			this->txtCodigo->Size = System::Drawing::Size(159, 20);
			this->txtCodigo->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nombre:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(104, 60);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(159, 20);
			this->txtNombre->TabIndex = 3;
			// 
			// dtFecha
			// 
			this->dtFecha->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtFecha->Location = System::Drawing::Point(140, 98);
			this->dtFecha->Name = L"dtFecha";
			this->dtFecha->Size = System::Drawing::Size(123, 20);
			this->dtFecha->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Fecha :";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// txtCantidad
			// 
			this->txtCantidad->Location = System::Drawing::Point(104, 177);
			this->txtCantidad->Name = L"txtCantidad";
			this->txtCantidad->Size = System::Drawing::Size(159, 20);
			this->txtCantidad->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 180);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Cantidad :";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// txtPrecio
			// 
			this->txtPrecio->Location = System::Drawing::Point(104, 142);
			this->txtPrecio->Name = L"txtPrecio";
			this->txtPrecio->Size = System::Drawing::Size(159, 20);
			this->txtPrecio->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(29, 145);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Precio :";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnApilar
			// 
			this->btnApilar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->btnApilar->Location = System::Drawing::Point(345, 25);
			this->btnApilar->Name = L"btnApilar";
			this->btnApilar->Size = System::Drawing::Size(100, 38);
			this->btnApilar->TabIndex = 10;
			this->btnApilar->Text = L"Apilar";
			this->btnApilar->UseVisualStyleBackColor = true;
			this->btnApilar->Click += gcnew System::EventHandler(this, &frmPilas::btnApilar_Click);
			// 
			// btnDesapilar
			// 
			this->btnDesapilar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->btnDesapilar->Location = System::Drawing::Point(345, 84);
			this->btnDesapilar->Name = L"btnDesapilar";
			this->btnDesapilar->Size = System::Drawing::Size(100, 38);
			this->btnDesapilar->TabIndex = 11;
			this->btnDesapilar->Text = L"Desapilar";
			this->btnDesapilar->UseVisualStyleBackColor = true;
			this->btnDesapilar->Click += gcnew System::EventHandler(this, &frmPilas::btnDesapilar_Click);
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
			this->dgvLista->Location = System::Drawing::Point(32, 228);
			this->dgvLista->Name = L"dgvLista";
			this->dgvLista->ReadOnly = true;
			this->dgvLista->Size = System::Drawing::Size(577, 221);
			this->dgvLista->TabIndex = 12;
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
			// frmPilas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(621, 461);
			this->Controls->Add(this->dgvLista);
			this->Controls->Add(this->btnDesapilar);
			this->Controls->Add(this->btnApilar);
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
			this->Name = L"frmPilas";
			this->Text = L"frmPilas";
			this->Load += gcnew System::EventHandler(this, &frmPilas::frmPilas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:char *StringToChar(System::Windows::Forms::TextBox^ textBox) {
		String^ val = textBox->Text;
		IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(val);
		char* r = static_cast<char*>(ptrToNativeString.ToPointer());
		return r;
	}
	private: System::Void btnApilar_Click(System::Object^  sender, System::EventArgs^  e) {
		Producto ex;
		strcpy(ex.codigo, StringToChar(txtCodigo));
		strcpy(ex.nombre, StringToChar(txtNombre));
		ex.fecVen.d = dtFecha->Value.Day;
		ex.fecVen.m = dtFecha->Value.Month;
		ex.fecVen.a = dtFecha->Value.Year;
		ex.precio = Convert::ToDouble(txtPrecio->Text);
		ex.cantidad = Convert::ToDouble(txtCantidad->Text);

		apilar(topePila, limite, ex, PilaProductoIni, PilaProductoFin);

		mostrarLista();
	}
	private: System::Void btnDesapilar_Click(System::Object^  sender, System::EventArgs^  e) {

		desaPilar(topePila, PilaProductoIni, PilaProductoFin);
		mostrarLista();
	}
	private: System::Void frmPilas_Load(System::Object^  sender, System::EventArgs^  e) {
		mostrarLista();
	}
	private:void mostrarLista() {
		int ta = 0;
		NodoSProducto *Ini, *Fin;
		Ini = NULL, Fin = NULL;
		dgvLista->Rows->Clear();
		while (!estaVacia(topePila))
		{
			Producto ex = desaPilar(topePila, PilaProductoIni, PilaProductoFin);
			dgvLista->Rows->Add(
				gcnew String(ex.codigo),
				gcnew String(ex.nombre),
				DateTime(ex.fecVen.a, ex.fecVen.m, ex.fecVen.d).ToString("dd/MM/yyyy"),
				ex.precio,
				ex.cantidad
			);

			apilar(ta, limite, ex, Ini, Fin);
		}
		while (!estaVacia(ta))
		{
			Producto ex = desaPilar(ta, Ini, Fin);
			apilar(topePila, limite, ex, PilaProductoIni, PilaProductoFin);
		}
	}

	};
}
