#pragma once

namespace TestControl {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ProjetControle::ProjetControleControl^ projetControleControl1;
	protected:

	protected:

	protected:
	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->projetControleControl1 = (gcnew ProjetControle::ProjetControleControl());
			this->SuspendLayout();
			// 
			// projetControleControl1
			// 
			this->projetControleControl1->Location = System::Drawing::Point(87, 112);
			this->projetControleControl1->Name = L"projetControleControl1";
			this->projetControleControl1->Size = System::Drawing::Size(100, 20);
			this->projetControleControl1->TabIndex = 0;
			this->projetControleControl1->Valeur = L"";
			// 
			// MyForm
			// 
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->projetControleControl1);
			this->Name = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
