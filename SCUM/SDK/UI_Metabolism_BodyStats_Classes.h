#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass UI_Metabolism_BodyStats.UI_Metabolism_BodyStats_C
	 * Size -> 0x0008 (FullSize[0x02E0] - InheritedSize[0x02D8])
	 */
	class UUI_Metabolism_BodyStats_C : public UMetabolismBodyStatsPanel
	{
	public:
		class UUI_CollapsableContainer_C*                          UI_CollapsableContainer;                                 // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		class UWidget* GetNutrientAbsorptionAlcoholToolTip();
		class UWidget* GetNutrientAbsorptionWaterToolTip();
		class UWidget* GetNutrientAbsorptionVitaminsToolTip();
		class UWidget* GetNutrientAbsorptionMineralsToolTip();
		class UWidget* GetNutrientAbsorptionFatToolTip();
		class UWidget* GetNutrientAbsorptionCarbsToolTip();
		class UWidget* GetNutrientAbsorptionProteinToolTip();
		class UWidget* GetBodyMassDistributionMuscleToolTip();
		class UWidget* GetBodyMassDistributionFatToolTip();
		class UWidget* GetBodyMassDistributionOrgansToolTip();
		class UWidget* GetBodyMassDistributionSkinToolTip();
		class UWidget* GetBodyMassDistributionIntestinesToolTip();
		class UWidget* GetBodyMassDistributionBloodToolTip();
		class UWidget* GetBodyMassDistributionBonesToolTip();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
