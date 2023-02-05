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
	 * WidgetBlueprintGeneratedClass WB_MerchantItemStorage.WB_MerchantItemStorage_C
	 * Size -> 0x000F (FullSize[0x05E8] - InheritedSize[0x05D9])
	 */
	class UWB_MerchantItemStorage_C : public UWB_MerchantItemBase_C
	{
	public:
		unsigned char                                              UnknownData_6S4M[0x7];                                   // 0x05D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05E0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnActiveSellBackService(class UWB_ItemTooltip_C* ItemTooltip, bool bActive);
		void Construct();
		void ExecuteUbergraph_WB_MerchantItemStorage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
