#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * WidgetBlueprintGeneratedClass WBP_StanceIndicator.WBP_StanceIndicator_C
	 * Size -> 0x0010 (FullSize[0x0248] - InheritedSize[0x0238])
	 */
	class UWBP_StanceIndicator_C : public UHDUIUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              StanceIcon;                                              // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SetHealth(float NewHealthValueNorm, float PrevHealthValueNorm);
		void StanceStateUpdate(EHDUICharacterStanceState State);
		void ExecuteUbergraph_WBP_StanceIndicator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
