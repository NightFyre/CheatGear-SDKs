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
	 * WidgetBlueprintGeneratedClass WB_TradingPhaseConfirm.WB_TradingPhaseConfirm_C
	 * Size -> 0x0010 (FullSize[0x0320] - InheritedSize[0x0310])
	 */
	class UWB_TradingPhaseConfirm_C : public UDCTradePhaseConfirmWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0310(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          TradeFee_Text;                                           // 0x0318(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		class FText GetTradeFeeText();
		void BndEvt__WB_TradingPhaseConfirm_TradeBoxLocal_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool bState);
		void ExecuteUbergraph_WB_TradingPhaseConfirm(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
