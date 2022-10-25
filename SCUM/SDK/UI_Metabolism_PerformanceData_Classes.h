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
	 * WidgetBlueprintGeneratedClass UI_Metabolism_PerformanceData.UI_Metabolism_PerformanceData_C
	 * Size -> 0x0010 (FullSize[0x0310] - InheritedSize[0x0300])
	 */
	class UUI_Metabolism_PerformanceData_C : public UMetabolismPerformanceDataPanel
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_CollapsableContainer_C*                          UI_CollapsableContainer;                                 // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		class UWidget* GetStaminaToolTip();
		class UWidget* GetMeleeDamageToolTip();
		class UWidget* GetStealthFactorToolTip();
		class UWidget* GetPerformanceScoreToolTip();
		class UWidget* GetImmuneSystemToolTip();
		class UWidget* GetBloodRecoveryRateToolTip();
		class UWidget* GetHealingSpeedToolTip();
		class UWidget* GetOverloadPenaltyWaterToolTip();
		class UWidget* GetOverloadPenaltyCaloriesToolTip();
		class UWidget* GetRunSpeedToolTip();
		class UWidget* GetJogSpeedToolTip();
		class UWidget* GetWalkSpeedToolTip();
		class UWidget* GetWeightLoadToolTip();
		class UWidget* GetConsumptionRecoveryExtremelyDemandingToolTip();
		class UWidget* GetConsumptionRecoveryVeryDemandingToolTip();
		class UWidget* GetConsumptionRecoveryDemandingToolTip();
		class UWidget* GetConsumptionRecoveryEasyToolTip();
		class UWidget* GetConsumptionRecoveryIdleToolTip();
		class UWidget* GetConsumptionRecoveryRestingToolTip();
		void ExecuteUbergraph_UI_Metabolism_PerformanceData(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
