#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjetControle {

	/// <summary>
	/// Description résumée de ProjetControleControl
	/// </summary>
	public ref class ProjetControleControl : public System::Windows::Forms::TextBox
	{
	public:
		ProjetControleControl(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//

			sValeur = ""; //Initialisation de l'attribut "sValeur"
		}
		#pragma region // Zone propriétés
			public:
			[Category("IR")]
			[Description("Propriété utilisée pour changer le texte sValeur")]
			[Browsable(true)]
			property String ^ Valeur
			{
				String^ get()
				{
					return sValeur;
				}
				void set(String^ value)
				{
					sValeur = value;
				}
			}
		#pragma endregion


	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~ProjetControleControl()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

		///Ajout d'un attribut "sValeur"
		String^ sValeur;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			//this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		}
#pragma endregion
	};


}
