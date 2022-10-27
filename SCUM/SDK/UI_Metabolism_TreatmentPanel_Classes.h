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
	 * WidgetBlueprintGeneratedClass UI_Metabolism_TreatmentPanel.UI_Metabolism_TreatmentPanel_C
	 * Size -> 0x0018 (FullSize[0x02B0] - InheritedSize[0x0298])
	 */
	class UUI_Metabolism_TreatmentPanel_C : public UMetabolismTreatmentPanel
	{
	public:
		class UImage*                                              RecoveryBackground;                                      // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              StabilizationBackground;                                 // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              UntreatedBackground;                                     // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		class UWidget* Get_RecoveryBackground_ToolTipWidget_1();
		class UWidget* GetStabilizationToolTip();
		class UWidget* GetUntreatedToolTip();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
