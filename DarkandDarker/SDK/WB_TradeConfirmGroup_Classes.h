#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * WidgetBlueprintGeneratedClass WB_TradeConfirmGroup.WB_TradeConfirmGroup_C
	 * Size -> 0x0008 (FullSize[0x0328] - InheritedSize[0x0320])
	 */
	class UWB_TradeConfirmGroup_C : public ULobbyGroupWidgetBase
	{
	public:
		class UWB_TradingPhaseConfirm_C*                           WB_TradingPhaseConfirm;                                  // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
