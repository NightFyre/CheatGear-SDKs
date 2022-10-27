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
	 * WidgetBlueprintGeneratedClass UI_CharacterSlot.UI_CharacterSlot_C
	 * Size -> 0x0040 (FullSize[0x02B8] - InheritedSize[0x0278])
	 */
	class UUI_CharacterSlot_C : public UDesignableUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_1;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_TrashMenuButton_C*                               UI_MenuButton_129;                                       // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnDestroyClicked;                                        // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UUserProfile*                                        UserProfile;                                             // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void OnSynchronizeProperties();
		void BndEvt__UI_MenuButton_128_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_UI_CharacterSlot(int32_t EntryPoint);
		void OnDestroyClicked__DelegateSignature(class UUI_CharacterSlot_C* Widget);
		void OnClicked__DelegateSignature(class UUserProfile* UserProfile);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
