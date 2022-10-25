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
	 * WidgetBlueprintGeneratedClass BP_ContextualHUDHint_CombinedKeys.BP_ContextualHUDHint_CombinedKeys_C
	 * Size -> 0x0138 (FullSize[0x0368] - InheritedSize[0x0230])
	 */
	class UBP_ContextualHUDHint_CombinedKeys_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_GenericImage_C*                                  BP_GenericImage;                                         // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HintImage;                                               // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionIcon_C*                                 HintKey;                                                 // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionIcon_C*                                 HintKey_2;                                               // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          HintTextBlock;                                           // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTexture2D*                                          HintImageTexture;                                        // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                HintText;                                                // 0x0268(0x0018) Edit, BlueprintVisible
		bool                                                       HasIcon;                                                 // 0x0280(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OC4B[0x7];                                   // 0x0281(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLessonInputAction                                  InputKey0;                                               // 0x0288(0x0070) Edit, BlueprintVisible, ExposeOnSpawn
		struct FLessonInputAction                                  InputKey1;                                               // 0x02F8(0x0070) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void BndEvt__HintKey_K2Node_ComponentBoundEvent_0_OnIconRebuit__DelegateSignature();
		void BuildIcon(bool Gamepad);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_BP_ContextualHUDHint_CombinedKeys(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
