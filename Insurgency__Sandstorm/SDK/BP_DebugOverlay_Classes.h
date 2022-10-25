#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * WidgetBlueprintGeneratedClass BP_DebugOverlay.BP_DebugOverlay_C
	 * Size -> 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
	 */
	class UBP_DebugOverlay_C : public UUserWidget
	{
	public:
		class UTextBlock*                                          TextBlock_144;                                           // 0x0230(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      TextCacheTime;                                           // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FHFF[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CachedText;                                              // 0x0240(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		class FText GetText_1();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
